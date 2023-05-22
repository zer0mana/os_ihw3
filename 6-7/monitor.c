#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define HOTEL_STATUS_FILE "hotel_status.txt"

int main() {
  FILE* fp = fopen(HOTEL_STATUS_FILE, "r");
  if (!fp) {
    perror("fopen");
    return 1;
  }

  char status[256];
  while (fgets(status, sizeof(status), fp) != NULL) {
    printf("%s", status);
  }

  fclose(fp);
  return 0;
}

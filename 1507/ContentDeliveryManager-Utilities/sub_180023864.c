/*
 * XREFs of sub_180023864 @ 0x180023864
 * Callers:
 *     sub_180023CBC @ 0x180023CBC (sub_180023CBC.c)
 * Callees:
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void *__fastcall sub_180023864(void *a1, int a2, const void *a3)
{
  memcpy(a1, a3, 4LL * a2);
  return a1;
}

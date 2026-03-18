/*
 * XREFs of sub_140496634 @ 0x140496634
 * Callers:
 *     sub_14045751C @ 0x14045751C (sub_14045751C.c)
 *     sub_140496110 @ 0x140496110 (sub_140496110.c)
 * Callees:
 *     sub_140496670 @ 0x140496670 (sub_140496670.c)
 */

void *__fastcall sub_140496634(char *a1)
{
  ((void (*)(void))sub_140496670)();
  sub_140496670(a1 + 40);
  sub_140496670(a1 + 56);
  sub_140496670(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}

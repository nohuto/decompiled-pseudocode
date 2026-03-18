/*
 * XREFs of sub_140496698 @ 0x140496698
 * Callers:
 *     sub_14045751C @ 0x14045751C (sub_14045751C.c)
 *     sub_140496110 @ 0x140496110 (sub_140496110.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1404966D4 @ 0x1404966D4 (sub_1404966D4.c)
 */

__int64 __fastcall sub_140496698(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_1404966D4(a1);
  sub_1404966D4(a1 + 40);
  sub_1404966D4(a1 + 56);
  return sub_1404966D4(a1 + 72);
}

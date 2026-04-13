/*
 * XREFs of sub_1800120D0 @ 0x1800120D0
 * Callers:
 *     sub_18000DAA8 @ 0x18000DAA8 (sub_18000DAA8.c)
 * Callees:
 *     sub_180015D50 @ 0x180015D50 (sub_180015D50.c)
 */

_QWORD *__fastcall sub_1800120D0(__int64 a1, _QWORD *a2)
{
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  sub_180015D50(a2);
  return a2;
}

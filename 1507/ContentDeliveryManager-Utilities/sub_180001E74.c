/*
 * XREFs of sub_180001E74 @ 0x180001E74
 * Callers:
 *     sub_180002200 @ 0x180002200 (sub_180002200.c)
 * Callees:
 *     sub_180001AB4 @ 0x180001AB4 (sub_180001AB4.c)
 */

__int64 __fastcall sub_180001E74(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  sub_180001AB4(a1, a2);
  return a1;
}

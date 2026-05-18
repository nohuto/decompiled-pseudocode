/*
 * XREFs of sub_180004E08 @ 0x180004E08
 * Callers:
 *     sub_180004FC0 @ 0x180004FC0 (sub_180004FC0.c)
 *     sub_180005050 @ 0x180005050 (sub_180005050.c)
 *     sub_1800051B0 @ 0x1800051B0 (sub_1800051B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180004E08(__int64 a1, unsigned int a2)
{
  if ( a2 == -1073741769 || a2 == -1073741229 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 1, 0);
  return a2;
}

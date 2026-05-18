/*
 * XREFs of sub_180003700 @ 0x180003700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003610 @ 0x180003610 (sub_180003610.c)
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 */

__int64 __fastcall sub_180003700(__int64 a1, char a2)
{
  sub_180003610(a1);
  if ( (a2 & 1) != 0 )
    sub_180003E20(a1);
  return a1;
}

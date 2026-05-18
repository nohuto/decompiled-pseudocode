/*
 * XREFs of sub_180004D90 @ 0x180004D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 *     sub_180004DC8 @ 0x180004DC8 (sub_180004DC8.c)
 */

__int64 __fastcall sub_180004D90(__int64 a1, char a2)
{
  sub_180004DC8();
  if ( (a2 & 1) != 0 )
    sub_180003E20(a1);
  return a1;
}

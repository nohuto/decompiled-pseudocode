/*
 * XREFs of SmpConfigurePagefileOptions @ 0x14000C1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigurePagefileOptions(__int64 a1, __int64 a2, int *a3, int a4)
{
  if ( a4 == 4 )
    SmpPagefileOnOsVolume = *a3;
  else
    SmpPagefileOnOsVolume = 0;
  return 0LL;
}

/*
 * XREFs of WmipValidateWmiRegInfoString @ 0x140537B98
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x1405374C4 (WmipProcessWmiRegInfo.c)
 *     WmipBuildInstanceSet @ 0x1405378A0 (WmipBuildInstanceSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipValidateWmiRegInfoString(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned __int16 *v5; // r9

  if ( a3 <= a2 && (a3 & 1) == 0 )
  {
    if ( !a3 )
    {
      *a4 = 0LL;
      return 0LL;
    }
    v5 = (unsigned __int16 *)(a1 + a3);
    if ( a3 + *v5 <= a2 )
    {
      *a4 = v5;
      return 0LL;
    }
  }
  return 3221225485LL;
}

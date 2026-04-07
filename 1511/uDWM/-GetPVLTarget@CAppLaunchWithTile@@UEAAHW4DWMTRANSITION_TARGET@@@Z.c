/*
 * XREFs of ?GetPVLTarget@CAppLaunchWithTile@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180093850
 * Callers:
 *     ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096FC0 (-_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppLaunchWithTile::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r9

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CAppLaunchWithTile::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned __int64)++v3 >= 8 )
      return v2;
  }
  return `CAppLaunchWithTile::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}

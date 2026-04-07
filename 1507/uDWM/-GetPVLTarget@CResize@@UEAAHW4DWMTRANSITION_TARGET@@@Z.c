/*
 * XREFs of ?GetPVLTarget@CResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180090E40
 * Callers:
 *     ?_WindowEnumCallback@CResize@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096DA0 (-_WindowEnumCallback@CResize@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResize::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // edx
  _DWORD *i; // r9

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = &`CResize::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( ++v3 )
      return v2;
  }
  return *((unsigned int *)&`CResize::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable + 2 * v3 + 1);
}

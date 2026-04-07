/*
 * XREFs of ?GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180090D50
 * Callers:
 *     ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096AC0 (-_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInplaceResize::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CInplaceResize::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned __int64)++v3 >= 4 )
      return v2;
  }
  return `CInplaceResize::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}

/*
 * XREFs of ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x180002C00
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093D50 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementImmediate::GetSpecialTargetInfo(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // edx
  _DWORD *i; // r9

  v2 = 0;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CAppArrangementImmediate::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned __int64)++v3 >= 0x15 )
      return v2;
  }
  return (unsigned int)`CAppArrangementImmediate::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[2 * v3 + 1];
}

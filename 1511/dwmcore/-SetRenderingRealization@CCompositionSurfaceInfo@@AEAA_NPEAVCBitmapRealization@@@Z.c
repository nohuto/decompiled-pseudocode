/*
 * XREFs of ?SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z @ 0x18002EA60
 * Callers:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 * Callees:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x18000BA24 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 */

char __fastcall CCompositionSurfaceInfo::SetRenderingRealization(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(struct CBitmapRealization *, GUID *, void **))
{
  char result; // al
  __int64 (__fastcall ***v4)(struct CBitmapRealization *, GUID *, void **); // rdx

  result = 0;
  v4 = (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))*((_QWORD *)this + 15);
  if ( v4 != a2 )
  {
    if ( v4 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(this, v4);
    *((_QWORD *)this + 15) = a2;
    return 1;
  }
  return result;
}

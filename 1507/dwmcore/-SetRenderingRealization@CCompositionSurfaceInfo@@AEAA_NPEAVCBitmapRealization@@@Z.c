/*
 * XREFs of ?SetRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@@Z @ 0x1800862D8
 * Callers:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 * Callees:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x1800073D8 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 */

char __fastcall CCompositionSurfaceInfo::SetRenderingRealization(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(struct CBitmapRealization *, GUID *, void **))
{
  char result; // al
  __int64 (__fastcall ***v4)(struct CBitmapRealization *, GUID *, void **); // rdx

  result = 0;
  v4 = (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))*((_QWORD *)this + 16);
  if ( v4 != a2 )
  {
    if ( v4 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(this, v4);
    *((_QWORD *)this + 16) = a2;
    return 1;
  }
  return result;
}

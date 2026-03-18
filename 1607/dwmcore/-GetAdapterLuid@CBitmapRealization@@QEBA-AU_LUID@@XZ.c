/*
 * XREFs of ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180090140
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180099634 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x18012CF88 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18015207C (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CBitmapRealization::GetAdapterLuid(CBitmapRealization *this, _QWORD *a2)
{
  __int64 v2; // rax

  if ( (unsigned int)(*((_DWORD *)this + 62) - 2) > 2 )
    v2 = g_luidZero;
  else
    v2 = *((_QWORD *)this + 33);
  *a2 = v2;
  return (struct _LUID)a2;
}

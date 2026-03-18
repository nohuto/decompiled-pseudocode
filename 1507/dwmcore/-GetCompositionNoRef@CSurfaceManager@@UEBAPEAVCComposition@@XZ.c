/*
 * XREFs of ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20
 * Callers:
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180004E68 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?OpenGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x180004F98 (-OpenGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAX@Z.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x180005028 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?CloseGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJXZ @ 0x180089898 (-CloseGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ @ 0x180099CB0 (-GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800EEF9C (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?EnsureRestoreBuffer@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1801194E0 (-EnsureRestoreBuffer@CCompositionSurfaceInfo@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CComposition *__fastcall CSurfaceManager::GetCompositionNoRef(CSurfaceManager *this)
{
  return (struct CComposition *)*((_QWORD *)this + 48);
}

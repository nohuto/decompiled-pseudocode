/*
 * XREFs of ?GetCompositionSurfaceInfoNoRef@CCompositionSurfaceBitmap@@UEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x18002E3D0
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceInfo *__fastcall CCompositionSurfaceBitmap::GetCompositionSurfaceInfoNoRef(
        CCompositionSurfaceBitmap *this)
{
  return (struct CCompositionSurfaceInfo *)*((_QWORD *)this + 50);
}

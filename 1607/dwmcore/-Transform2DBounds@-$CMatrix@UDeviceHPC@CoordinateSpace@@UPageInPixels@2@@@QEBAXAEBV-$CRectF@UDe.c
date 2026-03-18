/*
 * XREFs of ?Transform2DBounds@?$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEBAXAEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@AEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180110A4C
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CMatrix<CoordinateSpace::DeviceHPC,CoordinateSpace::PageInPixels>::Transform2DBounds(
        __int64 a1,
        __int64 a2,
        float *a3)
{
  CMILMatrix::Transform2DBoundsHelper<0>(a1, a2, a3);
}

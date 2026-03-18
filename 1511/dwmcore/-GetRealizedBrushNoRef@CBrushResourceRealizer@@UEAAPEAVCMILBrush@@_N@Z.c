/*
 * XREFs of ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18005D3F0
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008D1B4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
struct CMILBrush *__fastcall CBrushResourceRealizer::GetRealizedBrushNoRef(CBrushResourceRealizer *this, bool a2)
{
  return CLegacyMilBrushRealizer::GetRealizedBrushNoRef(this, a2);
}

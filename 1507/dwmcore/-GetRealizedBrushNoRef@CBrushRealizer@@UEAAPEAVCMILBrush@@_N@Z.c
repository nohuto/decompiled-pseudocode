/*
 * XREFs of ?GetRealizedBrushNoRef@CBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x180081320
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x1800820A4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x1800834B0 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CBrushRealizer::GetRealizedBrushNoRef(CBrushRealizer *this, char a2)
{
  struct CMILBrush *result; // rax

  result = (struct CMILBrush *)*((_QWORD *)this + 12);
  if ( a2 && !result )
  {
    result = (CBrushRealizer *)((char *)this + 16);
    if ( this != (CBrushRealizer *)-16LL )
      return (CBrushRealizer *)((char *)this + 40);
  }
  return result;
}

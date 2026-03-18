/*
 * XREFs of ?GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18008A440
 * Callers:
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18005D3F0 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008D1B4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CLegacyMilBrushRealizer::GetRealizedBrushNoRef(CLegacyMilBrushRealizer *this, char a2)
{
  struct CMILBrush *result; // rax

  result = (struct CMILBrush *)*((_QWORD *)this + 12);
  if ( a2 && !result )
  {
    result = (CLegacyMilBrushRealizer *)((char *)this + 16);
    if ( this != (CLegacyMilBrushRealizer *)-16LL )
      return (CLegacyMilBrushRealizer *)((char *)this + 40);
  }
  return result;
}

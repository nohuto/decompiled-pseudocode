/*
 * XREFs of ?GetColorSpace@CHwDisplayRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x180080110
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008CA30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?GetColorSpace@CHwDisplayRenderTarget@@WLA@EAA?AW4ColorSpace@@XZ @ 0x1800BD910 (-GetColorSpace@CHwDisplayRenderTarget@@WLA@EAA-AW4ColorSpace@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetColorSpace(__int64 a1)
{
  return *(unsigned int *)(a1 + 292);
}

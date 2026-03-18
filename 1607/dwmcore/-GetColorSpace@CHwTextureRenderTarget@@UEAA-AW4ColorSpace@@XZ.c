/*
 * XREFs of ?GetColorSpace@CHwTextureRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x18002D430
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?GetColorSpace@CHwTextureRenderTarget@@WLA@EAA?AW4ColorSpace@@XZ @ 0x1800C17E0 (-GetColorSpace@CHwTextureRenderTarget@@WLA@EAA-AW4ColorSpace@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetColorSpace(__int64 a1)
{
  return *(unsigned int *)(a1 + 224);
}

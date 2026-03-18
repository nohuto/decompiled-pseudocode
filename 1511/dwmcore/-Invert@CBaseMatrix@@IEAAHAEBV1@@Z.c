/*
 * XREFs of ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800476D8
 * Callers:
 *     ?SetDeviceTransform@COcclusionContext@@AEAAJPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18000B1CC (-SetDeviceTransform@COcclusionContext@@AEAAJPEBV-$CMatrix@UPageInPixels@CoordinateSpace@@UDevice.c)
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000DD60 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000DDDC (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18005524C (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800B7644 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800F3CF8 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x180108EA0 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@UPageInPixels@Co.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18010E8F8 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180130978 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 *     ?CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@000PEAHPEAUMilRectF@@2@Z @ 0x180137B50 (-CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@0.c)
 *     ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x180138014 (-CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEA.c)
 * Callees:
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800AABC4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

_BOOL8 __fastcall CBaseMatrix::Invert(CBaseMatrix *this, const struct CBaseMatrix *a2)
{
  float v3; // [rsp+40h] [rbp+18h] BYREF

  return D2DMatrixInverse(this, &v3, a2) != 0LL;
}

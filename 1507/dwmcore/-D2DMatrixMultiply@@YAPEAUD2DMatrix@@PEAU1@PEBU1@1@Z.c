/*
 * XREFs of ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890
 * Callers:
 *     ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180004690 (-UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004720 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV-$CMa.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18000E0A0 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     MatrixPreTranslate2D @ 0x18000FC6C (MatrixPreTranslate2D.c)
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18000FFE0 (-GetRealization@CTransform3DGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180010328 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180010418 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     MatrixAppendScale2D @ 0x1800139C8 (MatrixAppendScale2D.c)
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x180013D30 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180013F00 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800164B8 (-CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z.c)
 *     ?GetRealization@CScaleTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180016AC0 (-GetRealization@CScaleTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180019C20 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A2D0 (-GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CRotateTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A520 (-GetRealization@CRotateTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E9E0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002D218 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004A758 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV-$CMatrix@UDe.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x180081870 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFo.c)
 *     ?GetBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180085600 (-GetBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEBVCMILMatrix@@11PEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800DF624 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1800E7248 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x1800F5ED0 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800FCD1C (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180101420 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@AEBVCMILMatrix@@@Z @ 0x180103640 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@AEBVCMILMatrix@@@Z.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18010A440 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180116A08 (-CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119FE8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18011A6F0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18011B75C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18011E9B0 (-GetRealization@CRotateTransform3D@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18011ECA0 (-GetRealization@CComponentTransform3D@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CSkewTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x18011F780 (-GetRealization@CSkewTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x180122290 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x180122AA8 (-CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEA.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180122B38 (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 *     ?Rotate180@CBaseMatrix@@QEAAXXZ @ 0x180123A14 (-Rotate180@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate270@CBaseMatrix@@QEAAXXZ @ 0x180123A88 (-Rotate270@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CBaseMatrix@@QEAAXXZ @ 0x180123B00 (-Rotate90@CBaseMatrix@@QEAAXXZ.c)
 *     MatrixPrependTranslate2D @ 0x180123B78 (MatrixPrependTranslate2D.c)
 *     ?DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z @ 0x180124EF4 (-DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180135710 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@PEBUCContextState@@@Z @ 0x1801434F8 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@P.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014FE00 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x18014FED0 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 *     ?GetDirection@CBspNode@@UEBA?AW4WalkDirection@@AEBVCMILMatrix@@W42@@Z @ 0x180158F10 (-GetDirection@CBspNode@@UEBA-AW4WalkDirection@@AEBVCMILMatrix@@W42@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

struct D2DMatrix *__fastcall D2DMatrixMultiply(
        struct D2DMatrix *a1,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3)
{
  float *v3; // rax
  char v5; // [rsp+0h] [rbp-58h] BYREF

  if ( a1 == a2 || a1 == a3 )
    v3 = (float *)&v5;
  else
    v3 = (float *)a1;
  *v3 = (float)((float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a3 + 4) * *((float *)a2 + 1)))
              + (float)(*((float *)a3 + 8) * *((float *)a2 + 2)))
      + (float)(*((float *)a3 + 12) * *((float *)a2 + 3));
  v3[1] = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 5)) + (float)(*(float *)a2 * *((float *)a3 + 1)))
                + (float)(*((float *)a3 + 9) * *((float *)a2 + 2)))
        + (float)(*((float *)a3 + 13) * *((float *)a2 + 3));
  v3[2] = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 6)))
                + (float)(*((float *)a3 + 10) * *((float *)a2 + 2)))
        + (float)(*((float *)a3 + 14) * *((float *)a2 + 3));
  v3[3] = (float)((float)((float)(*((float *)a3 + 7) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 3) * *(float *)a2))
                + (float)(*((float *)a3 + 11) * *((float *)a2 + 2)))
        + (float)(*((float *)a3 + 15) * *((float *)a2 + 3));
  v3[4] = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 4)) + (float)(*((float *)a2 + 4) * *(float *)a3))
                + (float)(*((float *)a3 + 8) * *((float *)a2 + 6)))
        + (float)(*((float *)a3 + 12) * *((float *)a2 + 7));
  v3[5] = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 5))
                        + (float)(*((float *)a2 + 4) * *((float *)a3 + 1)))
                + (float)(*((float *)a3 + 9) * *((float *)a2 + 6)))
        + (float)(*((float *)a3 + 13) * *((float *)a2 + 7));
  v3[6] = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 6))
                        + (float)(*((float *)a2 + 4) * *((float *)a3 + 2)))
                + (float)(*((float *)a3 + 10) * *((float *)a2 + 6)))
        + (float)(*((float *)a3 + 14) * *((float *)a2 + 7));
  v3[7] = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 7))
                        + (float)(*((float *)a2 + 4) * *((float *)a3 + 3)))
                + (float)(*((float *)a3 + 11) * *((float *)a2 + 6)))
        + (float)(*((float *)a2 + 7) * *((float *)a3 + 15));
  v3[8] = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 4)) + (float)(*((float *)a2 + 8) * *(float *)a3))
                + (float)(*((float *)a3 + 8) * *((float *)a2 + 10)))
        + (float)(*((float *)a3 + 12) * *((float *)a2 + 11));
  v3[9] = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 5))
                        + (float)(*((float *)a2 + 8) * *((float *)a3 + 1)))
                + (float)(*((float *)a3 + 9) * *((float *)a2 + 10)))
        + (float)(*((float *)a3 + 13) * *((float *)a2 + 11));
  v3[10] = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 6))
                         + (float)(*((float *)a2 + 8) * *((float *)a3 + 2)))
                 + (float)(*((float *)a3 + 10) * *((float *)a2 + 10)))
         + (float)(*((float *)a3 + 14) * *((float *)a2 + 11));
  v3[11] = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 7))
                         + (float)(*((float *)a2 + 8) * *((float *)a3 + 3)))
                 + (float)(*((float *)a3 + 11) * *((float *)a2 + 10)))
         + (float)(*((float *)a2 + 11) * *((float *)a3 + 15));
  v3[12] = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 4))
                         + (float)(*((float *)a2 + 12) * *(float *)a3))
                 + (float)(*((float *)a3 + 8) * *((float *)a2 + 14)))
         + (float)(*((float *)a3 + 12) * *((float *)a2 + 15));
  v3[13] = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 5))
                         + (float)(*((float *)a2 + 12) * *((float *)a3 + 1)))
                 + (float)(*((float *)a3 + 9) * *((float *)a2 + 14)))
         + (float)(*((float *)a3 + 13) * *((float *)a2 + 15));
  v3[14] = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 6))
                         + (float)(*((float *)a2 + 12) * *((float *)a3 + 2)))
                 + (float)(*((float *)a3 + 10) * *((float *)a2 + 14)))
         + (float)(*((float *)a3 + 14) * *((float *)a2 + 15));
  v3[15] = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 7))
                         + (float)(*((float *)a2 + 12) * *((float *)a3 + 3)))
                 + (float)(*((float *)a3 + 11) * *((float *)a2 + 14)))
         + (float)(*((float *)a2 + 15) * *((float *)a3 + 15));
  if ( v3 != (float *)a1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)v3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)v3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)v3 + 3);
  }
  return a1;
}

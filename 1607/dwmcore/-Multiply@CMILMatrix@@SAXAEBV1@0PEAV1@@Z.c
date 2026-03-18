/*
 * XREFs of ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320
 * Callers:
 *     ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x18001199C (-UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1800186D8 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180020048 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAV-$CMatrix@UBaseSampling@Co.c)
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x180025094 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180025440 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180032420 (-GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV-$TMilR.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006ADCC (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801194A4 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180126020 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801530A8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18015384C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180154844 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x180154AB4 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801608D8 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18018CBE4 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CMILMatrix::Multiply(const struct CMILMatrix *a1, const struct CMILMatrix *a2, struct CMILMatrix *a3)
{
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm1
  int v8; // eax
  __int64 v9; // r11
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+30h] [rbp-40h]
  __int128 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-10h]

  if ( a3 == a2 )
  {
    v3 = *((_OWORD *)a1 + 1);
    v4 = *((_DWORD *)a1 + 16);
    v12 = *(_OWORD *)a1;
    v5 = *((_OWORD *)a1 + 2);
    v16 = v4;
    v13 = v3;
    v6 = *((_OWORD *)a1 + 3);
    v14 = v5;
    v15 = v6;
    CMILMatrix::Multiply((CMILMatrix *)&v12, a2);
    v7 = v13;
    v8 = v16;
    *(_OWORD *)v9 = v12;
    v10 = v14;
    *(_OWORD *)(v9 + 16) = v7;
    v11 = v15;
    *(_OWORD *)(v9 + 32) = v10;
    *(_OWORD *)(v9 + 48) = v11;
    *(_DWORD *)(v9 + 64) = v8;
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a1 + 3);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a1 + 16);
    CMILMatrix::Multiply(a3, a2);
  }
}

/*
 * XREFs of ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800036F8 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800037E0 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B410 (-GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180021910 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022EA0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180025024 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x180025094 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18002ECB0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180052300 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054B70 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180073CA4 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV-$CMatrix@UDe.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800838A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180093A70 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800BB3C8 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801194A4 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@@Z @ 0x180150054 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801608D8 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x1801610EC (-CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEA.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180161168 (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180162070 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190EA0 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180190F70 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A9C0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18005AD00 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800AE3A8 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 */

void __fastcall CMILMatrix::Multiply(CMILMatrix *this, const struct CMILMatrix *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  float *v5; // r9
  char v6; // r10
  __int64 v7; // rcx
  float v8; // xmm5_4
  float *v9; // rax
  float v10; // xmm6_4
  __int64 v11; // rdx
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float *v16; // rax
  __int64 v17; // rdx
  float v18; // xmm2_4
  float v19; // xmm1_4
  CMILMatrix *v20; // rcx
  float v21; // xmm2_4
  __int128 v22; // xmm2
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm3
  __int128 v26; // xmm2
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // r9
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm7_4
  int v33; // xmm5_4
  CMILMatrix *v34; // rcx
  float v35; // xmm4_4
  float *v36; // rax
  _OWORD v37[4]; // [rsp+20h] [rbp-68h] BYREF

  if ( (unsigned __int8)CMILMatrix::IsIdentity<1>((__int64)this) )
  {
    *(_OWORD *)v2 = *(_OWORD *)v3;
    *(_OWORD *)(v2 + 16) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)(v2 + 32) = *(_OWORD *)(v3 + 32);
    *(_OWORD *)(v2 + 48) = *(_OWORD *)(v3 + 48);
    *(_DWORD *)(v2 + 64) = *(_DWORD *)(v3 + 64);
    return;
  }
  CMILMatrix::Ensure3DFlags((CMILMatrix *)v3);
  v6 = *(_BYTE *)(v4 + 64);
  if ( (v6 & 3) != 1 )
  {
    v7 = 4LL;
    if ( (v6 & 0xC) == 4 )
    {
      v12 = *(float *)(v4 + 56);
      v20 = (CMILMatrix *)v5;
      v21 = *(float *)(v4 + 52);
      v19 = *(float *)(v4 + 48);
    }
    else
    {
      if ( (v6 & 0xC0) == 0x40 )
      {
        v8 = *(float *)(v4 + 48);
        v9 = v5;
        v10 = *(float *)(v4 + 52);
        v11 = 4LL;
        v12 = *(float *)(v4 + 56);
        v13 = *(float *)(v4 + 40);
        v14 = *(float *)(v4 + 20);
        v15 = *(float *)v4;
        do
        {
          *v9 = v15 * *v9;
          v9 += 4;
          --v11;
        }
        while ( v11 );
        v16 = v5 + 1;
        v17 = 4LL;
        do
        {
          *v16 = v14 * *v16;
          v16 += 4;
          --v17;
        }
        while ( v17 );
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm);
        if ( v18 >= 0.00012207031 )
        {
          v36 = v5 + 2;
          do
          {
            *v36 = v13 * *v36;
            v36 += 4;
            --v7;
          }
          while ( v7 );
        }
        *((_BYTE *)v5 + 64) &= 0xC0u;
        v19 = v8;
        v20 = (CMILMatrix *)v5;
      }
      else
      {
        if ( (*(_BYTE *)(v4 + 65) & 0xC) != 4 )
        {
          v22 = *(_OWORD *)(v4 + 16);
          v23 = *(_OWORD *)(v4 + 32);
          v24 = *(_OWORD *)(v4 + 48);
          v37[0] = *(_OWORD *)v4;
          v25 = *((_OWORD *)v5 + 3);
          v37[1] = v22;
          v26 = *((_OWORD *)v5 + 2);
          v37[2] = v23;
          v27 = *((_OWORD *)v5 + 1);
          v37[3] = v24;
          v28 = *(_OWORD *)v5;
          *(double *)&v28 = DirectX::XMMatrixMultiply(4LL, v37);
          *(_OWORD *)v29 = v28;
          *(_OWORD *)(v29 + 16) = v27;
          *(_OWORD *)(v29 + 32) = v26;
          *(_OWORD *)(v29 + 48) = v25;
          *(_DWORD *)(v29 + 64) = 0;
          return;
        }
        v30 = *(float *)(v4 + 4);
        v31 = *(float *)(v4 + 40);
        v32 = *(float *)(v4 + 48);
        v10 = *(float *)(v4 + 52);
        CMILMatrix::Rotate90((CMILMatrix *)v5);
        CMILMatrix::Scale(v34, COERCE_FLOAT(v33 ^ _xmm), v30, v31);
        v12 = v35;
        v19 = v32;
      }
      v21 = v10;
    }
    CMILMatrix::Translate(v20, v19, v21, v12);
  }
}

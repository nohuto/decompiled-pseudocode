/*
 * XREFs of ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CB74 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000E39C (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18003EC30 (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003EDDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003F908 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800492D0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180055888 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180055E30 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800632E0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008CA30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180091AD0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800FD044 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseMatrix::Transform2DRectToPerspective(
        CBaseMatrix *this,
        const struct MilRectF *a2,
        struct MilPoint2F *const a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm8_4
  float v27; // xmm3_4
  float v28; // xmm9_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm1_4

  v3 = *(float *)a2 * *(float *)this;
  v4 = *(float *)a2 * *((float *)this + 1);
  v5 = *((float *)a2 + 1);
  v6 = v5 * *((float *)this + 5);
  v7 = v5 * *((float *)this + 4);
  *(float *)a3 = (float)(v7 + v3) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)(v6 + v4) + *((float *)this + 13);
  v8 = *((float *)a2 + 3);
  v9 = v8 * *((float *)this + 5);
  v10 = v8 * *((float *)this + 4);
  *((float *)a3 + 2) = (float)(v10 + v3) + *((float *)this + 12);
  *((float *)a3 + 3) = (float)(v9 + v4) + *((float *)this + 13);
  v11 = *((float *)a2 + 2);
  v12 = v11 * *((float *)this + 1);
  v13 = v11 * *(float *)this;
  *((float *)a3 + 4) = (float)(v13 + v10) + *((float *)this + 12);
  *((float *)a3 + 5) = (float)(v12 + v9) + *((float *)this + 13);
  *((float *)a3 + 6) = (float)(v13 + v7) + *((float *)this + 12);
  *((float *)a3 + 7) = (float)(v12 + v6) + *((float *)this + 13);
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
  if ( v14 >= 0.00012207031 )
    goto LABEL_5;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
  if ( v15 >= 0.00012207031
    || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 14)) & _xmm), v16 >= 0.00012207031) )
  {
    if ( v14 >= 0.00012207031 )
      goto LABEL_5;
    v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
    if ( v38 >= 0.00012207031 )
      goto LABEL_5;
    v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
    if ( v39 >= 0.00012207031 )
      goto LABEL_5;
    v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 9)) & _xmm);
    if ( v40 >= 0.00012207031 )
      goto LABEL_5;
    v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 10) - 1.0)) & _xmm);
    if ( v41 >= 0.00012207031 )
    {
      v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 10)) & _xmm);
      if ( v42 >= 0.00012207031 )
        goto LABEL_5;
    }
    v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 11)) & _xmm);
    if ( v43 >= 0.00012207031 )
      goto LABEL_5;
    v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 14)) & _xmm);
    if ( v44 >= 0.00012207031 )
      goto LABEL_5;
  }
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
  v18 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm) * 40960.0)
      + (float)(v17 * 40960.0);
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 15)) & _xmm);
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v18 + v19) - 1.0)) & _xmm);
  if ( v20 >= 0.00012207031 )
  {
LABEL_5:
    v21 = *((float *)this + 15);
    v22 = *((float *)this + 7) * *((float *)a2 + 1);
    v23 = *((float *)this + 7) * *((float *)a2 + 3);
    v24 = *((float *)this + 3) * *(float *)a2;
    v25 = *((float *)this + 3) * *((float *)a2 + 2);
    v26 = (float)(v23 + v24) + v21;
    v27 = (float)(v23 + v25) + v21;
    v28 = (float)(v22 + v24) + v21;
    v29 = (float)(v22 + v25) + v21;
    if ( v28 < 0.00012207031 || v26 < 0.00012207031 || v27 < 0.00012207031 || v29 < 0.00012207031 )
    {
      if ( v28 >= -0.00012207031 || v26 >= -0.00012207031 || v27 >= -0.00012207031 || v29 >= -0.00012207031 )
      {
        *(_QWORD *)a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_DWORD *)a3 + 2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_DWORD *)a3 + 3) = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        *((_QWORD *)a3 + 2) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        *((_DWORD *)a3 + 6) = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v37 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      }
      else
      {
        *(_QWORD *)a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *((_DWORD *)a3 + 2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *((_DWORD *)a3 + 3) = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        *((_QWORD *)a3 + 2) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
        *((_DWORD *)a3 + 6) = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v37 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      }
      goto LABEL_17;
    }
    v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28 - 1.0)) & _xmm);
    if ( v30 >= 0.00012207031 )
    {
      v31 = *((float *)a3 + 1) / v28;
      *(float *)a3 = *(float *)a3 / v28;
      *((float *)a3 + 1) = v31;
    }
    v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 1.0)) & _xmm);
    if ( v32 >= 0.00012207031 )
    {
      v33 = *((float *)a3 + 3) / v26;
      *((float *)a3 + 2) = *((float *)a3 + 2) / v26;
      *((float *)a3 + 3) = v33;
    }
    v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - 1.0)) & _xmm);
    if ( v34 >= 0.00012207031 )
    {
      v35 = *((float *)a3 + 5) / v27;
      *((float *)a3 + 4) = *((float *)a3 + 4) / v27;
      *((float *)a3 + 5) = v35;
    }
    v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v29 - 1.0)) & _xmm);
    if ( v36 >= 0.00012207031 )
    {
      v37 = *((float *)a3 + 7) / v29;
      *((float *)a3 + 6) = *((float *)a3 + 6) / v29;
LABEL_17:
      *((float *)a3 + 7) = v37;
    }
  }
}

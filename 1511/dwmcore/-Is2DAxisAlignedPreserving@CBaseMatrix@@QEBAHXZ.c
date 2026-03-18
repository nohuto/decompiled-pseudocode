/*
 * XREFs of ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000E39C (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?GetRotation@CBaseMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800141C8 (-GetRotation@CBaseMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18001665C (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003F908 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x180041A3C (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?Is90Or270Rotation@CBaseMatrix@@QEBAHXZ @ 0x180047D88 (-Is90Or270Rotation@CBaseMatrix@@QEBAHXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x180055D20 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x180058D48 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800B7644 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA6CC (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18010B37C (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18010E170 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseMatrix::Is2DAxisAlignedPreserving(CBaseMatrix *this)
{
  float v1; // xmm2_4
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
  if ( v1 >= 0.00012207031 )
    return 0LL;
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
  if ( v2 >= 0.00012207031
    || (v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 14)) & _xmm), v3 >= 0.00012207031) )
  {
    if ( v1 >= 0.00012207031 )
      return 0LL;
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
    if ( v12 >= 0.00012207031 )
      return 0LL;
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
    if ( v13 >= 0.00012207031 )
      return 0LL;
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 9)) & _xmm);
    if ( v14 >= 0.00012207031 )
      return 0LL;
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 10) - 1.0)) & _xmm);
    if ( v15 >= 0.00012207031 )
    {
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 10)) & _xmm);
      if ( v16 >= 0.00012207031 )
        return 0LL;
    }
    v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 11)) & _xmm);
    if ( v17 >= 0.00012207031 )
      return 0LL;
    v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 14)) & _xmm);
    if ( v18 >= 0.00012207031 )
      return 0LL;
  }
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
  v5 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm) * 40960.0)
     + (float)(v4 * 40960.0);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 15)) & _xmm);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v5 + v6) - 1.0)) & _xmm);
  if ( v7 >= 0.00012207031 )
    return 0LL;
  if ( ((v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm), v8 >= 0.00012207031)
     || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 4)) & _xmm), v9 >= 0.00012207031))
    && ((v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm), v11 >= 0.00012207031)
     || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 5)) & _xmm), v19 >= 0.00012207031)) )
  {
    return 0LL;
  }
  else
  {
    return 1LL;
  }
}

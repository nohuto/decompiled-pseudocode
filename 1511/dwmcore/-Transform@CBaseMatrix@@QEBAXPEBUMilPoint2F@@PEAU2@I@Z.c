/*
 * XREFs of ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18001401C
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180013314 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 *     ?RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x180013CA0 (-RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180058470 (-GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x1800B057C (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 *     ?IsPrimitiveVisibleWithinClip@CD2DContext@@QEAA_NAEBUD2D_RECT_F@@AEBVCMILMatrix@@@Z @ 0x1800FA424 (-IsPrimitiveVisibleWithinClip@CD2DContext@@QEAA_NAEBUD2D_RECT_F@@AEBVCMILMatrix@@@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18010E170 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z @ 0x1801592D8 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseMatrix::Transform(CBaseMatrix *this, const struct MilPoint2F *a2, struct MilPoint2F *a3, int a4)
{
  __int64 v4; // rdx
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4

  v4 = a2 - a3;
  do
  {
    v5 = *(float *)((char *)a3 + v4);
    v6 = *(float *)((char *)a3 + v4 + 4);
    v7 = (float)((float)(v6 * *((float *)this + 4)) + (float)(v5 * *(float *)this)) + *((float *)this + 12);
    *(float *)a3 = v7;
    v8 = (float)((float)(v5 * *((float *)this + 1)) + (float)(v6 * *((float *)this + 5))) + *((float *)this + 13);
    *((float *)a3 + 1) = v8;
    v9 = (float)((float)(v6 * *((float *)this + 7)) + (float)(v5 * *((float *)this + 3))) + *((float *)this + 15);
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    if ( v10 >= 0.00012207031 )
    {
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - 1.0)) & _xmm);
      if ( v11 >= 0.00012207031 )
      {
        *(float *)a3 = v7 / v9;
        *((float *)a3 + 1) = v8 / v9;
      }
    }
    a3 = (struct MilPoint2F *)((char *)a3 + 8);
    --a4;
  }
  while ( a4 );
}

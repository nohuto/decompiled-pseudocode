/*
 * XREFs of ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580
 * Callers:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180002950 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180004874 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180015810 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058F60 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800594B0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18005B06C (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18016E08C (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, char a2)
{
  char v2; // al
  char v3; // al
  bool v5; // r8
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  char v13; // al
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4

  v2 = 0;
  if ( a2 )
  {
    v3 = *(char *)(a1 + 65) >> 6;
    if ( v3 )
      return v3 == 1;
    v2 = 1;
  }
  v5 = 0;
  if ( a2 )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
    if ( v6 < 0.00012207031 )
    {
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm);
      if ( v7 < 0.00012207031 )
      {
        v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 56) - 0.0)) & _xmm);
        if ( v8 < 0.00012207031 )
          goto LABEL_9;
      }
    }
  }
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
  if ( v14 < 0.00012207031 )
  {
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm);
    if ( v15 < 0.00012207031 )
    {
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 32) - 0.0)) & _xmm);
      if ( v16 < 0.00012207031 )
      {
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 36) - 0.0)) & _xmm);
        if ( v17 < 0.00012207031 )
        {
          v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 0.0)) & _xmm);
          if ( v18 < 0.00012207031
            || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm),
                v19 < 0.00012207031) )
          {
            v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 44) - 0.0)) & _xmm);
            if ( v20 < 0.00012207031 )
            {
              v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 56) - 0.0)) & _xmm);
              if ( v21 < 0.00012207031 )
              {
LABEL_9:
                v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
                v10 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm) * 40960.0)
                    + (float)(v9 * 40960.0);
                v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 60)) & _xmm);
                v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v10 + v11) - 1.0)) & _xmm);
                v5 = v12 < 0.00012207031;
              }
            }
          }
        }
      }
    }
  }
  if ( v2 )
  {
    if ( v5 )
      v13 = 1;
    else
      v13 = -1;
    *(_BYTE *)(a1 + 65) &= 0x3Fu;
    *(_BYTE *)(a1 + 65) |= v13 << 6;
  }
  return v5;
}

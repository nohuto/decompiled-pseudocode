/*
 * XREFs of ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410
 * Callers:
 *     ?Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180003A74 (-Transform3DRectToPerspective@CBaseMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180010918 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800788C0 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014B3AC (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseMatrix::Is2DAffine(CBaseMatrix *this, int a2)
{
  __int64 result; // rax
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4

  result = 0LL;
  if ( a2 )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
    if ( v3 < 0.00012207031 )
    {
      v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
      if ( v4 < 0.00012207031 )
      {
        v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 14)) & _xmm);
        if ( v5 < 0.00012207031 )
          goto LABEL_5;
      }
    }
  }
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
  if ( v10 < 0.00012207031 )
  {
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
    if ( v11 < 0.00012207031 )
    {
      v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
      if ( v12 < 0.00012207031 )
      {
        v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 9)) & _xmm);
        if ( v13 < 0.00012207031 )
        {
          v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 10) - 1.0)) & _xmm);
          if ( v14 < 0.00012207031
            || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 10)) & _xmm), v17 < 0.00012207031) )
          {
            v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 11)) & _xmm);
            if ( v15 < 0.00012207031 )
            {
              v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 14)) & _xmm);
              if ( v16 < 0.00012207031 )
              {
LABEL_5:
                v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
                v7 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm) * 40960.0)
                   + (float)(v6 * 40960.0);
                v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 15)) & _xmm);
                v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v7 + v8) - 1.0)) & _xmm);
                if ( v9 < 0.00012207031 )
                  return 1LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

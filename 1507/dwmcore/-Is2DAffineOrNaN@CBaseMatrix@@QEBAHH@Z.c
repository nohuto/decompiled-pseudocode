/*
 * XREFs of ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x180022580
 * Callers:
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z @ 0x180017A14 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x1800F4178 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseMatrix::Is2DAffineOrNaN(CBaseMatrix *this)
{
  unsigned int v1; // edi
  double v3; // xmm0_8
  float v4; // xmm2_4
  double v5; // xmm0_8
  float v6; // xmm2_4
  double v7; // xmm0_8
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  double v14; // xmm0_8
  float v15; // xmm2_4
  double v16; // xmm0_8
  float v17; // xmm2_4
  double v18; // xmm0_8
  float v19; // xmm2_4
  double v20; // xmm0_8
  float v21; // xmm2_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  double v24; // xmm0_8
  float v25; // xmm2_4
  double v26; // xmm0_8
  float v27; // xmm2_4

  v1 = 0;
  v3 = *((float *)this + 2);
  v4 = COERCE_DOUBLE(*(_QWORD *)&v3 & _xmm);
  if ( v4 < 0.00012207031 || _isnan(v3) )
  {
    v5 = *((float *)this + 6);
    v6 = COERCE_DOUBLE(*(_QWORD *)&v5 & _xmm);
    if ( v6 < 0.00012207031 || _isnan(v5) )
    {
      v7 = *((float *)this + 14);
      v8 = COERCE_DOUBLE(*(_QWORD *)&v7 & _xmm);
      if ( v8 < 0.00012207031 || _isnan(v7) )
        goto LABEL_4;
    }
  }
  v14 = *((float *)this + 2);
  v15 = COERCE_DOUBLE(*(_QWORD *)&v14 & _xmm);
  if ( v15 < 0.00012207031 || _isnan(v14) )
  {
    v16 = *((float *)this + 6);
    v17 = COERCE_DOUBLE(*(_QWORD *)&v16 & _xmm);
    if ( v17 < 0.00012207031 || _isnan(v16) )
    {
      v18 = *((float *)this + 8);
      v19 = COERCE_DOUBLE(*(_QWORD *)&v18 & _xmm);
      if ( v19 < 0.00012207031 || _isnan(v18) )
      {
        v20 = *((float *)this + 9);
        v21 = COERCE_DOUBLE(*(_QWORD *)&v20 & _xmm);
        if ( v21 < 0.00012207031 || _isnan(v20) )
        {
          v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 10) - 1.0)) & _xmm);
          if ( v22 < 0.00012207031
            || _isnan(*((float *)this + 10))
            || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 10)) & _xmm), v23 < 0.00012207031) )
          {
            v24 = *((float *)this + 11);
            v25 = COERCE_DOUBLE(*(_QWORD *)&v24 & _xmm);
            if ( v25 < 0.00012207031 || _isnan(v24) )
            {
              v26 = *((float *)this + 14);
              v27 = COERCE_DOUBLE(*(_QWORD *)&v26 & _xmm);
              if ( v27 < 0.00012207031 || _isnan(v26) )
              {
LABEL_4:
                v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
                v10 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm) * 40960.0)
                    + (float)(v9 * 40960.0);
                v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 15)) & _xmm);
                v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v10 + v11) - 1.0)) & _xmm);
                if ( v12 < 0.00012207031 )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return v1;
}

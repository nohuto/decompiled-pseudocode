/*
 * XREFs of ?GetContentToViewboxScale@CImageLegacyMilBrush@@MEBAJPEAM0@Z @ 0x1800326A0
 * Callers:
 *     ?GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001D6E0 (-GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetContentToViewboxScale(CImageLegacyMilBrush *this, float *a2, float *a3)
{
  __int64 v3; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  double v14; // [rsp+50h] [rbp+8h] BYREF
  double v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 74);
  v14 = 0.0;
  v15 = 0.0;
  v6 = (*(__int64 (__fastcall **)(__int64, double *, double *))(*(_QWORD *)(v3 + 8) + 120LL))(v3 + 8, &v14, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xFBu);
  }
  else
  {
    v8 = v14;
    v9 = (float)COERCE_DOUBLE(*(_QWORD *)&DOUBLE_96_0 & _xmm) * 0.000000059604652;
    v10 = v15;
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
    if ( v9 >= v11 || v8 < 0.0 )
      v8 = FLOAT_96_0;
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
    if ( v9 >= v12 || v10 < 0.0 )
      v10 = FLOAT_96_0;
    *a2 = 96.0 / v8;
    *a3 = 96.0 / v10;
  }
  return v7;
}

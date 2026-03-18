/*
 * XREFs of ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18005B06C
 * Callers:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
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
  float v13; // xmm2_4
  float *v14; // rcx
  __int64 v15; // r9
  float *v16; // r10
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4

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
  if ( CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
    return;
  v17 = v14[15];
  v18 = v14[7] * v16[1];
  v19 = v14[7] * v16[3];
  v20 = v14[3] * *v16;
  v21 = v14[3] * v16[2];
  v22 = (float)(v18 + v20) + v17;
  v23 = (float)(v19 + v20) + v17;
  v24 = (float)(v19 + v21) + v17;
  v25 = (float)(v18 + v21) + v17;
  if ( v22 < 0.00012207031 || v23 < 0.00012207031 || v24 < 0.00012207031 || v25 < 0.00012207031 )
  {
    if ( v22 >= -0.00012207031 || v23 >= -0.00012207031 || v24 >= -0.00012207031 || v25 >= -0.00012207031 )
    {
      *(_QWORD *)v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_DWORD *)(v15 + 8) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_DWORD *)(v15 + 12) = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
      *(_QWORD *)(v15 + 16) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      *(_DWORD *)(v15 + 24) = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
      v33 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    }
    else
    {
      *(_QWORD *)v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_DWORD *)(v15 + 8) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_DWORD *)(v15 + 12) = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
      *(_QWORD *)(v15 + 16) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      *(_DWORD *)(v15 + 24) = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
      v33 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    }
    goto LABEL_15;
  }
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - 1.0)) & _xmm);
  if ( v26 >= 0.00012207031 )
  {
    v27 = *(float *)(v15 + 4) / v22;
    *(float *)v15 = *(float *)v15 / v22;
    *(float *)(v15 + 4) = v27;
  }
  v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23 - 1.0)) & _xmm);
  if ( v28 >= 0.00012207031 )
  {
    v29 = *(float *)(v15 + 12) / v23;
    *(float *)(v15 + 8) = *(float *)(v15 + 8) / v23;
    *(float *)(v15 + 12) = v29;
  }
  v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - 1.0)) & _xmm);
  if ( v30 >= 0.00012207031 )
  {
    v31 = *(float *)(v15 + 20) / v24;
    *(float *)(v15 + 16) = *(float *)(v15 + 16) / v24;
    *(float *)(v15 + 20) = v31;
  }
  v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - 1.0)) & _xmm);
  if ( v32 >= 0.00012207031 )
  {
    v33 = *(float *)(v15 + 28) / v25;
    *(float *)(v15 + 24) = *(float *)(v15 + 24) / v25;
LABEL_15:
    *(float *)(v15 + 28) = v33;
  }
}

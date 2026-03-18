/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x180162180
 * Callers:
 *     ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18013F4C4 (-InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@PEAUD2D_MATRI.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  _UNKNOWN **result; // rax
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm9_4
  float v7; // xmm5_4
  float v8; // xmm10_4
  float v9; // xmm9_4
  float v10; // xmm2_4
  float v11; // xmm12_4
  float v12; // xmm6_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm12_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm10_4
  float v30; // xmm2_4
  float v31; // xmm2_4
  float v32; // xmm2_4
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a2[1];
  v5 = v4;
  *(_OWORD *)a1 = _xmm;
  *(_OWORD *)(a1 + 16) = _xmm;
  *(_OWORD *)(a1 + 32) = _xmm;
  *(_OWORD *)(a1 + 48) = _xmm;
  v6 = a2[3];
  v7 = v4 - v6;
  v8 = a2[1] * *a2;
  v9 = v6 * *a2;
  v10 = a2[3] - a2[1];
  v11 = a2[2];
  v12 = v11 - *a2;
  v13 = (float)(a2[3] * v11) - v8;
  v14 = 1.0 / (float)((float)((float)(v7 * *a2) - (float)(v12 * a2[1])) + v13);
  v15 = v5 - v5;
  v16 = (float)((float)(v10 * a3[3]) + (float)(v7 * a3[1])) + (float)((float)(v5 - v5) * a3[5]);
  v17 = *a2 - v11;
  v18 = v11 * a2[1];
  v19 = (float)((float)(v10 * a3[2]) + (float)(v7 * *a3)) + (float)(v15 * a3[4]);
  v20 = v12 * a3[4];
  v21 = v12 * a3[5];
  v22 = v17;
  v23 = v17 * a3[1];
  v24 = v22 * *a3;
  *(float *)(a1 + 4) = v16 * v14;
  v25 = *a2;
  *(float *)a1 = v19 * v14;
  v26 = v25 - v25;
  v27 = (float)((float)(v25 - v25) * a3[3]) + v23;
  v28 = v8 - v9;
  v29 = v8 - v18;
  v30 = (float)((float)((float)(v26 * a3[2]) + v24) + v20) * v14;
  *(float *)(a1 + 20) = (float)(v27 + v21) * v14;
  *(float *)(a1 + 16) = v30;
  v31 = v28 * a3[2];
  *(_WORD *)(a1 + 64) = 0x4000;
  v32 = (float)((float)(v31 + (float)(v13 * *a3)) + (float)(v29 * a3[4])) * v14;
  *(float *)(a1 + 52) = (float)((float)((float)(v28 * a3[3]) + (float)(v13 * a3[1])) + (float)(v29 * a3[5])) * v14;
  *(float *)(a1 + 48) = v32;
  return result;
}

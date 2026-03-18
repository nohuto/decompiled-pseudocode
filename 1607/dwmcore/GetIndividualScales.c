/*
 * XREFs of GetIndividualScales @ 0x18018B62C
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x180112530 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

__int64 __fastcall GetIndividualScales(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm0_4

  v3 = *(float *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v7 = *(float *)a1;
  v8 = sqrtf_0((float)(v7 * v7) + (float)(v3 * v3));
  *a2 = v8;
  if ( v8 == 0.0 )
    return 2147942487LL;
  v10 = *(float *)(a1 + 4);
  v11 = *(float *)(a1 + 8) / v8;
  v12 = v7 / v8;
  *(float *)(a1 + 8) = v11;
  v13 = v11 * *(float *)(a1 + 12);
  v14 = v12 * *(float *)(a1 + 4);
  *(float *)a1 = v12;
  v15 = v13 + v14;
  v16 = v10 - (float)(v12 * v15);
  v17 = *(float *)(a1 + 12) - (float)(v11 * v15);
  *(float *)(a1 + 4) = v16;
  *(float *)(a1 + 12) = v17;
  v18 = sqrtf_0((float)(v17 * v17) + (float)(v16 * v16));
  *a3 = v18;
  if ( v18 == 0.0 )
    return 2147942487LL;
  else
    return 0LL;
}

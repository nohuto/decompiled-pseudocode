/*
 * XREFs of ?Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180020E04
 * Callers:
 *     ?SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVertexAAFixupData@@@Z @ 0x1800AF71C (-SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAVCVertexXYWCo.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$00$0A@@@$00$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801975A0 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2@@$00$0A@@@$00$0A@VCVertexX.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$01$0A@@@$01$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197864 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2@@$01$0A@@@$01$0A@VCVertexX.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$0A@$0A@@@$0A@$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197954 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2@@$0A@$0A@@@$0A@$0A@VCVerte.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$0A@@@$00$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197CBC (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$0A@@@$00$.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$01$0A@@@$01$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180198150 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$01$0A@@@$01$.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$0A@@@$0A@$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801984E0 (-Transfer@-$CVertexTransfer2@V-$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$0A@@@$0A.c)
 * Callees:
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

void __fastcall Transform2DAndFillPosXYUV2(
        const struct CVertexXYWColorDUV2 *a1,
        const struct CVertexAAFixupData *a2,
        const struct CMILMatrix *a3,
        struct CVertexXYWColorDUV2 *a4,
        struct D2D_POINT_2F *a5)
{
  float v6; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm6_4
  __m128 v13; // xmm8
  float v14; // xmm0_4
  float v15; // xmm9_4
  float v16; // xmm1_4
  float v17; // xmm7_4
  __m128 v18; // xmm3
  float v19; // xmm10_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  unsigned __int64 v24; // xmm0_8
  __m128 v25; // xmm1

  v6 = *((float *)a3 + 4);
  v9 = *((float *)a1 + 1) - *((float *)a2 + 1);
  v10 = *((float *)a3 + 5);
  v11 = *(float *)a1 - *(float *)a2;
  v12 = *((float *)a3 + 1);
  v13 = (__m128)LODWORD(FLOAT_1_0);
  v14 = v10 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v15 = (float)((float)(*(float *)a3 * COERCE_FLOAT(*(_QWORD *)a2)) + (float)(v6 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))))
      + *((float *)a3 + 12);
  v16 = v10 * v9;
  v17 = (float)(*(float *)a3 * v11) + (float)(v6 * v9);
  v18 = (__m128)LODWORD(FLOAT_1_0);
  v19 = (float)((float)(v12 * COERCE_FLOAT(*(_QWORD *)a2)) + v14) + *((float *)a3 + 13);
  v20 = (float)(v12 * v11) + v16;
  if ( v17 != 0.0 || v20 != 0.0 )
  {
    v21 = sqrtf_0((float)(v20 * v20) + (float)(v17 * v17));
    v18 = (__m128)*((unsigned int *)a2 + 2);
    v18.m128_f32[0] = v18.m128_f32[0] / v21;
  }
  v13.m128_f32[0] = 1.0 - v18.m128_f32[0];
  v22 = v13;
  a5->x = v15;
  v23 = v13;
  a5->y = v19;
  *(float *)a4 = (float)(v17 * v18.m128_f32[0]) + v15;
  *((float *)a4 + 1) = (float)(v20 * v18.m128_f32[0]) + v19;
  v22.m128_f32[0] = (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 4))
                  + (float)(v18.m128_f32[0] * *((float *)a1 + 4));
  v23.m128_f32[0] = (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 5))
                  + (float)(v18.m128_f32[0] * *((float *)a1 + 5));
  v24 = _mm_unpacklo_ps(v22, v23).m128_u64[0];
  v25 = v18;
  *((_QWORD *)a4 + 2) = v24;
  v25.m128_f32[0] = (float)(v18.m128_f32[0] * *((float *)a1 + 6))
                  + (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 6));
  v13.m128_f32[0] = (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 7))
                  + (float)(v18.m128_f32[0] * *((float *)a1 + 7));
  *((_QWORD *)a4 + 3) = _mm_unpacklo_ps(v25, v13).m128_u64[0];
}

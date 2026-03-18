/*
 * XREFs of ?TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X2_F@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180015964
 * Callers:
 *     ?SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVertexAAFixupData@@@Z @ 0x18001580C (-SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVert.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180034450 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ??$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801190EC (--$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180119208 (--$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 */

void __fastcall TransformAndFillPosXYUV2(
        const struct CVertexXYWColorDUV2 *a1,
        const struct CVertexAAFixupData *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CVertexXYWColorDUV2 *a4,
        struct D2D_POINT_2F *a5)
{
  float m21; // xmm2_4
  float v9; // xmm3_4
  float m22; // xmm1_4
  float v11; // xmm4_4
  float m12; // xmm6_4
  __m128 v13; // xmm8
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  __m128 v18; // xmm3
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm10_4
  float v24; // xmm0_4
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  unsigned __int64 v27; // xmm0_8
  __m128 v28; // xmm1

  m21 = a3->m21;
  v9 = *((float *)a1 + 1) - *((float *)a2 + 1);
  m22 = a3->m22;
  v11 = *(float *)a1 - *(float *)a2;
  m12 = a3->m12;
  v13 = (__m128)LODWORD(FLOAT_1_0);
  v14 = m22 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v15 = (float)(m21 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))) + (float)(a3->m11 * COERCE_FLOAT(*(_QWORD *)a2));
  v16 = m21 * v9;
  v17 = m22 * v9;
  v18 = (__m128)LODWORD(FLOAT_1_0);
  v19 = v15 + a3->dx;
  v20 = v14 + (float)(m12 * COERCE_FLOAT(*(_QWORD *)a2));
  v21 = (float)(a3->m11 * v11) + v16;
  v22 = (float)(m12 * v11) + v17;
  v23 = v20 + a3->dy;
  if ( v21 != 0.0 || v22 != 0.0 )
  {
    v24 = sqrtf_0((float)(v22 * v22) + (float)(v21 * v21));
    v18 = (__m128)*((unsigned int *)a2 + 2);
    v18.m128_f32[0] = v18.m128_f32[0] / v24;
  }
  v13.m128_f32[0] = 1.0 - v18.m128_f32[0];
  v25 = v18;
  a5->x = v19;
  a5->y = v23;
  *(float *)a4 = (float)(v18.m128_f32[0] * v21) + v19;
  *((float *)a4 + 1) = (float)(v18.m128_f32[0] * v22) + v23;
  v26 = v13;
  v25.m128_f32[0] = (float)(v18.m128_f32[0] * *((float *)a1 + 4))
                  + (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 4));
  v26.m128_f32[0] = (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 5))
                  + (float)(v18.m128_f32[0] * *((float *)a1 + 5));
  v27 = _mm_unpacklo_ps(v25, v26).m128_u64[0];
  v28 = v13;
  *((_QWORD *)a4 + 2) = v27;
  v28.m128_f32[0] = (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 6))
                  + (float)(v18.m128_f32[0] * *((float *)a1 + 6));
  v13.m128_f32[0] = (float)((float)(1.0 - v18.m128_f32[0]) * *((float *)a2 + 7))
                  + (float)(v18.m128_f32[0] * *((float *)a1 + 7));
  *((_QWORD *)a4 + 3) = _mm_unpacklo_ps(v28, v13).m128_u64[0];
}

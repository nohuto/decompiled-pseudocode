/*
 * XREFs of ?CalculateTBNFrame@@YAXQEAPEBUD2D_POINT_2F@@0AEBUD2D_VECTOR_3F@@PEAU2@2@Z @ 0x18013696C
 * Callers:
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 * Callees:
 *     <none>
 */

void __fastcall CalculateTBNFrame(
        const struct D2D_POINT_2F **const a1,
        const struct D2D_POINT_2F **const a2,
        const struct D2D_VECTOR_3F *a3,
        struct D2D_VECTOR_3F *a4,
        struct D2D_VECTOR_3F *a5)
{
  const struct D2D_POINT_2F *v5; // rax
  const struct D2D_POINT_2F *v6; // rax
  __m128 x_low; // xmm12
  __m128 y_low; // xmm13
  const struct D2D_POINT_2F *v9; // rax
  __m128 v10; // xmm10
  __m128 v11; // xmm11
  float x; // xmm4_4
  float y; // xmm5_4
  const struct D2D_POINT_2F *v14; // rax
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  __m128 v21; // xmm8
  __m128 v22; // xmm7
  unsigned __int64 v23; // xmm0_8
  float v24; // xmm6_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  FLOAT v27; // xmm6_4
  float v28; // [rsp+10h] [rbp-39h]

  v5 = a1[1];
  x_low = (__m128)LODWORD(v5->x);
  y_low = (__m128)LODWORD(v5->y);
  v6 = a1[2];
  x_low.m128_f32[0] = x_low.m128_f32[0] - (*a1)->x;
  y_low.m128_f32[0] = y_low.m128_f32[0] - (*a1)->y;
  v10 = (__m128)LODWORD(v6->x);
  v11 = (__m128)LODWORD(v6->y);
  v9 = a2[1];
  v10.m128_f32[0] = v10.m128_f32[0] - (*a1)->x;
  v11.m128_f32[0] = v11.m128_f32[0] - (*a1)->y;
  x = v9->x;
  y = v9->y;
  v14 = a2[2];
  v15 = x - (*a2)->x;
  v16 = y - (*a2)->y;
  v17 = v14->x - (*a2)->x;
  v18 = v14->y - (*a2)->y;
  v19 = (float)(v18 * v15) - (float)(v17 * v16);
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm);
  if ( v20 >= 0.0000011920929 )
  {
    v21 = x_low;
    v22 = y_low;
    v21.m128_f32[0] = (float)(x_low.m128_f32[0] * v18) - (float)(v10.m128_f32[0] * v16);
    v25 = v11.m128_f32[0] * v16;
    v10.m128_f32[0] = (float)((float)(v10.m128_f32[0] * v15) - (float)(x_low.m128_f32[0] * v17)) * (float)(1.0 / v19);
    v11.m128_f32[0] = (float)((float)(v11.m128_f32[0] * v15) - (float)(y_low.m128_f32[0] * v17)) * (float)(1.0 / v19);
    v21.m128_f32[0] = v21.m128_f32[0] * (float)(1.0 / v19);
    v22.m128_f32[0] = (float)((float)(y_low.m128_f32[0] * v18) - v25) * (float)(1.0 / v19);
    v24 = (float)((float)(v18 * 0.0) - (float)(v16 * 0.0)) * (float)(1.0 / v19);
    v23 = _mm_unpacklo_ps(v10, v11).m128_u64[0];
    v28 = (float)((float)(v15 * 0.0) - (float)(v17 * 0.0)) * (float)(1.0 / v19);
  }
  else
  {
    v21 = (__m128)LODWORD(FLOAT_1_0);
    v22 = 0LL;
    v28 = 0.0;
    v23 = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
    v24 = 0.0;
  }
  v26 = (float)((float)(a3->x * v21.m128_f32[0]) + (float)(a3->y * v22.m128_f32[0])) + (float)(a3->z * v24);
  v21.m128_f32[0] = v21.m128_f32[0] - (float)(a3->x * v26);
  v22.m128_f32[0] = v22.m128_f32[0] - (float)(a3->y * v26);
  v27 = v24 - (float)(a3->z * v26);
  *(_QWORD *)&a4->x = _mm_unpacklo_ps(v21, v22).m128_u64[0];
  a4->z = v27;
  *(_QWORD *)&a5->x = v23;
  a5->z = v28;
}

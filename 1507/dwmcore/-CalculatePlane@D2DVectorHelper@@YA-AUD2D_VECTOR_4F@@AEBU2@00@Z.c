/*
 * XREFs of ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18011A538
 * Callers:
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@W46MilBackfaceVisibility@@_NPEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18011B4A8 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 * Callees:
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::CalculatePlane(
        struct D2D_VECTOR_4F *this,
        __m128 *__return_ptr retstr,
        __m128 *a3,
        __m128 *a4)
{
  __m128 v6; // xmm6
  __m128 v7; // xmm7
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm8_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  struct D2D_VECTOR_4F *result; // rax
  struct D2D_VECTOR_4F v19; // [rsp+20h] [rbp-48h]

  v6 = _mm_sub_ps(*a4, *a3);
  v7 = _mm_sub_ps(*a3, *retstr);
  v8 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v9 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  v10 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
  v11 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
  v12 = (float)(v9 * v10) - (float)(v8 * v11);
  v13 = v7.m128_f32[0];
  v14 = (float)(v7.m128_f32[0] * v8) - (float)(v6.m128_f32[0] * v9);
  v15 = (float)(v6.m128_f32[0] * v11) - (float)(v13 * v10);
  v16 = sqrtf_0((float)((float)(v15 * v15) + (float)(v12 * v12)) + (float)(v14 * v14));
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16) & _xmm);
  if ( v17 < 0.0000011920929 )
    v16 = FLOAT_1_0;
  result = this;
  v19.x = v12 / v16;
  v19.z = v14 / v16;
  v19.y = v15 / v16;
  LODWORD(v19.w) = COERCE_UNSIGNED_INT(
                     (float)((float)((float)((float)(v15 * retstr->m128_f32[1]) + (float)(v12 * retstr->m128_f32[0]))
                                   + (float)(v14 * retstr->m128_f32[2]))
                           + (float)(retstr->m128_f32[3] * 0.0))
                   / v16) ^ _xmm;
  *this = v19;
  return result;
}

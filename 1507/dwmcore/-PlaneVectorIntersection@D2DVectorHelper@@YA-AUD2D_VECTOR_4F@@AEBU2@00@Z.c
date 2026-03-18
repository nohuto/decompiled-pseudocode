/*
 * XREFs of ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18011BB98
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18011A6F0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        __m128 *a3,
        __m128 *a4)
{
  __m128 v5; // xmm3
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm2_4
  signed __int64 v14; // r8
  __int64 v15; // rcx
  float v16; // xmm2_4
  struct D2D_VECTOR_4F v18; // [rsp+0h] [rbp-88h]
  float v19[4]; // [rsp+10h] [rbp-78h] BYREF

  v5 = _mm_sub_ps(*a4, *a3);
  v6 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v7 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
  v8 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
  v9 = (float)((float)((float)(retstr->x * v5.m128_f32[0]) + (float)(retstr->y * v6)) + (float)(retstr->z * v7))
     + (float)(retstr->w * v8);
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v10 < 0.0000011920929 )
  {
    *this = *(struct D2D_VECTOR_4F *)a3;
  }
  else
  {
    v11 = retstr->z * a3->m128_f32[2];
    v12 = retstr->w * a3->m128_f32[3];
    v13 = (float)(retstr->y * a3->m128_f32[1]) + (float)(retstr->x * a3->m128_f32[0]);
    v14 = (char *)a3 - (char *)v19;
    v15 = 0LL;
    v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 + v11) + v12) ^ _xmm) / v9;
    v19[0] = v5.m128_f32[0] * v16;
    v19[1] = v6 * v16;
    v19[2] = v7 * v16;
    v19[3] = v8 * v16;
    do
    {
      *(float *)((char *)&v18.x + v15 * 4) = *(float *)((char *)&v19[v15] + v14) + v19[v15];
      ++v15;
    }
    while ( v15 < 4 );
    *this = v18;
  }
  return this;
}

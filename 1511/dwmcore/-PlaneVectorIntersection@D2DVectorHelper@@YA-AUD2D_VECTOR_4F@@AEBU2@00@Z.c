/*
 * XREFs of ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18013272C
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180131084 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        D2DVectorHelper *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        __m128 *a3,
        __m128 *a4)
{
  float y; // xmm3_4
  float z; // xmm10_4
  float w; // xmm11_4
  __m128 v7; // xmm6
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  BOOL v11; // eax
  struct D2D_VECTOR_4F *v12; // r8
  struct D2D_VECTOR_4F *v13; // r10
  float v14; // xmm4_4
  float v15; // xmm5_4
  __int64 v16; // rcx
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm3_4
  signed __int64 v20; // r8
  float v21; // xmm3_4
  struct D2D_VECTOR_4F v22; // xmm0
  struct D2D_VECTOR_4F *result; // rax
  struct D2D_VECTOR_4F v24; // [rsp+20h] [rbp-98h]
  float v25[4]; // [rsp+30h] [rbp-88h] BYREF

  y = retstr->y;
  z = retstr->z;
  w = retstr->w;
  v7 = _mm_sub_ps(*a4, *a3);
  v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  v9 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
  v10 = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
  v11 = IsCloseRealZero(
          (float)((float)((float)(retstr->x * v7.m128_f32[0]) + (float)(y * v8)) + (float)(z * v9)) + (float)(w * v10),
          0.0000011920929);
  v16 = 0LL;
  if ( v11 )
  {
    v22 = *v12;
  }
  else
  {
    v17 = z * v12->z;
    v18 = w * v12->w;
    v19 = (float)(y * v12->y) + (float)(v15 * v12->x);
    v20 = (char *)v12 - (char *)v25;
    v21 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v19 + v17) + v18) ^ _xmm) / v14;
    v25[0] = v7.m128_f32[0] * v21;
    v25[1] = v8 * v21;
    v25[2] = v9 * v21;
    v25[3] = v10 * v21;
    do
    {
      *(float *)((char *)&v24.x + v16 * 4) = *(float *)((char *)&v25[v16] + v20) + v25[v16];
      ++v16;
    }
    while ( v16 < 4 );
    v22 = v24;
  }
  result = v13;
  *v13 = v22;
  return result;
}

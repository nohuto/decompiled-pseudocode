/*
 * XREFs of ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801496D8
 * Callers:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801494BC (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 * Callees:
 *     WithinEpsilon @ 0x180060F74 (WithinEpsilon.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 */

struct D2DVector3 *__fastcall D3DXVec3Normalize(struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  __m128 v2; // xmm8
  __m128 v4; // xmm7
  float v5; // xmm9_4
  float v6; // xmm2_4
  __int64 v7; // rdx
  float v8; // eax
  float v9; // xmm6_4

  v2 = (__m128)*((unsigned int *)a2 + 1);
  v4 = (__m128)*(unsigned int *)a2;
  v5 = *((float *)a2 + 2);
  v6 = (float)((float)(v4.m128_f32[0] * v4.m128_f32[0]) + (float)(v2.m128_f32[0] * v2.m128_f32[0])) + (float)(v5 * v5);
  if ( !WithinEpsilon(v6, 1.0) )
  {
    if ( v6 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_DWORD *)a1 + 2) = 0;
      return a1;
    }
    v9 = 1.0 / sqrtf_0(v6);
    v4.m128_f32[0] = v4.m128_f32[0] * v9;
    v2.m128_f32[0] = v2.m128_f32[0] * v9;
    *(_QWORD *)a1 = _mm_unpacklo_ps(v4, v2).m128_u64[0];
    v8 = v5 * v9;
    goto LABEL_6;
  }
  if ( a1 != (struct D2DVector3 *)v7 )
  {
    *(_QWORD *)a1 = *(_QWORD *)v7;
    v8 = *(float *)(v7 + 8);
LABEL_6:
    *((float *)a1 + 2) = v8;
  }
  return a1;
}

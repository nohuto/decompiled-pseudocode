/*
 * XREFs of ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x180157BC8
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18011D51C (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     WithinEpsilon @ 0x1800685A8 (WithinEpsilon.c)
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 */

struct D2DVector2 *__fastcall D3DXVec2Normalize(struct D2DVector2 *a1, const struct D2DVector2 *a2)
{
  __m128 v3; // xmm7
  __m128 v4; // xmm8
  float v5; // xmm2_4
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  float v8; // xmm6_4

  v3 = (__m128)*(unsigned int *)a2;
  v4 = (__m128)*((unsigned int *)a2 + 1);
  v5 = (float)(v3.m128_f32[0] * v3.m128_f32[0]) + (float)(v4.m128_f32[0] * v4.m128_f32[0]);
  if ( WithinEpsilon(v5, 1.0) )
  {
    if ( (_QWORD *)v7 != v6 )
      *(_QWORD *)v7 = *v6;
  }
  else if ( v5 <= 1.1754944e-38 )
  {
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
  }
  else
  {
    v8 = 1.0 / sqrtf_0(v5);
    v3.m128_f32[0] = v3.m128_f32[0] * v8;
    v4.m128_f32[0] = v4.m128_f32[0] * v8;
    *(_QWORD *)a1 = _mm_unpacklo_ps(v3, v4).m128_u64[0];
  }
  return a1;
}

/*
 * XREFs of ??KD2DVector4@@QEBA?AU0@M@Z @ 0x180157380
 * Callers:
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x180157D9C (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall D2DVector4::operator/(__m128 *a1, __m128 *a2, float a3)
{
  __m128 v3; // xmm3
  __m128 *result; // rax

  v3 = (__m128)LODWORD(FLOAT_1_0);
  v3.m128_f32[0] = 1.0 / a3;
  result = a2;
  *a2 = _mm_mul_ps(*a1, _mm_shuffle_ps(v3, v3, 0));
  return result;
}

/*
 * XREFs of ??_0D2DQuaternion@@QEAAAEAU0@M@Z @ 0x180187BCC
 * Callers:
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180188398 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall D2DQuaternion::operator/=(__m128 *a1, float a2)
{
  __m128 v2; // xmm2

  v2 = (__m128)LODWORD(FLOAT_1_0);
  v2.m128_f32[0] = 1.0 / a2;
  *a1 = _mm_mul_ps(*a1, _mm_shuffle_ps(v2, v2, 0));
  return a1;
}

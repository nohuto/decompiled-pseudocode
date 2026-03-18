/*
 * XREFs of ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18001AC88
 * Callers:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18001AAF4 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x1800239E4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18015B57C (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18016F8CC (_anonymous_namespace_--TransformAndNormalize.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18018855C (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 * Callees:
 *     WithinEpsilon @ 0x18001AD94 (WithinEpsilon.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

struct D2DVector3 *__fastcall D3DXVec3Normalize(struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  __m128 v2; // xmm8
  __m128 v4; // xmm7
  float v5; // xmm9_4
  float v6; // xmm2_4
  __int64 v7; // rdx
  float v9; // xmm6_4
  float v10; // eax

  v2 = (__m128)*((unsigned int *)a2 + 1);
  v4 = (__m128)*(unsigned int *)a2;
  v5 = *((float *)a2 + 2);
  v6 = (float)((float)(v4.m128_f32[0] * v4.m128_f32[0]) + (float)(v2.m128_f32[0] * v2.m128_f32[0])) + (float)(v5 * v5);
  if ( !(unsigned int)WithinEpsilon() )
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
    v10 = v5 * v9;
    goto LABEL_7;
  }
  if ( a1 != (struct D2DVector3 *)v7 )
  {
    *(_QWORD *)a1 = *(_QWORD *)v7;
    v10 = *(float *)(v7 + 8);
LABEL_7:
    *((float *)a1 + 2) = v10;
  }
  return a1;
}

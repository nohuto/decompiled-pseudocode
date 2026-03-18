/*
 * XREFs of ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18018844C
 * Callers:
 *     ?EncodeTBNFrameToQuaternion@@YA?AUD2DQuaternion@@AEBUD2D_VECTOR_3F@@00@Z @ 0x180136BA0 (-EncodeTBNFrameToQuaternion@@YA-AUD2DQuaternion@@AEBUD2D_VECTOR_3F@@00@Z.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18015B57C (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18016E08C (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     WithinEpsilon @ 0x18001AD94 (WithinEpsilon.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionNormalize(struct D2DQuaternion *a1, const struct D2DQuaternion *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  struct D2DQuaternion *v8; // rdx
  __int128 v9; // xmm0
  float v10; // xmm6_4
  __int128 v12; // [rsp+20h] [rbp-68h]

  v3 = *(float *)a2;
  v4 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v7 = (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)) + (float)(v6 * v6);
  if ( !WithinEpsilon(v7, 1.0) )
  {
    if ( v7 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
      return a1;
    }
    v10 = 1.0 / sqrtf_0(v7);
    *(float *)&v12 = v3 * v10;
    *((float *)&v12 + 1) = v4 * v10;
    *((float *)&v12 + 2) = v5 * v10;
    *((float *)&v12 + 3) = v6 * v10;
    v9 = v12;
    goto LABEL_6;
  }
  if ( a1 != v8 )
  {
    v9 = *(_OWORD *)v8;
LABEL_6:
    *(_OWORD *)a1 = v9;
  }
  return a1;
}

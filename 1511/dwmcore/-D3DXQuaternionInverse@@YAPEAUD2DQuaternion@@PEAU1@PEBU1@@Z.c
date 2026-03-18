/*
 * XREFs of ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18015764C
 * Callers:
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x18011B100 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     WithinEpsilon @ 0x1800685A8 (WithinEpsilon.c)
 *     ??_0D2DQuaternion@@QEAAAEAU0@M@Z @ 0x1801573F0 (--_0D2DQuaternion@@QEAAAEAU0@M@Z.c)
 */

__m128 *__fastcall D3DXQuaternionInverse(__m128 *a1, const struct D2DQuaternion *a2)
{
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm2_4

  v2 = *((float *)a2 + 1);
  v3 = *(float *)a2;
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  v6 = (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)) + (float)(v5 * v5);
  if ( v6 <= 1.0842022e-19 )
  {
    a1->m128_i32[0] = 0;
    a1->m128_i32[1] = 0;
    a1->m128_i32[2] = 0;
    a1->m128_i32[3] = 0;
  }
  else
  {
    a1->m128_i32[0] = LODWORD(v3) ^ _xmm;
    a1->m128_i32[1] = LODWORD(v2) ^ _xmm;
    a1->m128_i32[2] = LODWORD(v4) ^ _xmm;
    a1->m128_f32[3] = v5;
    if ( !WithinEpsilon(v6, 1.0) )
      D2DQuaternion::operator/=(a1, v6);
  }
  return a1;
}

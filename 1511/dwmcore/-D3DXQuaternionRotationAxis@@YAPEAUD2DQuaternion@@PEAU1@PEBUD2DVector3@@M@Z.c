/*
 * XREFs of ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180157810
 * Callers:
 *     ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18011E254 (-QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800125A4 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     cosf_0 @ 0x1800BC866 (cosf_0.c)
 *     sinf_0 @ 0x1800BC8F6 (sinf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationAxis(
        struct D2DQuaternion *a1,
        const struct D2DVector3 *a2,
        float a3)
{
  float v4; // xmm6_4
  float v5; // xmm0_4
  struct D2DQuaternion *result; // rax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9[4]; // [rsp+20h] [rbp-38h] BYREF

  D3DXVec3Normalize((struct D2DVector3 *)v9, a2);
  v4 = sinf_0(a3 * 0.5);
  v5 = cosf_0(a3 * 0.5);
  result = a1;
  v7 = v9[1] * v4;
  *(float *)a1 = v9[0] * v4;
  v8 = v9[2] * v4;
  *((float *)a1 + 3) = v5;
  *((float *)a1 + 2) = v8;
  *((float *)a1 + 1) = v7;
  return result;
}

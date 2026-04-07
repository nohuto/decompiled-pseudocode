/*
 * XREFs of ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18009D774
 * Callers:
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008A29C (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18004A30C (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18004A4DC (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationYawPitchRoll(struct D2DMatrix *a1, float a2, float a3, float a4)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)v6, a2, a3, a4);
  D2DMatrixRotationQuaternion(a1, (const struct D2DQuaternion *)v6);
  return a1;
}

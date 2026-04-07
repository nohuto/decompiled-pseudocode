/*
 * XREFs of ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18009BA50
 * Callers:
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008CD64 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x180050EFC (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800510CC (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationYawPitchRoll(struct D2DMatrix *a1, float a2, float a3, float a4)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)v6, a2, a3, a4);
  D2DMatrixRotationQuaternion(a1, (const struct D2DQuaternion *)v6);
  return a1;
}

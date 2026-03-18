/*
 * XREFs of cosf_0 @ 0x1800BC866
 * Callers:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180012410 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800673C4 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?Cos@CExpressionValueStack@@QEAAJXZ @ 0x18011ABEC (-Cos@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180157810 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf_0(float X)
{
  return cosf(X);
}

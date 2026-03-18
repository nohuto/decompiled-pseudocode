/*
 * XREFs of ??DD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180110918
 * Callers:
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801466DC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800AC2F0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall D2DMatrix::operator*(struct D2DMatrix *a1, struct D2DMatrix *a2, const struct D2DMatrix *a3)
{
  __int64 v3; // r9

  D2DMatrixMultiply(a2, a1, a3);
  return v3;
}

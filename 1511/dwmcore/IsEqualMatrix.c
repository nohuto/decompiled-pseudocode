/*
 * XREFs of IsEqualMatrix @ 0x18015A020
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1800FE2A0 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEqualMatrix(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] && a1[4] == a2[4] && a1[5] == a2[5];
}

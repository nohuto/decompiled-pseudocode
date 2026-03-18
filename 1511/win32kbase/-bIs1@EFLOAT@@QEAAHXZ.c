/*
 * XREFs of ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0015098
 * Callers:
 *     vConvertXformToMatrix @ 0x1C0014000 (vConvertXformToMatrix.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C00156F0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1(EFLOAT *this)
{
  return *(float *)this == 1.0;
}

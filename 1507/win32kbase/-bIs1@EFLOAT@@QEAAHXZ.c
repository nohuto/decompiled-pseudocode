/*
 * XREFs of ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0027C6C
 * Callers:
 *     vConvertXformToMatrix @ 0x1C0025560 (vConvertXformToMatrix.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0028200 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1(EFLOAT *this)
{
  return *(float *)this == 1.0;
}

/*
 * XREFs of ?bIs1Over16@EFLOAT@@QEAAHXZ @ 0x1C00AFB00
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0028200 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1Over16(EFLOAT *this)
{
  return *(float *)this == 0.0625;
}

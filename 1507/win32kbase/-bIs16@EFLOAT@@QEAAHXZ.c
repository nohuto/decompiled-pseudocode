/*
 * XREFs of ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0027C54
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0028200 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C003C580 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs16(EFLOAT *this)
{
  return *(float *)this == 16.0;
}

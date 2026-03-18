/*
 * XREFs of ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C00B1444
 * Callers:
 *     bCvtVts @ 0x1C00F93D0 (bCvtVts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EFLOAT::bEfToL(EFLOAT *this, int *a2)
{
  return bFToL(*(float *)this, a2, 6);
}

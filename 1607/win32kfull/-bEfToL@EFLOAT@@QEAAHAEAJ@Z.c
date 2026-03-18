/*
 * XREFs of ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C01BF490
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00147C4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EFLOAT::bEfToL(EFLOAT *this, int *a2)
{
  return bFToL(*(float *)this, a2, 6);
}

/*
 * XREFs of LongSub @ 0x1C026541C
 * Callers:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC580 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall LongSub(int a1, int a2, LONG *a3)
{
  return LongLongToLong(a1 - (__int64)a2, a3);
}

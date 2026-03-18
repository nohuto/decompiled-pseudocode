/*
 * XREFs of LongSub @ 0x1C0263C14
 * Callers:
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall LongSub(int a1, int a2, LONG *a3)
{
  return LongLongToLong(a1 - (__int64)a2, a3);
}

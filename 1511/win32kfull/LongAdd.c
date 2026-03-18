/*
 * XREFs of LongAdd @ 0x1C0263C00
 * Callers:
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C013C288 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall LongAdd(int a1, int a2, LONG *a3)
{
  return LongLongToLong(a2 + (__int64)a1, a3);
}

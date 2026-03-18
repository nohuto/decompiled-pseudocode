/*
 * XREFs of ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025FF8C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0009DB0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0260390 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vAltCheckLockIgnoreStockBit(SURFREF *this, HSURF a2)
{
  HSURF v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheckIgnoreStockBit(v3, a2);
}

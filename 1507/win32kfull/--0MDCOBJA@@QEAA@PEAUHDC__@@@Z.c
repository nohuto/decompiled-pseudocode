/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00EB21C
 * Callers:
 *     DxgkEngLockVisRgn @ 0x1C00EAB50 (DxgkEngLockVisRgn.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EAC10 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngGetDC @ 0x1C0101120 (DxgkEngGetDC.c)
 *     GreSetPaletteEntries @ 0x1C02B21D0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLock(v3, a2);
  return this;
}

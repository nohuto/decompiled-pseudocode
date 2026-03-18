/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0008180
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngGetDC @ 0x1C0260EF0 (DxgkEngGetDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0261080 (DxgkEngLockVisRgn.c)
 *     GreSetPaletteEntries @ 0x1C02B4310 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B4820 (NtGdiResizePalette.c)
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

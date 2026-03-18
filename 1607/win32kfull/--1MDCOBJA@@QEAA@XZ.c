/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C0158A20
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x1C02B4310 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B4820 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MDCOBJA::~MDCOBJA(MDCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
}

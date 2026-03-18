/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C015B938
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EAC10 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x1C02B21D0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MDCOBJA::~MDCOBJA(MDCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
}

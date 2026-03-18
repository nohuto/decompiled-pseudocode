/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C003A728
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C003A450 (GreSelectRedirectionBitmap.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C007F000 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreSetPaletteEntries @ 0x1C02B1470 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B1950 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
}

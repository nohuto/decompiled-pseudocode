/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C02A5DE8
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C00DE890 (NtGdiSelectBitmap.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}

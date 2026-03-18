/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C02A6A08
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C01012F0 (NtGdiSelectBitmap.c)
 *     NtGdiResizePalette @ 0x1C02B4820 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}

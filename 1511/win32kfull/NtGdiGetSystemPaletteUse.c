/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x1C02A6D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}

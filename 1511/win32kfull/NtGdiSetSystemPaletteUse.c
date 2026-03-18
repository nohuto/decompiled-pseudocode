/*
 * XREFs of NtGdiSetSystemPaletteUse @ 0x1C02A7DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiSetSystemPaletteUse(HDC a1)
{
  return GreSetSystemPaletteUse(a1);
}

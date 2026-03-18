/*
 * XREFs of EngDeletePalette @ 0x1C005C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  return EngDeletePaletteInternal(hpal, 0);
}

/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x14032AF90
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1402302EC (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}

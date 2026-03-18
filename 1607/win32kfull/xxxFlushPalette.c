/*
 * XREFs of xxxFlushPalette @ 0x1C020E340
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C01008B0 (GreRealizeDefaultPalette.c)
 */

__int64 __fastcall xxxFlushPalette(__int64 *a1)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 24LL));
  return xxxBroadcastPaletteChanged(a1);
}

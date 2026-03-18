/*
 * XREFs of xxxFlushPalette @ 0x1C0215630
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C010CB04 (GreRealizeDefaultPalette.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 24LL));
  return xxxBroadcastPaletteChanged(a1);
}

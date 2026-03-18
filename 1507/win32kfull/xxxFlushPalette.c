/*
 * XREFs of xxxFlushPalette @ 0x1C0215780
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C007B930 (GreRealizeDefaultPalette.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 24LL));
  return xxxBroadcastPaletteChanged(a1);
}

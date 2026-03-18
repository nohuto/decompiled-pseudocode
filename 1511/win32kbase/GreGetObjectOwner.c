/*
 * XREFs of GreGetObjectOwner @ 0x1C0074F00
 * Callers:
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0041CF0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EngGetRgnData @ 0x1C0074CC0 (EngGetRgnData.c)
 *     EngCombineRgn @ 0x1C0074DD0 (EngCombineRgn.c)
 *     EngSetRectRgn @ 0x1C0074E50 (EngSetRectRgn.c)
 *     EngDeleteRgn @ 0x1C0074EB0 (EngDeleteRgn.c)
 *     EngCopyRgn @ 0x1C00BF360 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C00BF3B0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00BF440 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C00BF480 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00BF4F0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00BF540 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C00BF580 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00BF5F0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00BF660 (EngXorRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetObjectOwner(int a1, int a2)
{
  unsigned int v2; // r8d

  v2 = -2147483614;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr
    && *((unsigned __int8 *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1 + 14) == a2
    && *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned __int16)a1 + 6) == HIWORD(a1) )
  {
    return *((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 6 * (unsigned __int16)a1 + 2) & 0xFFFFFFFE;
  }
  return v2;
}

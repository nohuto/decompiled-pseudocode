/*
 * XREFs of GreGetObjectOwner @ 0x1C0011090
 * Callers:
 *     EngSetRectRgn @ 0x1C0010FA0 (EngSetRectRgn.c)
 *     EngDeleteRgn @ 0x1C0011020 (EngDeleteRgn.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00519E0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EngCombineRgn @ 0x1C0083FA0 (EngCombineRgn.c)
 *     EngGetRgnData @ 0x1C0084E00 (EngGetRgnData.c)
 *     EngCopyRgn @ 0x1C00BDC00 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C00BDC80 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00BDD40 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C00BDDA0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00BDE30 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00BDEA0 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C00BDF00 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00BDF90 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00BE020 (EngXorRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetObjectOwner(int a1, int a2)
{
  unsigned int v2; // r8d

  v2 = -2147483614;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr
    && *(unsigned __int8 *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 14) == a2
    && *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 12) == HIWORD(a1) )
  {
    return *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 8) & 0xFFFFFFFE;
  }
  return v2;
}

/*
 * XREFs of vVtfdMarkFontGone @ 0x1C0248CDC
 * Callers:
 *     vtfdQueryFontDataTE @ 0x1C011F140 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0153190 (vtfdQueryFontFileTE.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0248D10 (vtfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 */

void __fastcall vVtfdMarkFontGone(int *a1, int a2)
{
  int v2; // eax

  if ( a2 == -1073741818 )
  {
    v2 = *a1;
    a1[7] |= 1u;
    if ( (unsigned int)(v2 - 1) <= 1 )
      EngUnmapFontFileFD(*((_QWORD *)a1 + 1));
  }
}

/*
 * XREFs of vVtfdMarkFontGone @ 0x1C0248CA0
 * Callers:
 *     vtfdQueryFontFileTE @ 0x1C010EEE0 (vtfdQueryFontFileTE.c)
 *     vtfdQueryFontDataTE @ 0x1C012C1E0 (vtfdQueryFontDataTE.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0248CD0 (vtfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
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

/*
 * XREFs of vBmfdMarkFontGone @ 0x1C0247E90
 * Callers:
 *     BmfdQueryFontDataTE @ 0x1C01167F0 (BmfdQueryFontDataTE.c)
 *     BmfdQueryFontData @ 0x1C0116898 (BmfdQueryFontData.c)
 *     BmfdQueryAdvanceWidthsTE @ 0x1C0147180 (BmfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 */

void __fastcall vBmfdMarkFontGone(__int64 a1, int a2)
{
  EngAcquireSemaphore(ghsemBMFD);
  if ( a2 == -1073741818 )
  {
    *(_DWORD *)(a1 + 4) |= 1u;
    EngUnmapFontFileFD(*(_QWORD *)(a1 + 16));
  }
  EngReleaseSemaphore(ghsemBMFD);
}

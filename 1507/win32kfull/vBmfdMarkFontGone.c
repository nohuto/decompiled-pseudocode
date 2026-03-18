/*
 * XREFs of vBmfdMarkFontGone @ 0x1C0247ECC
 * Callers:
 *     BmfdQueryFontDataTE @ 0x1C00A8E10 (BmfdQueryFontDataTE.c)
 *     BmfdQueryFontData @ 0x1C00A8EB8 (BmfdQueryFontData.c)
 *     BmfdQueryAdvanceWidthsTE @ 0x1C011CB60 (BmfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
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

/*
 * XREFs of vtfdQueryAdvanceWidthsTE @ 0x1C0245010
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00C2280 (EngUnmapFontFileFD.c)
 *     bvtfdMapFontFileFD @ 0x1C014D8A0 (bvtfdMapFontFileFD.c)
 *     vVtfdMarkFontGone @ 0x1C0244FE0 (vVtfdMarkFontGone.c)
 *     vtfdQueryAdvanceWidths @ 0x1C0245584 (vtfdQueryAdvanceWidths.c)
 */

__int64 __fastcall vtfdQueryAdvanceWidthsTE(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  int v7; // esi
  unsigned int AdvanceWidths; // ebx
  __int64 v9; // rdi
  int v10; // edx

  v7 = a2;
  AdvanceWidths = -1;
  if ( a3 <= 1 )
  {
    v9 = a2 + 24;
    if ( (unsigned int)bvtfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
    {
      EngAcquireSemaphore(ghsemVTFD);
      AdvanceWidths = vtfdQueryAdvanceWidths(v7, v10, a4, a5, a6);
      EngReleaseSemaphore(ghsemVTFD);
      EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)v9 + 8LL));
    }
  }
  return AdvanceWidths;
}

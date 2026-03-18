/*
 * XREFs of ttfdSemQueryAdvanceWidths @ 0x1C0028990
 * Callers:
 *     <none>
 * Callees:
 *     bQueryAdvanceWidths @ 0x1C00285C4 (bQueryAdvanceWidths.c)
 *     bttfdMapFontFileFD @ 0x1C00C1D20 (bttfdMapFontFileFD.c)
 *     EngUnmapFontFileFD @ 0x1C00C2280 (EngUnmapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0240DB8 (vMarkFontGone.c)
 */

__int64 __fastcall ttfdSemQueryAdvanceWidths(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int16 *a5,
        unsigned int a6)
{
  unsigned int AdvanceWidths; // ebx
  __int64 v10; // rdi

  AdvanceWidths = -1;
  v10 = a2 + 24;
  if ( (unsigned int)bttfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    AdvanceWidths = bQueryAdvanceWidths(a2, a3, a4, a5, a6);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 48LL) + 56LL));
  }
  return AdvanceWidths;
}

/*
 * XREFs of ttfdSemQueryTrueTypeTable @ 0x1C00A9990
 * Callers:
 *     <none>
 * Callees:
 *     ttfdQueryTrueTypeTable2 @ 0x1C00A98B8 (ttfdQueryTrueTypeTable2.c)
 *     bttfdMapFontFileFD @ 0x1C00A9A88 (bttfdMapFontFileFD.c)
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0244DB8 (vMarkFontGone.c)
 */

__int64 __fastcall ttfdSemQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        void *a6,
        __int64 *a7,
        int *a8)
{
  unsigned int TrueTypeTable2; // edi
  __int64 v13; // rdx

  TrueTypeTable2 = -1;
  if ( (unsigned int)bttfdMapFontFileFD(a1) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    v13 = *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL));
    if ( !*(_DWORD *)(v13 + 48) )
    {
      *(_QWORD *)(v13 + 64) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v13 + 72) = *(_DWORD *)(a1 + 24);
    }
    TrueTypeTable2 = ttfdQueryTrueTypeTable2(a1, a2, a3, a4, a5, a6, a7, a8);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 56LL));
  }
  return TrueTypeTable2;
}

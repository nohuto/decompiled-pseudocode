/*
 * XREFs of ttfdSemQueryFontData @ 0x1C00B1560
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 *     ttfdQueryFontData @ 0x1C00B1D84 (ttfdQueryFontData.c)
 *     vMarkFontGone @ 0x1C0244C28 (vMarkFontGone.c)
 */

__int64 __fastcall ttfdSemQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v9; // esi
  unsigned int FontData; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // eax

  v9 = a2;
  FontData = -1;
  v11 = a2 + 24;
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
    v13 = EngMapFontFileFDInternal(*(struct _FILEVIEW **)(*(_QWORD *)(v12 + 48) + 56LL));
  else
    v13 = 0;
  if ( v13 )
  {
    EngAcquireSemaphore(ghsemTTFD);
    FontData = ttfdQueryFontData(v9, a3, a4, a5, a6, a7);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 48LL) + 56LL));
  }
  return FontData;
}

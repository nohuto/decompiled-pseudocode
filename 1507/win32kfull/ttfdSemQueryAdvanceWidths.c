/*
 * XREFs of ttfdSemQueryAdvanceWidths @ 0x1C00B1650
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 *     bQueryAdvanceWidths @ 0x1C00B19B0 (bQueryAdvanceWidths.c)
 *     vMarkFontGone @ 0x1C0244C28 (vMarkFontGone.c)
 */

__int64 __fastcall ttfdSemQueryAdvanceWidths(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  int v8; // esi
  unsigned int AdvanceWidths; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // eax

  v8 = a2;
  AdvanceWidths = -1;
  v10 = a2 + 24;
  v11 = *(_QWORD *)(a2 + 24);
  if ( v11 )
    v12 = EngMapFontFileFDInternal(*(struct _FILEVIEW **)(*(_QWORD *)(v11 + 48) + 56LL));
  else
    v12 = 0;
  if ( v12 )
  {
    EngAcquireSemaphore(ghsemTTFD);
    AdvanceWidths = bQueryAdvanceWidths(v8, a3, a4, a5, a6);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 48LL) + 56LL));
  }
  return AdvanceWidths;
}

/*
 * XREFs of vUnmapRemoteFonts @ 0x1C027F480
 * Callers:
 *     FreeFileView @ 0x1C012A648 (FreeFileView.c)
 *     GreAddFontMemResourceEx @ 0x1C027ED0C (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027EE10 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     Win32DestroySection @ 0x1C01D1EF8 (Win32DestroySection.c)
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C02B9930 (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
 */

void __fastcall vUnmapRemoteFonts(__int64 a1)
{
  int v1; // eax
  void *v3; // rcx
  void *v4; // rcx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 100);
    if ( v1 )
      *(_DWORD *)(a1 + 100) = v1 - 1;
    if ( !*(_DWORD *)(a1 + 100) && *(_QWORD *)(a1 + 32) )
    {
      v3 = *(void **)(a1 + 104);
      if ( v3 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
          UmfdHostLifeTimeManager::MmUnmapViewOfSection(v3, *(_QWORD *)(a1 + 72));
        else
          MmUnmapViewOfSection(gpepCSRSS, v3);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      Win32DestroySection(*(PVOID *)(a1 + 32));
      v4 = *(void **)(a1 + 48);
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( v4 )
      {
        ZwClose(v4);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
    }
  }
}

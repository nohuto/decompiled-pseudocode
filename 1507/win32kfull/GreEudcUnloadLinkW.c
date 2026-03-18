/*
 * XREFs of GreEudcUnloadLinkW @ 0x1C028AC14
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C028BBF0 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C01295F4 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C012A9B0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     bDeleteFlEntry @ 0x1C028B194 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C028B364 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcUnloadLinkW(wchar_t *Str1, __int64 a2, unsigned __int16 *a3)
{
  int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = 1;
  GreAcquireSemaphore(ghsemEUDC1);
  v7 = 0;
  if ( gcEUDCCount <= 0 )
  {
    if ( Str1 )
    {
      v5 = bDeleteFlEntry(Str1, a3);
      if ( !v5 )
        v5 = bDeleteFlEntry(Str1, a3);
    }
    else if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      vUnlinkAllEudcRFONTsAndPFEs(v6, 0);
      bUnloadEudcFont((__int64)&gappfeSysEUDC);
      ++dword_1C032F1B8;
      *(_OWORD *)&gappfeSysEUDC = 0uLL;
      Dst[0] = 0;
      bWriteUserSystemEUDCRegistry(qword_1C0162EB0);
    }
    v7 = v5;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v7;
}

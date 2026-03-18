/*
 * XREFs of EngFntCacheFault @ 0x1C027BAC0
 * Callers:
 *     bLoadTTF_Cache @ 0x1C0020D3C (bLoadTTF_Cache.c)
 *     vFontFileCache @ 0x1C0157994 (vFontFileCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00BBEE0 (bSetFntCacheReg.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v3; // edx
  int v4; // edx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C0328CC0 & 3) != 0 )
  {
    if ( qword_1C0328CC8 )
    {
      if ( iFaultMode - 1 <= 1 )
      {
        v3 = *(_DWORD *)(qword_1C0328CC8 + 16);
        if ( (v3 & 1) == 0 )
        {
          v4 = v3 | 1;
          *(_DWORD *)(qword_1C0328CC8 + 16) = v4;
          bSetFntCacheReg(L"LastBootTimeFontCacheState", v4);
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}

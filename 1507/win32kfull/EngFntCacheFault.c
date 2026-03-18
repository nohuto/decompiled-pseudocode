/*
 * XREFs of EngFntCacheFault @ 0x1C027DE90
 * Callers:
 *     bLoadTTF_Cache @ 0x1C012C4E0 (bLoadTTF_Cache.c)
 *     vFontFileCache @ 0x1C0159A14 (vFontFileCache.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bSetFntCacheReg @ 0x1C013D788 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v3; // edx
  int v4; // edx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C03234B8 & 3) != 0 )
  {
    if ( qword_1C0323DF0 )
    {
      if ( iFaultMode - 1 <= 1 )
      {
        v3 = *(_DWORD *)(qword_1C0323DF0 + 16);
        if ( (v3 & 1) == 0 )
        {
          v4 = v3 | 1;
          *(_DWORD *)(qword_1C0323DF0 + 16) = v4;
          bSetFntCacheReg(L"LastBootTimeFontCacheState", v4);
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}

/*
 * XREFs of EngFntCacheFault @ 0x1C027D880
 * Callers:
 *     bLoadTTF_Cache @ 0x1C001106C (bLoadTTF_Cache.c)
 *     vFontFileCache @ 0x1C014FBB4 (vFontFileCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00D4550 (bSetFntCacheReg.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v3; // edx
  int v4; // edx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C0323620 & 3) != 0 )
  {
    if ( qword_1C0323628 )
    {
      if ( iFaultMode - 1 <= 1 )
      {
        v3 = *(_DWORD *)(qword_1C0323628 + 16);
        if ( (v3 & 1) == 0 )
        {
          v4 = v3 | 1;
          *(_DWORD *)(qword_1C0323628 + 16) = v4;
          bSetFntCacheReg(L"LastBootTimeFontCacheState", v4);
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}

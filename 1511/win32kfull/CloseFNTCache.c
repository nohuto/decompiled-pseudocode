/*
 * XREFs of CloseFNTCache @ 0x1C00D703C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00D6EF0 (xxxLW_LoadFonts.c)
 *     EngFntCacheAlloc @ 0x1C014FE90 (EngFntCacheAlloc.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00D4550 (bSetFntCacheReg.c)
 *     vUnmapFontCacheFile @ 0x1C00D8EC8 (vUnmapFontCacheFile.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ComputeFileviewCheckSum @ 0x1C0118220 (ComputeFileviewCheckSum.c)
 */

void CloseFNTCache()
{
  char v0; // di
  _DWORD *v1; // rbx
  int v2; // edx
  const WCHAR *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  v0 = dword_1C0323620;
  if ( (dword_1C0323620 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C0323628;
    if ( qword_1C0323628 )
    {
      if ( (dword_1C0323620 & 2) != 0 )
      {
        if ( !*(_QWORD *)qword_1C0323628 )
          goto LABEL_6;
        if ( *(_DWORD *)(qword_1C0323628 + 88) )
        {
          *(_DWORD *)(*(_QWORD *)qword_1C0323628 + 20LL) = *(_DWORD *)(qword_1C0323628 + 8);
          *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
          **(_DWORD **)v1 = ComputeFileviewCheckSum(
                              *(_QWORD *)v1 + 4LL,
                              (unsigned int)(*(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4));
        }
      }
      if ( *(_QWORD *)v1 )
      {
        vUnmapFontCacheFile();
        v0 = dword_1C0323620;
        v1 = (_DWORD *)qword_1C0323628;
      }
LABEL_6:
      v2 = v1[4];
      if ( (v0 & 2) != 0 )
      {
        if ( v1[3] != v2 )
          bSetFntCacheReg(L"LastBootTimeFontCacheState", v2);
        v2 = 0;
        v3 = L"DisableRemoteFontBootCache";
      }
      else
      {
        if ( (v2 & 3) == 0 )
        {
LABEL_8:
          Win32FreePool(v1);
          qword_1C0323628 = 0LL;
          goto LABEL_9;
        }
        v3 = L"LastBootTimeFontCacheState";
      }
      bSetFntCacheReg(v3, v2);
      v1 = (_DWORD *)qword_1C0323628;
      goto LABEL_8;
    }
  }
LABEL_9:
  dword_1C0323620 = 0;
  gbFntCacheClosed = 1;
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}

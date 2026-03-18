/*
 * XREFs of CloseFNTCache @ 0x1C013B9F0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C013B4F0 (xxxLW_LoadFonts.c)
 *     EngFntCacheAlloc @ 0x1C0159CF0 (EngFntCacheAlloc.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnmapFontCacheFile @ 0x1C013C5D4 (vUnmapFontCacheFile.c)
 *     ComputeFileviewCheckSum @ 0x1C013CAE0 (ComputeFileviewCheckSum.c)
 *     bSetFntCacheReg @ 0x1C013D788 (bSetFntCacheReg.c)
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
  v0 = dword_1C03234B8;
  if ( (dword_1C03234B8 & 3) != 0 )
  {
    v1 = (_DWORD *)qword_1C0323DF0;
    if ( qword_1C0323DF0 )
    {
      if ( (dword_1C03234B8 & 2) != 0 )
      {
        if ( !*(_QWORD *)qword_1C0323DF0 )
          goto LABEL_9;
        if ( *(_DWORD *)(qword_1C0323DF0 + 88) )
        {
          *(_DWORD *)(*(_QWORD *)qword_1C0323DF0 + 20LL) = *(_DWORD *)(qword_1C0323DF0 + 8);
          *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
          **(_DWORD **)v1 = ComputeFileviewCheckSum(
                              *(_QWORD *)v1 + 4LL,
                              (unsigned int)(*(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4));
        }
      }
      if ( *(_QWORD *)v1 )
      {
        vUnmapFontCacheFile();
        v0 = dword_1C03234B8;
        v1 = (_DWORD *)qword_1C0323DF0;
      }
LABEL_9:
      v2 = v1[4];
      if ( (v0 & 2) != 0 )
      {
        if ( v1[3] != v2 )
          bSetFntCacheReg(L"LastBootTimeFontCacheState");
        v3 = L"DisableRemoteFontBootCache";
      }
      else
      {
        if ( (v2 & 3) == 0 )
        {
LABEL_11:
          Win32FreePool(v1);
          qword_1C0323DF0 = 0LL;
          goto LABEL_12;
        }
        v3 = L"LastBootTimeFontCacheState";
      }
      bSetFntCacheReg(v3);
      v1 = (_DWORD *)qword_1C0323DF0;
      goto LABEL_11;
    }
  }
LABEL_12:
  dword_1C03234B8 = 0;
  gbFntCacheClosed = 1;
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}

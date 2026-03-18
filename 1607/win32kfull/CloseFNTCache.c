/*
 * XREFs of CloseFNTCache @ 0x1C00EB248
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00EADD0 (xxxLW_LoadFonts.c)
 *     EngFntCacheAlloc @ 0x1C0157C70 (EngFntCacheAlloc.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00BBEE0 (bSetFntCacheReg.c)
 *     ComputeFileviewCheckSum @ 0x1C00BC940 (ComputeFileviewCheckSum.c)
 *     vUnmapFontCacheFile @ 0x1C00EBBF4 (vUnmapFontCacheFile.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void CloseFNTCache()
{
  __int64 v0; // r8
  char v1; // di
  _DWORD *v2; // rbx
  __int64 v3; // rdx
  const WCHAR *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  v1 = dword_1C0328CC0;
  if ( (dword_1C0328CC0 & 3) != 0 )
  {
    v2 = (_DWORD *)qword_1C0328CC8;
    if ( qword_1C0328CC8 )
    {
      if ( (dword_1C0328CC0 & 2) != 0 )
      {
        if ( !*(_QWORD *)qword_1C0328CC8 )
          goto LABEL_6;
        if ( *(_DWORD *)(qword_1C0328CC8 + 88) )
        {
          *(_DWORD *)(*(_QWORD *)qword_1C0328CC8 + 20LL) = *(_DWORD *)(qword_1C0328CC8 + 8);
          *(_DWORD *)(*(_QWORD *)v2 + 36LL) = v2[8] - v2[6];
          **(_DWORD **)v2 = ComputeFileviewCheckSum(
                              (_DWORD *)(*(_QWORD *)v2 + 4LL),
                              *(_DWORD *)(*(_QWORD *)v2 + 24LL) - 4);
        }
      }
      if ( *(_QWORD *)v2 )
      {
        vUnmapFontCacheFile();
        v1 = dword_1C0328CC0;
        v2 = (_DWORD *)qword_1C0328CC8;
      }
LABEL_6:
      v3 = (unsigned int)v2[4];
      if ( (v1 & 2) != 0 )
      {
        if ( v2[3] != (_DWORD)v3 )
          bSetFntCacheReg(L"LastBootTimeFontCacheState", v3);
        LODWORD(v3) = 0;
        v4 = L"DisableRemoteFontBootCache";
      }
      else
      {
        if ( (v3 & 3) == 0 )
        {
LABEL_8:
          Win32FreePool(v2, v3, v0);
          qword_1C0328CC8 = 0LL;
          goto LABEL_9;
        }
        v4 = L"LastBootTimeFontCacheState";
      }
      bSetFntCacheReg(v4, v3);
      v2 = (_DWORD *)qword_1C0328CC8;
      goto LABEL_8;
    }
  }
LABEL_9:
  dword_1C0328CC0 = 0;
  gbFntCacheClosed = 1;
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}

/*
 * XREFs of EngFntCacheAlloc @ 0x1C0159CF0
 * Callers:
 *     vFontFileCache @ 0x1C0159A14 (vFontFileCache.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     CloseFNTCache @ 0x1C013B9F0 (CloseFNTCache.c)
 *     SearchFntCacheNewLink @ 0x1C0159F0C (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x1C015A00C (bReAllocCacheFile.c)
 */

PVOID __stdcall EngFntCacheAlloc(ULONG ulFastCheckSum, ULONG cjSize)
{
  char *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r14
  _DWORD *v7; // rax
  int v9; // eax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v10 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  v5 = qword_1C0323DF0;
  if ( qword_1C0323DF0 && ulFastCheckSum )
  {
    if ( (dword_1C03234B8 & 2) != 0 )
    {
      v6 = (cjSize + 7) & 0xFFFFFFF8;
      if ( (unsigned __int64)(v6 + *(_QWORD *)(qword_1C0323DF0 + 32)) < *(_QWORD *)(qword_1C0323DF0 + 40)
        || (v9 = bReAllocCacheFile(cjSize), v5 = qword_1C0323DF0, v9) )
      {
        v7 = (_DWORD *)SearchFntCacheNewLink(ulFastCheckSum);
        if ( v7 )
        {
          if ( v7[4] || v7[5] )
          {
            v7[6] |= 1u;
          }
          else
          {
            v4 = *(char **)(v5 + 32);
            *(_QWORD *)(v5 + 32) = &v4[v6];
            v7[4] = cjSize;
            v7[5] = (_DWORD)v4 - *(_DWORD *)(v5 + 24);
          }
          *(_DWORD *)(v5 + 88) = 1;
        }
      }
    }
    else
    {
      *(_DWORD *)(qword_1C0323DF0 + 16) |= 2u;
    }
    if ( (*(_DWORD *)(v5 + 16) & 1) != 0 )
    {
      CloseFNTCache();
      v4 = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v4;
}

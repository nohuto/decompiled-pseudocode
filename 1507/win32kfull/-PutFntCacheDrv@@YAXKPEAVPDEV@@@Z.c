/*
 * XREFs of ?PutFntCacheDrv@@YAXKPEAVPDEV@@@Z @ 0x1C0159DD0
 * Callers:
 *     KmfdLoadFontFileView @ 0x1C01415E4 (KmfdLoadFontFileView.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFntCacheNewLink @ 0x1C0159F0C (SearchFntCacheNewLink.c)
 */

void __fastcall PutFntCacheDrv(unsigned int a1, struct PDEV *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C03234B8 & 3) != 0 )
  {
    v4 = qword_1C0323DF0;
    if ( qword_1C0323DF0 )
    {
      if ( a1 )
      {
        v5 = 1;
        while ( a2 != *(struct PDEV **)(qword_1C0323DF0 + 8LL * v5 + 48) )
        {
          if ( ++v5 > 4 )
            goto LABEL_12;
        }
        if ( v5 )
        {
          if ( (dword_1C03234B8 & 2) != 0 )
          {
            v6 = SearchFntCacheNewLink(a1);
            if ( v6 )
            {
              if ( *(_DWORD *)(v6 + 12) )
                *(_DWORD *)(v6 + 24) |= 1u;
              else
                *(_DWORD *)(v6 + 12) = v5;
            }
            else
            {
              *(_DWORD *)(v4 + 16) |= 2u;
            }
            *(_DWORD *)(v4 + 88) = 1;
          }
          else
          {
            *(_DWORD *)(qword_1C0323DF0 + 16) |= 2u;
          }
        }
      }
    }
  }
LABEL_12:
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
}

/*
 * XREFs of SearchFntCacheNewLink @ 0x1C0157DD4
 * Callers:
 *     ?PutFntCacheDrv@@YAXKPEAVPDEV@@@Z @ 0x1C015745C (-PutFntCacheDrv@@YAXKPEAVPDEV@@@Z.c)
 *     EngFntCacheAlloc @ 0x1C0157C70 (EngFntCacheAlloc.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0157D50 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C00217A8 (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0x1C0157E68 (bFntCacheCreateHLink.c)
 */

unsigned int *__fastcall SearchFntCacheNewLink(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  unsigned int *v4; // rbx
  unsigned int *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_1C0328CC8;
  v6 = 0LL;
  SearchFNTCacheHlink(a1, (__int64 *)&v6, *(_QWORD *)qword_1C0328CC8);
  v4 = v6;
  if ( !v6 )
  {
    if ( *(_DWORD *)(v1 + 8) < *(_DWORD *)(v3 + 16) && (unsigned int)bFntCacheCreateHLink(a1) )
    {
      v4 = (unsigned int *)(28LL * *(unsigned int *)(v1 + 8) + *(_QWORD *)v1 + 316LL);
      *v4 = a1;
      v4[1] = 0;
      v4[2] = -1;
      v4[4] = 0;
      v4[5] = 0;
      v4[6] = 0;
      v4[3] = 0;
      ++*(_DWORD *)(v1 + 8);
    }
    else
    {
      *(_DWORD *)(v1 + 16) |= 2u;
    }
  }
  return v4;
}

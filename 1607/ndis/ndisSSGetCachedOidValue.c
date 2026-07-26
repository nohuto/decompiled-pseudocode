/*
 * XREFs of ndisSSGetCachedOidValue @ 0x1C00DC3B4
 * Callers:
 *     ndisOidPreGenStats @ 0x1C009B250 (ndisOidPreGenStats.c)
 *     ndisOidPreStatistics @ 0x1C009B2D0 (ndisOidPreStatistics.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     ndisSSGetOidCacheEntry @ 0x1C006BF0C (ndisSSGetOidCacheEntry.c)
 */

char __fastcall ndisSSGetCachedOidValue(__int64 a1)
{
  __int64 v1; // rsi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  int v6; // eax
  unsigned int v7; // eax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = ndisSSGetOidCacheEntry(*(_QWORD *)(*(_QWORD *)a1 + 4512LL), *(_DWORD *)(v1 + 32));
  v4 = v3;
  if ( !v3 )
    return 0;
  v6 = v3[4];
  if ( v6 == -1073676265 || v6 == -1073741637 || v6 == 65537 )
  {
    *(_DWORD *)(a1 + 40) = v6;
  }
  else
  {
    if ( !*((_BYTE *)v4 + 20) )
      return 0;
    v7 = v4[1];
    if ( *(_DWORD *)(v1 + 48) < v7 )
      return 0;
    memmove(*(void **)(v1 + 40), *((const void **)v4 + 1), v7);
    *(_DWORD *)(v1 + 52) = v4[1];
    *(_DWORD *)(a1 + 40) = 0;
  }
  return 1;
}

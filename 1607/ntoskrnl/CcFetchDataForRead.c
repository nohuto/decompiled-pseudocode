/*
 * XREFs of CcFetchDataForRead @ 0x140032AD0
 * Callers:
 *     CcMapAndCopyFromCache @ 0x140446260 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 * Callees:
 *     MmWaitForCacheManagerPrefetch @ 0x140022050 (MmWaitForCacheManagerPrefetch.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MmPrefetchForCacheManager @ 0x14042B4AC (MmPrefetchForCacheManager.c)
 *     MmHardFaultBytesRequired @ 0x140446420 (MmHardFaultBytesRequired.c)
 */

char __fastcall CcFetchDataForRead(__int64 a1, _QWORD *a2, unsigned int a3, char a4, _DWORD *a5, _QWORD *P, int a7)
{
  int v7; // r14d
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // r8d

  v7 = a1;
  v9 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  v10 = *P + (*(_DWORD *)a2 & 0x3F000);
  v11 = ((*a2 + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - v9;
  v12 = 0x40000 - ((*(_DWORD *)P + (*(_DWORD *)a2 & 0x3F000)) & 0x3FFFF);
  if ( v12 >= (unsigned int)v11 )
    v12 = ((*(_DWORD *)a2 + a3 + 4095) & 0xFFFFF000) - v9;
  v13 = v12;
  if ( !(unsigned int)MmHardFaultBytesRequired(a1, *a2 & 0xFFFFFFFFFFFFF000uLL, v12) )
    goto LABEL_4;
  if ( a4 )
  {
    MmPrefetchForCacheManager(v7, v9, v14, v11, a7);
    *a5 = 1;
LABEL_4:
    MmCheckCachedPageStates(v10, v13, 0LL, 0LL);
    return 1;
  }
  return 0;
}

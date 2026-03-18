/*
 * XREFs of CcFetchDataForRead @ 0x140053320
 * Callers:
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x14049D020 (CcMapAndCopyFromCache.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140083854 (MmWaitForCacheManagerPrefetch.c)
 *     MmPrefetchForCacheManager @ 0x140477744 (MmPrefetchForCacheManager.c)
 *     MmHardFaultBytesRequired @ 0x14049CF40 (MmHardFaultBytesRequired.c)
 */

char __fastcall CcFetchDataForRead(__int64 a1, _QWORD *a2, unsigned int a3, char a4, _DWORD *a5, _QWORD *P, int a7)
{
  int v7; // r14d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
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
    MmCheckCachedPageStates(v10, v13, 0, 0LL);
    return 1;
  }
  return 0;
}

/*
 * XREFs of PfSnPreallocatePrefetchHeader @ 0x1404B6F94
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnPreallocatePrefetchHeader(__int64 *a1)
{
  SIZE_T v2; // r14
  char *PoolWithTag; // rax
  char *v4; // rbp
  unsigned int i; // esi
  _QWORD *v6; // rbx
  __int64 v7; // r9
  char *v8; // rdx
  int v9; // ebx
  PVOID v10; // rax
  PVOID v11; // rax
  PVOID v12; // rax

  v2 = (unsigned int)(68 * *(_DWORD *)(*a1 + 88));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v2, 0x68506343u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  a1[7] = (__int64)PoolWithTag;
  for ( i = 0; i < *(_DWORD *)(*a1 + 88); v6[3] |= 0x200000000uLL )
  {
    v6 = (_QWORD *)(a1[7] + 56LL * i);
    memset(v6, 0, 0x20uLL);
    ++i;
  }
  v7 = *a1;
  v8 = &v4[56 * *(unsigned int *)(*a1 + 88)];
  a1[8] = (__int64)v8;
  a1[9] = (__int64)&v8[8 * *(unsigned int *)(v7 + 88)];
  memset(v4, 0, v2);
  v9 = *(_DWORD *)(*a1 + 88) + *(_DWORD *)(*a1 + 120);
  v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(24 * v9), 0x68506343u);
  a1[14] = (__int64)v10;
  if ( !v10 )
    return 3221225626LL;
  memset(v10, 0, (unsigned int)(24 * v9));
  *((_DWORD *)a1 + 31) = v9;
  v11 = ExAllocatePoolWithTag(PagedPool, 0x1810uLL, 0x4D506343u);
  a1[10] = (__int64)v11;
  if ( !v11 )
    return 3221225626LL;
  v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x57506343u);
  a1[11] = (__int64)v12;
  return v12 != 0LL ? 0 : 0xC000009A;
}

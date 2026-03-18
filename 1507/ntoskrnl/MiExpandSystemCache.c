/*
 * XREFs of MiExpandSystemCache @ 0x14006B790
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140067684 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     InsertTailListPte @ 0x14006BAEC (InsertTailListPte.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MI_SET_SYSTEM_CACHE_REVERSE_MAP @ 0x14021781C (MI_SET_SYSTEM_CACHE_REVERSE_MAP.c)
 *     MI_ZERO_SYSTEM_CACHE_VIEW_COUNT @ 0x1402178AC (MI_ZERO_SYSTEM_CACHE_VIEW_COUNT.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 MiExpandSystemCache()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rsi
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx

  if ( (unsigned __int64)qword_14034EC48 <= 0x4000000 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6353694Du);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v2 = 8LL;
  v3 = PoolWithTag + 2;
  v4 = 8LL;
  do
  {
    *v3 = 0LL;
    v3 += 5;
    --v4;
  }
  while ( v4 );
  v5 = MiObtainSystemVa(1u, 8);
  v6 = v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v7, v7 + 4088, 0, 8) )
  {
    ExFreePoolWithTag(v1, 0);
    MiReturnSystemVa(v6, v6 + 4096, 8LL, 0LL);
    return 0LL;
  }
  MI_ZERO_SYSTEM_CACHE_VIEW_COUNT((__int64)(v7 << 25) >> 16);
  MI_SET_SYSTEM_CACHE_REVERSE_MAP(v6, v1);
  do
  {
    InsertTailListPte(&qword_14034EE90, v7);
    v7 += 512LL;
    --v2;
  }
  while ( v2 );
  return v7;
}

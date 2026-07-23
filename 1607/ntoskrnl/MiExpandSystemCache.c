/*
 * XREFs of MiExpandSystemCache @ 0x1400A1428
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 * Callees:
 *     InsertTailListPte @ 0x140017A50 (InsertTailListPte.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiSetSystemCacheReverseMap @ 0x1401E6C94 (MiSetSystemCacheReverseMap.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 MiExpandSystemCache()
{
  _QWORD *PoolWithTag; // rax
  void *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)qword_140326B08 <= 0x4000000 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6353694Du);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v3 = 8LL;
  v4 = PoolWithTag + 2;
  v5 = 8LL;
  do
  {
    *v4 = 0LL;
    v4 += 5;
    --v5;
  }
  while ( v5 );
  v6 = MiObtainSystemVa(1LL, 8LL);
  v7 = v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(v2, 0);
    return 0LL;
  }
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v8, v8 + 4088, 0LL, 8LL) )
  {
    ExFreePoolWithTag(v2, 0);
    MiReturnSystemVa(v7, v7 + 4096, 8LL, 0LL);
    return 0LL;
  }
  v9 = MI_READ_PTE_LOCK_FREE((((v8 << 25 >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
  *(_BYTE *)(MI_GET_PFN_FROM_PTE(&v9) + 39) = 0;
  MiSetSystemCacheReverseMap(v7, v2);
  do
  {
    InsertTailListPte(&qword_140326D80);
    v8 += 512LL;
    --v3;
  }
  while ( v3 );
  return v8;
}

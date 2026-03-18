/*
 * XREFs of InitializePool @ 0x1407C9DC4
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     ExInitializePoolDescriptor @ 0x140579E5C (ExInitializePoolDescriptor.c)
 *     ExpSeedHotTags @ 0x1407CA028 (ExpSeedHotTags.c)
 *     InitializePagedPool @ 0x1407CA2BC (InitializePagedPool.c)
 */

__int64 __fastcall InitializePool(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  void *PoolPages; // rax
  void *v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 IndependentPages; // rsi

  if ( a1 )
  {
    InitializePagedPool();
    return 1LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v6 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v7 = (v6 | (unsigned int)ExGenRandom(0)) ^ v5;
  ExpNumberOfNonPagedPools = 1;
  if ( !v7 )
    v7 = 1LL;
  ExpPoolFlags |= a2;
  _BitScanReverse((unsigned int *)&v8, KeLargestCacheLine);
  ExpPoolQuotaCookie = v7;
  ExpCacheLineSize = 1 << v8;
  if ( (unsigned int)(1 << v8) >= 0x10 )
  {
    if ( (unsigned int)(1 << v8) > 0x1000 )
      ExpCacheLineSize = 4096;
  }
  else
  {
    ExpCacheLineSize = 16;
  }
  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v10, PoolTrackTableSize);
      v9 = 1LL << v10;
    }
    else
    {
      v9 = 64LL;
    }
  }
  else
  {
    v9 = 2048LL;
  }
  while ( 1 )
  {
    PoolTrackTableSize = v9;
    if ( v9 + 1 > 0x666666666666666LL )
      goto LABEL_17;
    PoolPages = (void *)MiAllocatePoolPages(0x200u, (40 * v9 + 4135) & 0xFFFFFFFFFFFFF000uLL);
    PoolTrackTable = (__int64)PoolPages;
    v12 = PoolPages;
    if ( PoolPages )
      break;
    v9 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_17:
    v9 >>= 1;
  }
  ExPoolTagTables = PoolPages;
  v13 = PoolTrackTableSize++ - 1;
  PoolTrackTableMask = v13;
  memset(v12, 0, 40 * PoolTrackTableSize);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_26;
  v15 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfNonPagedPools = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    v15 = 127;
    ExpNumberOfNonPagedPools = 127;
  }
  if ( v15 > 0x40 )
  {
    v15 = 64;
    ExpNumberOfNonPagedPools = 64;
  }
  v16 = 0LL;
  if ( !v15 )
  {
LABEL_26:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_1403690C0, 0, 0);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPages(0x2280uLL, v16, v14);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v16] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v16);
    ExInitializePoolDescriptor(IndependentPages + 4416, 0, v16);
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= ExpNumberOfNonPagedPools )
      goto LABEL_26;
  }
}

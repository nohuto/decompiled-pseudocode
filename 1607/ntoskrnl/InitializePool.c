/*
 * XREFs of InitializePool @ 0x1407B4330
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmGetNumberOfPhysicalPages @ 0x140413488 (MmGetNumberOfPhysicalPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     ExInitializePoolDescriptor @ 0x140536744 (ExInitializePoolDescriptor.c)
 *     ExpSeedHotTags @ 0x1407B4510 (ExpSeedHotTags.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 */

__int64 __fastcall InitializePool(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // rdx
  void *PoolPages; // rax
  void *v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 IndependentPages; // rsi

  if ( a1 != 512 )
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
  if ( (unsigned int)(1 << v8) < 0x10 )
  {
    ExpCacheLineSize = 16;
  }
  else if ( (unsigned int)(1 << v8) > 0x1000 )
  {
    ExpCacheLineSize = 4096;
  }
  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v14, PoolTrackTableSize);
      v9 = 1LL << v14;
    }
    else
    {
      v9 = 64LL;
    }
    goto LABEL_20;
  }
  PoolTrackTableSize = 2048LL;
  if ( (unsigned __int64)MmGetNumberOfPhysicalPages() <= 0x10000 )
  {
    v9 = 512LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( v9 + 1 > 0x666666666666666LL )
      goto LABEL_19;
    PoolPages = (void *)MiAllocatePoolPages(512LL, (40 * v9 + 4135) & 0xFFFFFFFFFFFFF000uLL);
    PoolTrackTable = (__int64)PoolPages;
    v11 = PoolPages;
    if ( PoolPages )
      break;
    v9 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_19:
    v9 >>= 1;
LABEL_20:
    PoolTrackTableSize = v9;
  }
  ExPoolTagTables = PoolPages;
  v12 = PoolTrackTableSize++ - 1;
  PoolTrackTableMask = v12;
  memset(v11, 0, 40 * PoolTrackTableSize);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_13;
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
LABEL_13:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_14033CA40, 0, 0);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPages(0x2280uLL, v16, v13);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v16] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v16);
    ExInitializePoolDescriptor(IndependentPages + 4416, 0, v16);
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= ExpNumberOfNonPagedPools )
      goto LABEL_13;
  }
}

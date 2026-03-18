/*
 * XREFs of InitializePool @ 0x1407496B4
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     ExInitializePoolDescriptor @ 0x1404FF558 (ExInitializePoolDescriptor.c)
 *     ExpSeedHotTags @ 0x1407498E4 (ExpSeedHotTags.c)
 *     InitializePagedPool @ 0x140749B74 (InitializePagedPool.c)
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
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 IndependentPages; // rsi
  unsigned __int64 v17; // rcx

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
      _BitScanReverse64(&v17, PoolTrackTableSize);
      v9 = 1LL << v17;
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
      goto LABEL_27;
    PoolPages = (void *)MiAllocatePoolPages(0x200u, (40 * v9 + 4135) & 0xFFFFFFFFFFFFF000uLL);
    PoolTrackTable = (__int64)PoolPages;
    v11 = PoolPages;
    if ( PoolPages )
      break;
    v9 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_27:
    v9 >>= 1;
  }
  ExPoolTagTables = PoolPages;
  v12 = PoolTrackTableSize++ - 1;
  PoolTrackTableMask = v12;
  memset(v11, 0, 40 * PoolTrackTableSize);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_20;
  v14 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfNonPagedPools = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    v14 = 127;
    ExpNumberOfNonPagedPools = 127;
  }
  if ( v14 > 0x40 )
  {
    v14 = 64;
    ExpNumberOfNonPagedPools = 64;
  }
  v15 = 0LL;
  if ( !v14 )
  {
LABEL_20:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_140318D80, 0, 0);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPages(0x2280uLL, v15, v13);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v15] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v15);
    ExInitializePoolDescriptor(IndependentPages + 4416, 0, v15);
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= ExpNumberOfNonPagedPools )
      goto LABEL_20;
  }
}

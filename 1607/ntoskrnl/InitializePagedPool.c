/*
 * XREFs of InitializePagedPool @ 0x1407B47A0
 * Callers:
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmGetNumberOfPhysicalPages @ 0x140413488 (MmGetNumberOfPhysicalPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     ExInitializePoolDescriptor @ 0x140536744 (ExInitializePoolDescriptor.c)
 *     MmIsVerifierEnabled @ 0x1406FE214 (MmIsVerifierEnabled.c)
 */

int __fastcall InitializePagedPool(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int16 v3; // cx
  unsigned int v4; // eax
  SIZE_T v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rbp
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // edx
  __int64 IndependentPages; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdi
  int v20; // r14d
  int v21; // r15d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG VerifierFlags; // [rsp+80h] [rbp+8h] BYREF

  v3 = KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v4 = (unsigned __int16)KeNumberNodes;
    ExpNumberOfPagedPools = (unsigned __int16)KeNumberNodes;
    if ( (unsigned __int16)KeNumberNodes <= 0x7Fu )
      goto LABEL_4;
    v4 = 127;
LABEL_31:
    ExpNumberOfPagedPools = v4;
    goto LABEL_4;
  }
  if ( (unsigned __int64)MmGetNumberOfPhysicalPages() <= 0x10000 )
  {
    v4 = 1;
    goto LABEL_31;
  }
  v4 = ExpNumberOfPagedPools;
LABEL_4:
  if ( v4 > 0x40 )
  {
    v4 = 64;
    ExpNumberOfPagedPools = 64;
  }
  if ( (unsigned __int16)v3 > 1u )
  {
    v14 = 0LL;
    do
    {
      if ( (_DWORD)v14 )
        v15 = v14 - 1;
      else
        v15 = 0;
      IndependentPages = MmAllocateIndependentPages(0x1140uLL, v15, a3);
      if ( !IndependentPages )
        KeBugCheckEx(0x41u, 0x1140uLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
      ExpPagedPoolDescriptor[v14] = IndependentPages;
      if ( !(_DWORD)v14 )
        qword_1403AA520 = IndependentPages;
      ExInitializePoolDescriptor(IndependentPages, 1, v14);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < ExpNumberOfPagedPools + 1 );
  }
  else
  {
    v5 = 4416LL * (v4 + 1);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6C6F6F50u);
    v7 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheckEx(0x41u, v5, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    qword_1403AA520 = (__int64)PoolWithTag;
    v8 = 0LL;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        ExpPagedPoolDescriptor[v8] = v7;
        ExInitializePoolDescriptor(v7, 1, v8);
        v7 += 4416LL;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < ExpNumberOfPagedPools + 1 );
    }
  }
  v9 = (40 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v17 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (40 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v17) = KeGetPcr()->Prcb.Number;
  v18 = PoolTrackTableSize;
  v19 = (__int64)*(&ExPoolTagTables + v17);
  v20 = PoolTrackTableMask;
  v11 = PoolTrackTableMask & 0x40DEDA5;
  v21 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v19 + 40 * v11);
    if ( v10 == 1819242320 )
      break;
    if ( v10 )
    {
LABEL_14:
      v11 = v20 & (unsigned int)(v11 + 1);
      if ( (_DWORD)v11 == v21 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v9, 0x200u);
        goto LABEL_16;
      }
    }
    else
    {
      v13 = *(_DWORD *)(PoolTrackTable + 40 * v11);
      if ( v13 )
      {
        *(_DWORD *)(v19 + 40 * v11) = v13;
      }
      else
      {
        if ( (unsigned int)v11 == v18 - 1 )
          goto LABEL_14;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40 * v11) )
        {
          *(_DWORD *)(PoolTrackTable + 40 * v11) = 1819242320;
          *(_DWORD *)(v19 + 40 * v11) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v19 + 40 * v11 + 4), 1u);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 40 * v11 + 16), v9);
LABEL_16:
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages();
  if ( NumberOfPhysicalPages >= 0x1FC00 && !MmSpecialPoolTag )
  {
    LODWORD(NumberOfPhysicalPages) = MmIsVerifierEnabled(&VerifierFlags);
    if ( (NumberOfPhysicalPages & 0x80000000) != 0LL )
      _InterlockedOr(&ExpPoolFlags, 0x100u);
  }
  return NumberOfPhysicalPages;
}

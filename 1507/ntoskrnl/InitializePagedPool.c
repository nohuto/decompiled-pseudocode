/*
 * XREFs of InitializePagedPool @ 0x1407CA2BC
 * Callers:
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1407C9DC4 (InitializePool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     ExInitializePoolDescriptor @ 0x140579E5C (ExInitializePoolDescriptor.c)
 *     MmIsVerifierEnabled @ 0x1407324BC (MmIsVerifierEnabled.c)
 */

NTSTATUS __fastcall InitializePagedPool(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // eax
  SIZE_T v4; // rsi
  PVOID PoolWithTag; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbp
  unsigned int v9; // edi
  int v10; // edx
  __int64 IndependentPages; // rax
  int v12; // eax
  __int64 v13; // r14
  NTSTATUS result; // eax
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // r15d
  __int64 v18; // r13
  __int64 v19; // rsi
  int v20; // r12d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  ULONG VerifierFlags; // [rsp+80h] [rbp+8h] BYREF

  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v3 = ExpNumberOfPagedPools;
  }
  else
  {
    v3 = (unsigned __int16)KeNumberNodes;
    ExpNumberOfPagedPools = (unsigned __int16)KeNumberNodes;
    if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
    {
      v3 = 127;
      ExpNumberOfPagedPools = 127;
    }
  }
  if ( v3 > 0x40 )
  {
    v3 = 64;
    ExpNumberOfPagedPools = 64;
  }
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v9 = 0;
    do
    {
      v10 = 0;
      if ( v9 )
        v10 = v9 - 1;
      IndependentPages = MmAllocateIndependentPages(0x1140uLL, v10, a3);
      if ( !IndependentPages )
        KeBugCheckEx(0x41u, 0x1140uLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
      ExpPagedPoolDescriptor[v9] = IndependentPages;
      if ( !v9 )
        qword_1403D14F0 = IndependentPages;
      ExInitializePoolDescriptor(IndependentPages, 1, v9++);
    }
    while ( v9 < ExpNumberOfPagedPools + 1 );
  }
  else
  {
    v4 = 4416LL * (v3 + 1);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x6C6F6F50u);
    v6 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheckEx(0x41u, v4, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    qword_1403D14F0 = (__int64)PoolWithTag;
    v7 = 0;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        ExpPagedPoolDescriptor[v7] = v6;
        ExInitializePoolDescriptor(v6, 1, v7);
        v6 += 4416LL;
        ++v7;
      }
      while ( v7 < ExpNumberOfPagedPools + 1 );
    }
  }
  v8 = (40 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v16 = EtwTracePool(
            0xE20u,
            512,
            0x6C6F6F50u,
            PoolTrackTable,
            (40 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v16) = KeGetPcr()->Prcb.Number;
  v17 = PoolTrackTableMask;
  v18 = PoolTrackTableSize;
  v13 = PoolTrackTableMask & 0x40DEDA5;
  v19 = (__int64)*(&ExPoolTagTables + v16);
  v20 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v19 + 40 * v13);
    if ( v12 == 1819242320 )
      break;
    if ( v12 )
    {
LABEL_23:
      v13 = v17 & (unsigned int)(v13 + 1);
      if ( (_DWORD)v13 == v20 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v8, 0x200u);
        goto LABEL_26;
      }
    }
    else
    {
      v15 = *(_DWORD *)(PoolTrackTable + 40 * v13);
      if ( v15 )
      {
        *(_DWORD *)(v19 + 40 * v13) = v15;
      }
      else
      {
        if ( (unsigned int)v13 == v18 - 1 )
          goto LABEL_23;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40 * v13) )
        {
          *(_DWORD *)(PoolTrackTable + 40 * v13) = 1819242320;
          *(_DWORD *)(v19 + 40 * v13) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 40 * v13 + 4));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 40 * v13 + 16), v8);
LABEL_26:
  _InterlockedOr(&ExpPoolFlags, 0x100u);
  ExpBootFinishedTimer = 8LL;
  qword_140326E30 = (__int64)&qword_140326E28;
  qword_140326E28 = (__int64)&qword_140326E28;
  qword_140326DF8 = (__int64)ExpBootFinishedDispatch;
  qword_140326E38 = 0LL;
  qword_140326E58 = 0LL;
  ExpBootFinishedTimerDpc = 275;
  qword_140326E00 = 0LL;
  qword_140326E18 = 0LL;
  qword_140326DF0 = 0LL;
  KiSetTimerEx((__int64)&ExpBootFinishedTimer, -1200000000LL, 0, 0, (__int64)&ExpBootFinishedTimerDpc);
  result = qword_14034F0E8;
  if ( *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5328LL) >= 0x1FC00uLL && !MmSpecialPoolTag )
  {
    result = MmIsVerifierEnabled(&VerifierFlags);
    if ( result < 0 )
      _InterlockedOr(&ExpPoolFlags, 0x200u);
  }
  return result;
}

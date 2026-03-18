/*
 * XREFs of MiFreeCombineBlock @ 0x14022A730
 * Callers:
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnCrossPartitionCharges @ 0x14021D8F0 (MiReturnCrossPartitionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  volatile signed __int32 *v7; // r14
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v9; // eax
  _QWORD *v11; // rax
  unsigned int i; // ecx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v1 = 0;
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v5 = *(_QWORD *)(a1 + 24) & 0xFLL;
    v6 = (unsigned int)v5;
    v7 = (volatile signed __int32 *)(v4 + 16 * v5 + 104);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7);
    }
    else
    {
      if ( _interlockedbittestandset(v7, 0x1Fu) )
        v1 = ExpWaitForSpinLockExclusiveAndAcquire(v7);
      while ( 1 )
      {
        v9 = *v7;
        if ( (*v7 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v7, v9 | 0x40000000, v9);
        if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v1);
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(v4 + 16 * (v6 + 6)), a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    else
      *v7 = 0;
    __writecr8(CurrentIrql);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 88), &LockHandle);
  if ( (*(_DWORD *)(v3 + 8))-- == 1 )
  {
    v11 = (_QWORD *)(v3 + 56);
    for ( i = 0; i < 0x48; ++i )
    {
      if ( v11 != (_QWORD *)a1 )
      {
        v13 = *v11;
        v14 = (_QWORD *)v11[1];
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v14 != v11 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
      }
      v11 += 7;
    }
    *(_QWORD *)v3 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = v3;
    if ( !*(_QWORD *)v3 )
    {
      *(_QWORD *)(v4 + 56) = v4;
      *(_QWORD *)(v4 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v4 + 32) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v15 = *(_QWORD *)(v4 + 72);
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 8) = v4 + 72;
    if ( *(_QWORD *)(v15 + 8) != v4 + 72 )
      __fastfail(3u);
    *(_QWORD *)(v15 + 8) = a1;
    *(_QWORD *)(v4 + 72) = a1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_UNKNOWN *)v4 == &unk_14034EF18 )
  {
    if ( *(__int16 **)v4 == MiSystemPartition )
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_14034F950, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v4 + 5568LL), 1uLL);
    }
    MiReturnCommit(*(_QWORD *)v4, 1LL);
    MiReturnCrossPartitionCharges(qword_14034E8E0, 1LL);
  }
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 380), 0xFFFFFFFF);
}

/*
 * XREFs of MiFreeCombineBlock @ 0x1401F9C24
 * Callers:
 *     MiDecrementCombinedPte @ 0x1401F972C (MiDecrementCombinedPte.c)
 *     MiDemoteCombinedPte @ 0x1401F97B0 (MiDemoteCombinedPte.c)
 *     MiProcessCrcList @ 0x140663DC8 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x140028500 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MiReturnCrossPartitionCharges @ 0x1401F1F3C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r15
  __int64 v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rbx
  KIRQL v8; // di
  _QWORD *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v1 )
  {
    v5 = v1 & 0xF;
    v6 = 16LL * v5;
    v7 = v5;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + v4 + 104));
    RtlAvlRemoveNode((unsigned __int64 *)(v4 + 16 * (v7 + 6)), a1);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + v4 + 104), v8);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 88), &LockHandle);
  if ( (*(_DWORD *)(v2 + 8))-- == 1 )
  {
    v10 = (_QWORD *)(v2 + 56);
    for ( i = 0; i < 0x48; ++i )
    {
      if ( v10 != (_QWORD *)a1 )
      {
        v12 = *v10;
        v13 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v13 != v10 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
      }
      v10 += 7;
    }
    *(_QWORD *)v2 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = v2;
    if ( !*(_QWORD *)v2 )
    {
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_QWORD *)(v4 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v4 + 56) = v4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v14 = (__int64 *)(v4 + 72);
    v15 = *(_QWORD *)(v4 + 72);
    if ( *(_QWORD *)(v15 + 8) != v4 + 72 )
      __fastfail(3u);
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(v15 + 8) = a1;
    *v14 = a1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_UNKNOWN *)v4 == &unk_140326E18 )
  {
    if ( *(int **)v4 == MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v4 + 6528LL), 1uLL);
    MiReturnCommit(*(_QWORD *)v4, 1uLL);
    MiReturnCrossPartitionCharges(qword_1403266E0, 1LL);
  }
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 380), 0xFFFFFFFF);
}

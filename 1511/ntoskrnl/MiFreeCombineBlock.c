/*
 * XREFs of MiFreeCombineBlock @ 0x14012B6C8
 * Callers:
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     MiReturnCrossPartitionCharges @ 0x1401D98AC (MiReturnCrossPartitionCharges.c)
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
  __int64 v10; // rcx
  _QWORD *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // r8
  _QWORD *v15; // rdx
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
    v12 = (_QWORD *)(v2 + 56);
    for ( i = 0; i < 0x48; ++i )
    {
      if ( v12 != (_QWORD *)a1 )
      {
        v14 = *v12;
        v15 = (_QWORD *)v12[1];
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v15 != v12 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
      }
      v12 += 7;
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
    v10 = *(_QWORD *)(v4 + 72);
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v4 + 72;
    if ( *(_QWORD *)(v10 + 8) != v4 + 72 )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = a1;
    *(_QWORD *)(v4 + 72) = a1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_UNKNOWN *)v4 == &unk_1402FEA58 )
  {
    if ( *(int **)v4 == MiSystemPartition )
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_1402FF4D0, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v4 + 5952LL), 1uLL);
    }
    MiReturnCommit(*(_QWORD *)v4, 1uLL);
    MiReturnCrossPartitionCharges(&unk_1402FE418, 1LL);
  }
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 380), 0xFFFFFFFF);
}

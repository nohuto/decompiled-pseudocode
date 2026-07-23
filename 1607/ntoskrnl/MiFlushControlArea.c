/*
 * XREFs of MiFlushControlArea @ 0x1401DE8C4
 * Callers:
 *     MiDeleteCachedSegment @ 0x1401DE304 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MiDecrementModifiedWriteCount @ 0x14008E7E4 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x14008E84C (MmIsWriteErrorFatal.c)
 *     MiDeleteControlArea @ 0x1400A34C8 (MiDeleteControlArea.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     MiAllowControlAreaDelete @ 0x1401DE25C (MiAllowControlAreaDelete.c)
 *     MiRemoveWakeListEntry @ 0x1401DF188 (MiRemoveWakeListEntry.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiFlushControlArea(__int64 a1, __int64 a2, __int64 **a3, struct _FILE_OBJECT **a4)
{
  int v4; // r12d
  KIRQL v7; // bl
  struct _FILE_OBJECT *v8; // rsi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  BOOL v10; // r14d
  __int64 v11; // rax
  KIRQL v12; // r9
  NTSTATUS v13; // r14d
  KIRQL v14; // al
  __int64 inserted; // r15
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 result; // rax
  KIRQL v20; // r9
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int16 v24; // [rsp+68h] [rbp-18h]
  char v25; // [rsp+6Ah] [rbp-16h]
  int v26; // [rsp+6Ch] [rbp-14h]
  _QWORD v27[2]; // [rsp+70h] [rbp-10h] BYREF
  KIRQL OldIrql; // [rsp+C0h] [rbp+40h]
  BOOL v29; // [rsp+D0h] [rbp+50h]

  *(_DWORD *)(a1 + 56) |= 0x100u;
  v4 = 0;
  v27[1] = v27;
  *a4 = 0LL;
  *a3 = 0LL;
  v27[0] = v27;
  v7 = a2;
  v23 = 4LL;
  v22 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = &v22;
  v24 = 263;
  v25 = 6;
  v26 = 0;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 112), 1uLL);
  *(_QWORD *)(MiGetControlAreaPartition(a1, a2, (__int64)a3, (__int64)a4) + 1528) = a1;
  v8 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v7);
  PoolWithTag = 0LL;
  v10 = (int)FsRtlAcquireFileForCcFlushEx(v8) >= 0;
  v29 = v10;
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v11 = MiAllowControlAreaDelete(a1);
  if ( !v10 || (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 56) &= ~0x100u;
    HIDWORD(v23) = 1;
    if ( !v11 )
    {
      MiRemoveWakeListEntry(a1, &v22);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v20);
      if ( v10 )
        FsRtlReleaseFileForCcFlush(v8);
      MiDeleteControlArea(a1);
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      return 0LL;
    }
    v13 = 0;
  }
  else
  {
    ++*(_DWORD *)(a1 + 76);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v12);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
    v13 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 2, &v21);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    if ( v13 < 0 )
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
    v4 = (LOBYTE(v8->DeviceObject->Characteristics) >> 4) & 1;
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~0x100u;
    OldIrql = v14;
    *a3 = MiDecrementModifiedWriteCount(a1, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry(a1, &v22);
  v18 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(a1 + 40) | *(_DWORD *)(a1 + 56) & 1LL;
  if ( !v18 )
  {
    if ( HIDWORD(v23) && *(_QWORD *)(a1 + 32) )
      goto LABEL_11;
    if ( v13 < 0 && *(_QWORD *)(a1 + 32) )
    {
      if ( v13 == -1073740749 || !(unsigned int)MmIsWriteErrorFatal(1, v4, v13) )
      {
LABEL_11:
        inserted = MiInsertUnusedSegment(a1, v18, v16, v17);
        goto LABEL_12;
      }
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        LODWORD(PoolWithTag[1].List.Blink) = v13;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    result = 1LL;
    *a4 = v8;
    return result;
  }
LABEL_12:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), OldIrql);
  if ( v29 )
    FsRtlReleaseFileForCcFlush(v8);
  ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}

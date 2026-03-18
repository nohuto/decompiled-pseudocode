/*
 * XREFs of MiFlushControlArea @ 0x1401D0FFC
 * Callers:
 *     MiDeleteCachedSegment @ 0x1401D0A74 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x14000BB08 (MiDeleteControlArea.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     MmIsWriteErrorFatal @ 0x140030710 (MmIsWriteErrorFatal.c)
 *     MiDecrementModifiedWriteCount @ 0x140038E48 (MiDecrementModifiedWriteCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     MiRemoveWakeListEntry @ 0x1401D1884 (MiRemoveWakeListEntry.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiFlushControlArea(__int64 a1, KIRQL a2, __int64 *a3, struct _FILE_OBJECT **a4)
{
  int v4; // r12d
  struct _FILE_OBJECT *v8; // rsi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  BOOL v10; // r14d
  KIRQL v11; // r9
  signed __int64 v12; // rcx
  NTSTATUS v13; // r14d
  KIRQL v14; // al
  __int64 inserted; // r15
  __int64 result; // rax
  KIRQL v17; // r9
  _QWORD *v18; // [rsp+40h] [rbp-40h]
  _DWORD v19[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int16 v22; // [rsp+68h] [rbp-18h]
  char v23; // [rsp+6Ah] [rbp-16h]
  int v24; // [rsp+6Ch] [rbp-14h]
  _QWORD v25[2]; // [rsp+70h] [rbp-10h] BYREF
  KIRQL OldIrql; // [rsp+C0h] [rbp+40h]
  BOOL v27; // [rsp+D0h] [rbp+50h]

  *(_DWORD *)(a1 + 56) |= 0x100u;
  v4 = 0;
  v25[1] = v25;
  *a4 = 0LL;
  *a3 = 0LL;
  v25[0] = v25;
  v21 = 4LL;
  v20 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = &v20;
  v22 = 263;
  v23 = 6;
  v24 = 0;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 104), 1uLL);
  v18 = (_QWORD *)(a1 + 64);
  v8 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), a2);
  PoolWithTag = 0LL;
  v10 = (int)FsRtlAcquireFileForCcFlushEx(v8) >= 0;
  v27 = v10;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  OldIrql = v11;
  v12 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 104));
  if ( !v10 || (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 56) &= ~0x100u;
    HIDWORD(v21) = 1;
    if ( !v12 )
    {
      MiRemoveWakeListEntry(a1, &v20);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v17);
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
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v11);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
    v13 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 120), 0LL, 0LL, 2, v19);
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
  MiRemoveWakeListEntry(a1, &v20);
  if ( !(*(_QWORD *)(a1 + 24) | *(_QWORD *)(a1 + 40) | *(_DWORD *)(a1 + 56) & 1LL) )
  {
    if ( HIDWORD(v21) && *(_QWORD *)(a1 + 32) )
      goto LABEL_11;
    if ( v13 < 0 && *(_QWORD *)(a1 + 32) )
    {
      if ( v13 == -1073740749 || !(unsigned int)MmIsWriteErrorFatal(1, v4, v13) )
      {
LABEL_11:
        inserted = MiInsertUnusedSegment(a1);
        goto LABEL_12;
      }
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked(v18);
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
  if ( v27 )
    FsRtlReleaseFileForCcFlush(v8);
  ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}

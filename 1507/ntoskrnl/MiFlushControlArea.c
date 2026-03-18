/*
 * XREFs of MiFlushControlArea @ 0x140211468
 * Callers:
 *     MiDeleteCachedSegment @ 0x140210914 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1402119C8 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MmIsWriteErrorFatal @ 0x1400823F0 (MmIsWriteErrorFatal.c)
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     MiDecrementModifiedWriteCount @ 0x14008563C (MiDecrementModifiedWriteCount.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiRemoveWakeListEntry @ 0x14021228C (MiRemoveWakeListEntry.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiFlushControlArea(__int64 a1, unsigned __int8 a2, __int64 *a3)
{
  int v3; // r12d
  volatile signed __int32 *v6; // rdi
  struct _FILE_OBJECT *v7; // r13
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rsi
  BOOL v9; // r15d
  unsigned __int8 CurrentIrql; // r14
  unsigned int v11; // r14d
  signed __int32 v12; // edx
  signed __int64 v13; // rcx
  NTSTATUS v14; // r15d
  unsigned int v15; // r14d
  signed __int32 v16; // edx
  __int64 inserted; // r14
  _QWORD *v19; // [rsp+40h] [rbp-29h]
  _DWORD v20[4]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  __int16 v23; // [rsp+68h] [rbp-1h]
  char v24; // [rsp+6Ah] [rbp+1h]
  int v25; // [rsp+6Ch] [rbp+3h]
  _QWORD v26[10]; // [rsp+70h] [rbp+7h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v28; // [rsp+D0h] [rbp+67h]
  BOOL v29; // [rsp+D8h] [rbp+6Fh]
  unsigned __int8 v31; // [rsp+E8h] [rbp+7Fh]

  *(_DWORD *)(a1 + 56) |= 0x100u;
  v26[1] = v26;
  v3 = 0;
  *a3 = 0LL;
  v26[0] = v26;
  v21 = *(_QWORD *)(a1 + 80);
  v22 = 4LL;
  *(_QWORD *)(a1 + 80) = &v21;
  v23 = 263;
  v24 = 6;
  v25 = 0;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 104), 1uLL);
  v19 = (_QWORD *)(a1 + 64);
  v6 = (volatile signed __int32 *)(a1 + 72);
  v7 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *v6 = 0;
  __writecr8(a2);
  PoolWithTag = 0LL;
  v9 = (int)FsRtlAcquireFileForCcFlushEx(v7) >= 0;
  v29 = v9;
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
    while ( 1 )
    {
      v12 = *v6;
      if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v12 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, v12 | 0x40000000, v12);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    CurrentIrql = v28;
  }
  v13 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 104));
  if ( !v9 || (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 56) &= ~0x100u;
    HIDWORD(v22) = 1;
    if ( !v13 )
    {
      MiRemoveWakeListEntry(a1, &v21);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
      else
        *v6 = 0;
      __writecr8(CurrentIrql);
      if ( v9 )
        FsRtlReleaseFileForCcFlush(v7);
      MiDeleteControlArea(a1);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      return 0LL;
    }
    v14 = 0;
  }
  else
  {
    ++*(_DWORD *)(a1 + 76);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *v6 = 0;
    __writecr8(CurrentIrql);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
    v14 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 120), 0LL, 0LL, 2, v20);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    FsRtlReleaseFileForCcFlush(v7);
    v29 = 0;
    if ( v14 < 0 )
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
    v3 = (LOBYTE(v7->DeviceObject->Characteristics) >> 4) & 1;
    MI_DEREFERENCE_CONTROL_AREA_FILE(a1, (unsigned __int64)v7);
    v31 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
    }
    else
    {
      v15 = 0;
      if ( _interlockedbittestandset(v6, 0x1Fu) )
        v15 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
      while ( 1 )
      {
        v16 = *v6;
        if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v16 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v6, v16 | 0x40000000, v16);
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
    }
    *(_DWORD *)(a1 + 56) &= ~0x100u;
    v28 = v31;
    *a3 = MiDecrementModifiedWriteCount(a1, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry(a1, &v21);
  if ( !(*(_QWORD *)(a1 + 24) | *(_QWORD *)(a1 + 40) | *(_DWORD *)(a1 + 56) & 1) )
  {
    if ( HIDWORD(v22) && *(_QWORD *)(a1 + 32) )
      goto LABEL_40;
    if ( v14 < 0 && *(_QWORD *)(a1 + 32) )
    {
      if ( v14 == -1073740749 || !(unsigned int)MmIsWriteErrorFatal(1, v3, v14) )
      {
LABEL_40:
        inserted = MiInsertUnusedSegment(a1);
        goto LABEL_41;
      }
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked(v19);
        LODWORD(PoolWithTag[1].List.Blink) = v14;
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    return 1LL;
  }
LABEL_41:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *v6 = 0;
  __writecr8(v28);
  if ( v29 )
    FsRtlReleaseFileForCcFlush(v7);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}

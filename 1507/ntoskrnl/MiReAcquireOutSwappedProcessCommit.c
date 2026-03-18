/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x14020FF64
 * Callers:
 *     MmInSwapProcess @ 0x140110ACC (MmInSwapProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KeFreezeProcess @ 0x1400D24F8 (KeFreezeProcess.c)
 *     MiBeginProcessClean @ 0x1400DDC48 (MiBeginProcessClean.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14020F294 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(char *Object)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  struct _KTHREAD *v4; // r14
  volatile signed __int32 *v5; // rdi
  int v6; // ebx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // r8
  __int64 v9; // r9
  struct _WORK_QUEUE_ITEM *v10; // rbx
  unsigned int v11; // ebp
  unsigned __int8 v12; // si
  __int16 *v14; // rax
  void *v15; // rcx
  unsigned int v16; // ebx
  signed __int32 v17; // eax
  unsigned int v18; // ebx
  signed __int32 v19; // eax
  char v20; // [rsp+30h] [rbp-98h] BYREF
  __int64 v21; // [rsp+50h] [rbp-78h]
  _BYTE v22[48]; // [rsp+60h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, (ULONG_PTR)Object, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)Object, 1, (__int64)v22);
  v4 = KeGetCurrentThread();
  v5 = (volatile signed __int32 *)(Object + 1272);
  if ( (*((_DWORD *)Object + 193) & 8) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v14 = MiPartitionIdToPointer(*((_WORD *)Object + 726));
    if ( (unsigned int)MiChargeCommit((__int64)v14, *((_QWORD *)Object + 187), 1) )
    {
      MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)Object + 187), 0, 0);
      v15 = (void *)*((_QWORD *)Object + 189);
      *((_QWORD *)Object + 187) = 0LL;
      ExFreePoolWithTag(v15, 0);
      *((_QWORD *)Object + 189) = 0LL;
      v11 = 0;
      goto LABEL_8;
    }
  }
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)Object + 187), 1, v6);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(Object + 1272);
  }
  else
  {
    v16 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v16 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)Object + 318);
    while ( 1 )
    {
      v17 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v17 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v17 | 0x40000000, v17);
      if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v16);
    }
  }
  Object[1491] |= 0xC0u;
  MiUnlockWorkingSetExclusive((__int64)(Object + 1272), CurrentIrql);
  MiBeginProcessClean((__int64)v4, (__int64)Object, v8, v9);
  KeFreezeProcess((__int64)Object, 0);
  v10 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)Object + 189);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  memset(v10, 0, sizeof(struct _WORK_QUEUE_ITEM));
  v10->List.Flink = 0LL;
  v10->WorkerRoutine = (void (__fastcall *)(void *))MiReAcquireCommitFailWorker;
  v10->Parameter = Object;
  ExQueueWorkItem(v10, CriticalWorkQueue);
  v11 = -1073741523;
LABEL_8:
  v12 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
  }
  else
  {
    v18 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v18 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
    while ( 1 )
    {
      v19 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v19 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v19 | 0x40000000, v19);
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
    }
  }
  if ( (*((_BYTE *)v5 + 219) & 0xC0) == 0x80 )
    *((_BYTE *)v5 + 219) = *((_BYTE *)v5 + 219) & 0x3F | 0x40;
  MiUnlockWorkingSetExclusive((__int64)v5, v12);
  v21 = 0LL;
  KiUnstackDetachProcess((struct _KTHREAD *)&v20, 1);
  return v11;
}

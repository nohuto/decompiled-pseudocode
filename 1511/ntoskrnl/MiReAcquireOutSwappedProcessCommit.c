/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4
 * Callers:
 *     MmInSwapProcess @ 0x1400356E8 (MmInSwapProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiBeginProcessClean @ 0x14001BE64 (MiBeginProcessClean.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     KeFreezeProcess @ 0x140096ED4 (KeFreezeProcess.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401CF924 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(__int64 Object)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  struct _KTHREAD *v4; // rbp
  unsigned int v5; // ebx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _WORK_QUEUE_ITEM *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  int *v14; // rax
  void *v15; // rcx
  $D4FCF91253F76F57393CBFE908971F67 v16; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v17[48]; // [rsp+60h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, Object, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)Object, 1LL, (__int64)v17);
  v4 = KeGetCurrentThread();
  if ( (*(_DWORD *)(Object + 772) & 8) != 0 )
  {
    v5 = 1;
LABEL_5:
    MiLogOutswappedProcessCommitReacquire(Object, *(_QWORD *)(Object + 1504), 1, v5);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Object + 1280));
    *(_BYTE *)(Object + 1499) |= 0xC0u;
    LOBYTE(v7) = v6;
    MiUnlockWorkingSetExclusive(Object + 1280, v7, v8);
    MiBeginProcessClean((__int64)v4, Object);
    KeFreezeProcess(Object, 0);
    v9 = *(struct _WORK_QUEUE_ITEM **)(Object + 1520);
    ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
    memset(v9, 0, sizeof(struct _WORK_QUEUE_ITEM));
    v9->List.Flink = 0LL;
    v9->WorkerRoutine = (void (__fastcall *)(void *))MiReAcquireCommitFailWorker;
    v9->Parameter = (void *)Object;
    ExQueueWorkItem(v9, CriticalWorkQueue);
    v5 = -1073741523;
    goto LABEL_6;
  }
  v5 = 0;
  v14 = MiPartitionIdToPointer(*(_WORD *)(Object + 1460));
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v14, *(_QWORD *)(Object + 1504), 1uLL) )
    goto LABEL_5;
  MiLogOutswappedProcessCommitReacquire(Object, *(_QWORD *)(Object + 1504), 0, 0);
  v15 = *(void **)(Object + 1520);
  *(_QWORD *)(Object + 1504) = 0LL;
  ExFreePoolWithTag(v15, 0);
  *(_QWORD *)(Object + 1520) = 0LL;
LABEL_6:
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Object + 1280));
  LOBYTE(v12) = *(_BYTE *)(Object + 1499) & 0xC0;
  if ( (_BYTE)v12 == 0x80 )
    *(_BYTE *)(Object + 1499) = *(_BYTE *)(Object + 1499) & 0x3F | 0x40;
  LOBYTE(v11) = v10;
  MiUnlockWorkingSetExclusive(Object + 1280, v11, v12);
  v16.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v16, 1LL);
  return v5;
}

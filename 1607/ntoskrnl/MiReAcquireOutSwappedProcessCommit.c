/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x1401E0630
 * Callers:
 *     MmInSwapProcess @ 0x140091564 (MmInSwapProcess.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiBeginProcessClean @ 0x1400755E8 (MiBeginProcessClean.c)
 *     KeFreezeProcess @ 0x1400C8F3C (KeFreezeProcess.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1401DFA8C (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(__int64 Object)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v2; // edi
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v6; // r12
  LONG *v7; // rbp
  int v8; // ebx
  int v9; // r15d
  LONG *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  LONG *v13; // rbx
  __int64 v14; // rdx
  struct _WORK_QUEUE_ITEM *v15; // rbx
  struct _KEVENT *Blink; // rcx
  int *v17; // rax
  char v19; // [rsp+30h] [rbp-98h] BYREF
  __int64 v20; // [rsp+50h] [rbp-78h]
  _BYTE v21[48]; // [rsp+60h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, Object, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)Object, 1, (__int64)v21);
  SharedVm = MiGetSharedVm(Object + 1280);
  v6 = KeGetCurrentThread();
  v7 = SharedVm;
  if ( (*(_DWORD *)(Object + 772) & 8) != 0 )
  {
    v8 = 1;
    v9 = 0;
LABEL_5:
    MiLogOutswappedProcessCommitReacquire(Object, *((_QWORD *)v7 + 1), 1, v8);
    _InterlockedOr((volatile signed __int32 *)(Object + 1740), 0x40000u);
    v10 = MiGetSharedVm(Object + 1280);
    LOBYTE(v11) = ExAcquireSpinLockExclusive(v10);
    v10[1] = 0;
    *(_BYTE *)(Object + 1467) |= 0xC0u;
    MiUnlockWorkingSetExclusive(Object + 1280, v11);
    MiBeginProcessClean((__int64)v6, Object);
    KeFreezeProcess(Object);
    ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
    v12 = (_QWORD *)*((_QWORD *)v7 + 4);
    v12[2] = MiReAcquireCommitFailWorker;
    v12[3] = Object;
    *v12 = 0LL;
    goto LABEL_6;
  }
  v8 = 0;
  v17 = MiPartitionIdToPointer(*(_WORD *)(Object + 1444));
  v9 = MiChargeCommit((__int64)v17, *((_QWORD *)v7 + 1), 1);
  if ( !v9 )
    goto LABEL_5;
  MiLogOutswappedProcessCommitReacquire(Object, *((_QWORD *)v7 + 1), 0, 0);
LABEL_6:
  v13 = MiGetSharedVm(Object + 1280);
  LOBYTE(v14) = ExAcquireSpinLockExclusive(v13);
  v13[1] = 0;
  if ( (HIBYTE(*(_DWORD *)(Object + 1464)) & 0xC0) == 0x80 )
    *(_BYTE *)(Object + 1467) = HIBYTE(*(_DWORD *)(Object + 1464)) & 0x3F | 0x40;
  v15 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v7 + 4);
  if ( v9 )
  {
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
  }
  MiUnlockWorkingSetExclusive(Object + 1280, v14);
  v20 = 0LL;
  KiUnstackDetachProcess((struct _KTHREAD *)&v19, 1);
  Blink = (struct _KEVENT *)v15[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v9 )
  {
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
    ExQueueWorkItem(v15, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v2;
}

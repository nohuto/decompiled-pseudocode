/*
 * XREFs of MiAttachThreadDone @ 0x1400FB904
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiAttachThreadDone(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &SpinLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *(_QWORD *)&LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &SpinLock);
  }
  else
  {
    v3 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&LockHandle);
    if ( v3 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v3);
  }
  *(_BYTE *)(a1 + 217) = *(_BYTE *)(a1 + 217) & 0xF | (16 * ((*(_BYTE *)(a1 + 217) >> 4) - 1));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    KeSignalGate(v4, 1LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

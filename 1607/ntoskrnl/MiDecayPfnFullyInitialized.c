/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140096210
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x1400963B8 (MiRemoveDecayClusterTimer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

void __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  __int64 v3; // rsi
  unsigned __int16 v4; // ax
  int *v5; // rcx
  unsigned __int64 *v6; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v8; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  v4 = ((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF;
  if ( v4 == 1023 )
    v5 = MiSystemPartition;
  else
    v5 = *(int **)(qword_140327038 + 8LL * v4);
  v6 = (unsigned __int64 *)(v5 + 554);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
  {
    if ( MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(BugCheckParameter2 + 16) != v3 )
      goto LABEL_12;
    MiUnlinkPageFromList(BugCheckParameter2, 1);
    MiRemoveDecayClusterTimer(BugCheckParameter2);
  }
  v2 = 1;
LABEL_12:
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 == 1 )
    RtlpInterlockedPushEntrySList(&stru_1403273B0, (PSLIST_ENTRY)BugCheckParameter2);
}

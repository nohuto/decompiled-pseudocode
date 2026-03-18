/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140096A10
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x140096BB8 (MiRemoveDecayClusterTimer.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
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
    v5 = *(int **)(qword_140326FF8 + 8LL * v4);
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
    RtlpInterlockedPushEntrySList(&stru_140327370, (PSLIST_ENTRY)BugCheckParameter2);
}

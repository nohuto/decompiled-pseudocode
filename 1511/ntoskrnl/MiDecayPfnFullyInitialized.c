/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x1400B253C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRemoveDecayClusterTimer @ 0x1400DFEB0 (MiRemoveDecayClusterTimer.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  int *v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v3 + 261, &LockHandle);
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
  {
    if ( ((*(_QWORD *)(BugCheckParameter2 + 16) >> 12) & 0xFFFFFFFFFLL) != (__int64)(BugCheckParameter2 + 0x58000000000LL)
                                                                         / 48 )
      goto LABEL_3;
    MiUnlinkPageFromList(BugCheckParameter2, 1);
    MiRemoveDecayClusterTimer(BugCheckParameter2);
  }
  v2 = 1;
LABEL_3:
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 == 1 )
    RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)BugCheckParameter2);
}

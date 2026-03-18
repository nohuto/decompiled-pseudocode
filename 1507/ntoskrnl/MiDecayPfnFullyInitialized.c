/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x1400E10AC
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x140113D0C (MiRemoveDecayClusterTimer.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

void __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  __int16 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v3 + 245, &LockHandle);
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
  {
    if ( (((unsigned __int64)MiReverseSwizzleInvalidPte(*(_QWORD *)(BugCheckParameter2 + 16), v4, v5, v6) >> 12) & 0xFFFFFFFFFLL) != (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      goto LABEL_5;
    MiUnlinkPageFromList(BugCheckParameter2, 1LL);
    MiRemoveDecayClusterTimer(BugCheckParameter2);
  }
  v2 = 1;
LABEL_5:
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 == 1 )
    RtlpInterlockedPushEntrySList(&stru_14034F430, (PSLIST_ENTRY)BugCheckParameter2);
}

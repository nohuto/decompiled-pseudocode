/*
 * XREFs of MmAttachSession @ 0x1400FD5A0
 * Callers:
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiAttachToOwningSession @ 0x1400FD2E0 (MiAttachToOwningSession.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x14051C288 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x14051C2F8 (ExCallSessionCallBack.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x14051C77C (ExGetSessionPoolTagInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x1406A0A34 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1406BCB94 (PopLazySensorActiveInput.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406EDFF0 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140744C8C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140744D5C (VfThunkApplyThunks.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 */

__int64 __fastcall MmAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  _KPROCESS *v4; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v6; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = BugCheckParameter1[1].ActiveProcessors.Bitmap[2];
  v4 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].ActiveProcessors.Bitmap[2];
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v3 + 116);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 && Process != PsInitialSystemProcess && v6 == v3 )
      v4 = Process;
    KiStackAttachProcess(v4, 0, a2);
    return 0LL;
  }
}

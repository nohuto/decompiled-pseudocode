/*
 * XREFs of MmAttachSession @ 0x14007659C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 *     MiAttachToOwningSession @ 0x14010A1DC (MiAttachToOwningSession.c)
 *     PopWatchdogWorker @ 0x14020B648 (PopWatchdogWorker.c)
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x140499B84 (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404A541C (ObpProcessRemoveObjectQueue.c)
 *     PspAttachSession @ 0x1404CC854 (PspAttachSession.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x14052AFF8 (PnpNotifyDriverCallback.c)
 *     MmGetSessionMappedViewInformation @ 0x140657328 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x140674C3C (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB16C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F4AC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F57C (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 */

__int64 __fastcall MmAttachSession(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v4; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1024);
  v2 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process[1].ActiveProcessors.Bitmap[2];
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v1 + 116);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v4 && Process != PsInitialSystemProcess && v4 == v1 )
      v2 = (ULONG_PTR)Process;
    KiStackAttachProcess(v2);
    return 0LL;
  }
}

/*
 * XREFs of MmAttachSession @ 0x14007651C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x140086B20 (MiEmptyAccessLogs.c)
 *     MiAttachToOwningSession @ 0x14010C45C (MiAttachToOwningSession.c)
 *     PopWatchdogWorker @ 0x14020B81C (PopWatchdogWorker.c)
 *     ExCallSessionCallBack @ 0x140463D04 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140469960 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140490A2C (EtwpSendDataBlock.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x1404990F4 (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     PspAttachSession @ 0x1404EA760 (PspAttachSession.c)
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x14052C110 (PnpNotifyDriverCallback.c)
 *     MmGetSessionMappedViewInformation @ 0x140657244 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x140674B58 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x14067904C (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1406A7568 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB034 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F47C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F54C (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
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

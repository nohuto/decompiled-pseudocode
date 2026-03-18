/*
 * XREFs of WheaAttemptPhysicalPageOffline @ 0x140677DE0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1401CCAAC (KiMcheckAlternateReturn.c)
 *     WheapPfaMemoryCheck @ 0x140678D94 (WheapPfaMemoryCheck.c)
 *     WheapPredictiveFailureAnalysis @ 0x140679218 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140678118 (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptPhysicalPageOffline(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v8[3]; // [rsp+50h] [rbp-30h] BYREF

  v3 = a3;
  v4 = a2;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return WheapAttemptPhysicalPageOffline(a1, a2, a3);
  memset(v8, 0, 0x28uLL);
  *(_QWORD *)&v8[0] = a1;
  BYTE8(v8[0]) = v4;
  BYTE9(v8[0]) = v3;
  KeInitializeEvent((PRKEVENT)&v8[1], NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v8;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&v8[1], Executive, 0, 0, 0LL);
  return HIDWORD(v8[0]);
}

/*
 * XREFs of ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C02D9340
 * Callers:
 *     ?UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z @ 0x1C02D6AF0 (-UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z.c)
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C02D9238 (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWorkItemQueue::QueueWorkItem(CWorkItemQueue *this, struct _SLIST_ENTRY *a2)
{
  if ( *(_BYTE *)this )
    return 0;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 1, a2);
  KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
  return 1;
}

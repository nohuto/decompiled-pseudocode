/*
 * XREFs of PopWakeInfoDereference @ 0x14011A63C
 * Callers:
 *     PopDereferenceWakeInfos @ 0x14011A5D4 (PopDereferenceWakeInfos.c)
 *     PopTimeoutWakeTracking @ 0x14011A6EC (PopTimeoutWakeTracking.c)
 *     PopUpdateWakeSourceWorker @ 0x1401ECBD0 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x1403A5AF0 (PopNewWakeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}

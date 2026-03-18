/*
 * XREFs of PopWakeInfoDereference @ 0x140149020
 * Callers:
 *     PopDereferenceWakeInfos @ 0x140148FB8 (PopDereferenceWakeInfos.c)
 *     PopTimeoutWakeTracking @ 0x1401490D0 (PopTimeoutWakeTracking.c)
 *     PopUpdateWakeSourceWorker @ 0x14023AE8C (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x1403EF2D0 (PopNewWakeInfo.c)
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

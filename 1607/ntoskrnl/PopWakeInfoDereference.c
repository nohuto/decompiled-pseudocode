/*
 * XREFs of PopWakeInfoDereference @ 0x14012580C
 * Callers:
 *     PopTimeoutWakeTracking @ 0x140125690 (PopTimeoutWakeTracking.c)
 *     PopDereferenceWakeInfos @ 0x1401257A4 (PopDereferenceWakeInfos.c)
 *     PopUpdateWakeSourceWorker @ 0x140205A18 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x1403D0BE4 (PopNewWakeInfo.c)
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

/*
 * XREFs of PspDereferenceMonitorContextServerSilo @ 0x1401178C4
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     PsSetMonitorContextServerSilo @ 0x14015EC2C (PsSetMonitorContextServerSilo.c)
 *     EtwWriteKMSecurityEvent @ 0x140164310 (EtwWriteKMSecurityEvent.c)
 *     PsDeleteMonitorContextServerSilo @ 0x140243B90 (PsDeleteMonitorContextServerSilo.c)
 * Callees:
 *     <none>
 */

void __fastcall PspDereferenceMonitorContextServerSilo(volatile signed __int32 *a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd(a1 + 12, 0xFFFFFFFF) == 1 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      PspFreeMonitorContextServerSilo((PVOID)a1);
    }
    else
    {
      v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 14);
      v2->Parameter = (void *)a1;
      v2->List.Flink = 0LL;
      v2->WorkerRoutine = (void (__fastcall *)(void *))PspFreeMonitorContextServerSilo;
      ExQueueWorkItem(v2, DelayedWorkQueue);
    }
  }
}

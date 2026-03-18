/*
 * XREFs of PspDereferenceMonitorContextServerSilo @ 0x14009FBBC
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     EtwWriteKMSecurityEvent @ 0x14013B1E0 (EtwWriteKMSecurityEvent.c)
 *     PsDeleteMonitorContextServerSilo @ 0x1401F57A8 (PsDeleteMonitorContextServerSilo.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     EtwSendTraceBuffer @ 0x14020D638 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     EtwGetProcessorBuffer @ 0x14020FA98 (EtwGetProcessorBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall PspDereferenceMonitorContextServerSilo(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFF) == 1 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      PspFreeMonitorContextServerSilo(a1);
    }
    else
    {
      v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
      v2->Parameter = (void *)a1;
      v2->List.Flink = 0LL;
      v2->WorkerRoutine = (void (__fastcall *)(void *))PspFreeMonitorContextServerSilo;
      ExQueueWorkItem(v2, DelayedWorkQueue);
    }
  }
}

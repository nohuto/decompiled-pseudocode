/*
 * XREFs of PopWakeSourceTimeoutDpc @ 0x14012707C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopWakeSourceTimeoutDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KAFFINITY *p_ProcessorHistory; // rcx

  *(_QWORD *)&Dpc->TargetInfoAsUlong = 0LL;
  p_ProcessorHistory = &Dpc[-1].ProcessorHistory;
  p_ProcessorHistory[8] = (KAFFINITY)PopWakeSourceTimeoutWorker;
  p_ProcessorHistory[9] = (KAFFINITY)p_ProcessorHistory;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(p_ProcessorHistory + 6), DelayedWorkQueue);
}

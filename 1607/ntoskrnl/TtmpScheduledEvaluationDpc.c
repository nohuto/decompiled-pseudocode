/*
 * XREFs of TtmpScheduledEvaluationDpc @ 0x14020E9CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TtmpScheduledEvaluationDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedExchange((volatile __int32 *)DeferredContext + 60, 1) )
    ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 208), DelayedWorkQueue);
}

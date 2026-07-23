/*
 * XREFs of PfSnPowerBoostDpc @ 0x1401FEDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PfSnPowerBoostDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 136), CriticalWorkQueue);
}

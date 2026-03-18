/*
 * XREFs of DpiPdoPollingDpc @ 0x1C002FC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoPollingDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_1C00570A0, 1) )
    IoQueueWorkItem(IoWorkItem, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}

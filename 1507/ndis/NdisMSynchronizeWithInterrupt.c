/*
 * XREFs of NdisMSynchronizeWithInterrupt @ 0x1C005C670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall NdisMSynchronizeWithInterrupt(
        PNDIS_MINIPORT_INTERRUPT Interrupt,
        MINIPORT_SYNCHRONIZE_INTERRUPT_HANDLER SynchronizeFunction,
        PVOID SynchronizeContext)
{
  return KeSynchronizeExecution(Interrupt->InterruptObject, SynchronizeFunction, SynchronizeContext);
}

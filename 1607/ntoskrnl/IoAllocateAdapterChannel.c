/*
 * XREFs of IoAllocateAdapterChannel @ 0x1401C886C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoAllocateAdapterChannel(
        PDMA_ADAPTER DmaAdapter,
        PDEVICE_OBJECT DeviceObject,
        ULONG NumberOfMapRegisters,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  return ((__int64 (__fastcall *)(PDMA_ADAPTER, PDEVICE_OBJECT, ULONG, PDRIVER_CONTROL))DmaAdapter->DmaOperations->AllocateAdapterChannel)(
           DmaAdapter,
           DeviceObject,
           NumberOfMapRegisters,
           ExecutionRoutine);
}

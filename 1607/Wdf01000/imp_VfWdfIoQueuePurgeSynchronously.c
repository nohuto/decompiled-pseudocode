/*
 * XREFs of imp_VfWdfIoQueuePurgeSynchronously @ 0x1C00C4510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueuePurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueuePurgeSynchronously(DriverGlobals, Queue);
}

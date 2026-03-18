/*
 * XREFs of imp_VfWdfIoQueueStopAndPurgeSynchronously @ 0x1C00CF3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueueStopAndPurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueStopAndPurgeSynchronously(DriverGlobals, Queue);
}

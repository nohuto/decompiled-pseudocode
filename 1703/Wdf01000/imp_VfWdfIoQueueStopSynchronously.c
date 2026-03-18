/*
 * XREFs of imp_VfWdfIoQueueStopSynchronously @ 0x1C00CF3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueueStopSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueStopSynchronously(DriverGlobals, Queue);
}

/*
 * XREFs of imp_VfWdfIoQueueStart @ 0x1C00CB9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueueStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueStart(DriverGlobals, Queue);
}

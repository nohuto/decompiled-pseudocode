/*
 * XREFs of imp_VfWdfIoQueueStopAndPurge @ 0x1C00CF390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueueStopAndPurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *StopAndPurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  WdfVersion.Functions.pfnWdfIoQueueStopAndPurge(DriverGlobals, Queue, StopAndPurgeComplete, Context);
}

/*
 * XREFs of imp_VfWdfIoQueueStop @ 0x1C00CF370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueueStop(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *StopComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  WdfVersion.Functions.pfnWdfIoQueueStop(DriverGlobals, Queue, StopComplete, Context);
}

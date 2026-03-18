/*
 * XREFs of imp_VfWdfIoQueueDrain @ 0x1C00C4460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoQueueDrain(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *DrainComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  WdfVersion.Functions.pfnWdfIoQueueDrain(DriverGlobals, Queue, DrainComplete, Context);
}

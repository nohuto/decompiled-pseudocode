/*
 * XREFs of imp_VfWdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C00B4390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfCxDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetIoInCallerContextCallback(DriverGlobals, CxDeviceInit, EvtIoInCallerContext);
}

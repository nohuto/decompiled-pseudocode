/*
 * XREFs of imp_VfWdfDeviceSetStaticStopRemove @ 0x1C00B4B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetStaticStopRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 Stoppable)
{
  WdfVersion.Functions.pfnWdfDeviceSetStaticStopRemove(DriverGlobals, Device, Stoppable);
}

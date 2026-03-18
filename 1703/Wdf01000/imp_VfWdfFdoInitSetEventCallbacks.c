/*
 * XREFs of imp_VfWdfFdoInitSetEventCallbacks @ 0x1C00CE9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfFdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FDO_EVENT_CALLBACKS *FdoEventCallbacks)
{
  WdfVersion.Functions.pfnWdfFdoInitSetEventCallbacks(DriverGlobals, DeviceInit, FdoEventCallbacks);
}

/*
 * XREFs of imp_VfWdfUsbTargetDeviceGetInterface @ 0x1C00CD0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFUSBINTERFACE__ *__fastcall imp_VfWdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        __int64 InterfaceIndex)
{
  return WdfVersion.Functions.pfnWdfUsbTargetDeviceGetInterface(DriverGlobals, UsbDevice, InterfaceIndex);
}

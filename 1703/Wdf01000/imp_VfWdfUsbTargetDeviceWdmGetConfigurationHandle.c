/*
 * XREFs of imp_VfWdfUsbTargetDeviceWdmGetConfigurationHandle @ 0x1C00D13B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfUsbTargetDeviceWdmGetConfigurationHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  return WdfVersion.Functions.pfnWdfUsbTargetDeviceWdmGetConfigurationHandle(DriverGlobals, UsbDevice);
}

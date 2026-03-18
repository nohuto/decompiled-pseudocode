/*
 * XREFs of imp_VfWdfUsbTargetDeviceResetPortSynchronously @ 0x1C00B7030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceResetPortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceResetPortSynchronously)(
           DriverGlobals,
           UsbDevice);
}

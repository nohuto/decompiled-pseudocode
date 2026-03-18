/*
 * XREFs of imp_VfWdfUsbTargetDeviceCyclePortSynchronously @ 0x1C00C5EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceCyclePortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceCyclePortSynchronously)(
           DriverGlobals,
           UsbDevice);
}

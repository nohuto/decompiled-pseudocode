/*
 * XREFs of imp_VfWdfUsbTargetDeviceGetDeviceDescriptor @ 0x1C00B6F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfUsbTargetDeviceGetDeviceDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _USB_DEVICE_DESCRIPTOR *UsbDeviceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbTargetDeviceGetDeviceDescriptor(DriverGlobals, UsbDevice, UsbDeviceDescriptor);
}

/*
 * XREFs of imp_VfWdfUsbInterfaceGetDescriptor @ 0x1C00D0ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbInterfaceGetDescriptor(DriverGlobals, UsbInterface, SettingIndex, InterfaceDescriptor);
}

/*
 * XREFs of imp_VfWdfUsbInterfaceGetInterfaceNumber @ 0x1C00CCF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetInterfaceNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *))WdfVersion.Functions.pfnWdfUsbInterfaceGetInterfaceNumber)(
           DriverGlobals,
           UsbInterface);
}

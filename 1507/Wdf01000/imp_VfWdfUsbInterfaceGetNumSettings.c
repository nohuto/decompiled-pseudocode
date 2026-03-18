/*
 * XREFs of imp_VfWdfUsbInterfaceGetNumSettings @ 0x1C00CCF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetNumSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *))WdfVersion.Functions.pfnWdfUsbInterfaceGetNumSettings)(
           DriverGlobals,
           UsbInterface);
}

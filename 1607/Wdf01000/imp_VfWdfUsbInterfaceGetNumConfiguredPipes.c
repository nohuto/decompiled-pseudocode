/*
 * XREFs of imp_VfWdfUsbInterfaceGetNumConfiguredPipes @ 0x1C00C5DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetNumConfiguredPipes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *))WdfVersion.Functions.pfnWdfUsbInterfaceGetNumConfiguredPipes)(
           DriverGlobals,
           UsbInterface);
}

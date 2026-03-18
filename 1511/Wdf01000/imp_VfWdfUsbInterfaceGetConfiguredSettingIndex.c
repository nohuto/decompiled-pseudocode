/*
 * XREFs of imp_VfWdfUsbInterfaceGetConfiguredSettingIndex @ 0x1C00B6D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetConfiguredSettingIndex(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *Interface)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *))WdfVersion.Functions.pfnWdfUsbInterfaceGetConfiguredSettingIndex)(
           DriverGlobals,
           Interface);
}

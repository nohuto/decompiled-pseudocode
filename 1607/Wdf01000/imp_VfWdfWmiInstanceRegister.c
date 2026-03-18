/*
 * XREFs of imp_VfWdfWmiInstanceRegister @ 0x1C00C63E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfWmiInstanceRegister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWMIINSTANCE__ *))WdfVersion.Functions.pfnWdfWmiInstanceRegister)(
           DriverGlobals,
           WmiInstance);
}

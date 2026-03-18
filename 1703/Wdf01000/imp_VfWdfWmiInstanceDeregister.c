/*
 * XREFs of imp_VfWdfWmiInstanceDeregister @ 0x1C00D1770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfWmiInstanceDeregister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  WdfVersion.Functions.pfnWdfWmiInstanceDeregister(DriverGlobals, WmiInstance);
}

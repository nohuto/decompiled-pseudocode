/*
 * XREFs of imp_VfWdfRegistryClose @ 0x1C00D01C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  WdfVersion.Functions.pfnWdfRegistryClose(DriverGlobals, Key);
}

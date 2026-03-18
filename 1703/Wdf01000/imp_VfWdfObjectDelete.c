/*
 * XREFs of imp_VfWdfObjectDelete @ 0x1C00CFD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfObjectDelete(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  WdfVersion.Functions.pfnWdfObjectDelete(DriverGlobals, Object);
}

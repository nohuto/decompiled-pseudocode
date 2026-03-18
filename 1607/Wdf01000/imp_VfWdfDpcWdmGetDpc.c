/*
 * XREFs of imp_VfWdfDpcWdmGetDpc @ 0x1C00C3F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_KDPC *__fastcall imp_VfWdfDpcWdmGetDpc(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return WdfVersion.Functions.pfnWdfDpcWdmGetDpc(DriverGlobals, Dpc);
}

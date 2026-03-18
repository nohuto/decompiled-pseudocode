/*
 * XREFs of imp_VfWdfChildListBeginScan @ 0x1C00C30A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfChildListBeginScan(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *ChildList)
{
  WdfVersion.Functions.pfnWdfChildListBeginScan(DriverGlobals, ChildList);
}

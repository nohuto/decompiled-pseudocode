/*
 * XREFs of imp_VfWdfInterruptReportActive @ 0x1C00CECA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptReportActive(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptReportActive(DriverGlobals, Interrupt);
}

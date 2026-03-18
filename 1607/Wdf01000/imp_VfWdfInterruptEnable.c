/*
 * XREFs of imp_VfWdfInterruptEnable @ 0x1C00C42D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptEnable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptEnable(DriverGlobals, Interrupt);
}

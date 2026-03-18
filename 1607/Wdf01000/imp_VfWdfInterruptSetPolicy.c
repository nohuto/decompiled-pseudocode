/*
 * XREFs of imp_VfWdfInterruptSetPolicy @ 0x1C00C4360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptSetPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        __int64 Policy,
        __int64 Priority,
        unsigned __int64 TargetProcessorSet)
{
  WdfVersion.Functions.pfnWdfInterruptSetPolicy(
    DriverGlobals,
    Interrupt,
    (_WDF_INTERRUPT_POLICY)Policy,
    (_WDF_INTERRUPT_PRIORITY)Priority,
    TargetProcessorSet);
}

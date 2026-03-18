/*
 * XREFs of imp_VfWdfDmaEnablerGetMaximumScatterGatherElements @ 0x1C00CAC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetMaximumScatterGatherElements(DriverGlobals, DmaEnabler);
}

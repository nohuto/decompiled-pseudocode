/*
 * XREFs of imp_VfWdfDmaEnablerConfigureSystemProfile @ 0x1C00C3C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDmaEnablerConfigureSystemProfile(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *ProfileConfig,
        __int64 ConfigDirection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMAENABLER__ *, _WDF_DMA_SYSTEM_PROFILE_CONFIG *, __int64))WdfVersion.Functions.pfnWdfDmaEnablerConfigureSystemProfile)(
           DriverGlobals,
           DmaEnabler,
           ProfileConfig,
           ConfigDirection);
}

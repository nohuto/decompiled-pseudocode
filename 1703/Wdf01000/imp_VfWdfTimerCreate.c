/*
 * XREFs of imp_VfWdfTimerCreate @ 0x1C00D0E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfTimerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFTIMER__ **Timer)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_TIMER_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFTIMER__ **))WdfVersion.Functions.pfnWdfTimerCreate)(
           DriverGlobals,
           Config,
           Attributes,
           Timer);
}

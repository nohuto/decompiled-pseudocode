/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C00022A8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000B0C0 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000B2F4 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C000B4DC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerIrp @ 0x1C000B9B0 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C000BC44 (RaidAdapterPowerDownDevice.c)
 *     McGenControlCallbackV2 @ 0x1C000D090 (McGenControlCallbackV2.c)
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002A4B0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaSqmLogAdapterStatistics @ 0x1C002B738 (RaSqmLogAdapterStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C003CC34 (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C003D964 (StorpLogStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C005B20C (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256)) )
    return (unsigned int)-1073741738;
  return v1;
}

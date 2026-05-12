/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C0003AD8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00039F4 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0005E90 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C00063DC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0006674 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0006C90 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0006D38 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 *     RaSqmLogAdapterStatistics @ 0x1C0026118 (RaSqmLogAdapterStatistics.c)
 *     StorEtwEnableCallback @ 0x1C0034F74 (StorEtwEnableCallback.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0037034 (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C0037D0C (StorpLogStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C004F22C (RaWmiDispatchIrp.c)
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

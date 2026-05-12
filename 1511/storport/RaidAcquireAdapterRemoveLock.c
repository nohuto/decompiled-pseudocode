/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C00049C4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0004898 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0007B70 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C00080BC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0008384 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00089EC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0008A94 (RaidAdapterPowerDownDevice.c)
 *     McGenControlCallbackV2 @ 0x1C000A1E0 (McGenControlCallbackV2.c)
 *     RaidAdapterPnpIrp @ 0x1C000B48C (RaidAdapterPnpIrp.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00280B8 (RaSqmLogAdapterStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0038E94 (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C0039B90 (StorpLogStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C0052F8C (RaWmiDispatchIrp.c)
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

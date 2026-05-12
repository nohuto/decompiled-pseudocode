/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x1C0012158
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C0052F8C (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
}

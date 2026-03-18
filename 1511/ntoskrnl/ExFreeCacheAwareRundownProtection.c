/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1400D0F1C
 * Callers:
 *     RawCleanupVcb @ 0x140494130 (RawCleanupVcb.c)
 *     EtwpServerSiloTerminateNotify @ 0x140663CF0 (EtwpServerSiloTerminateNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}

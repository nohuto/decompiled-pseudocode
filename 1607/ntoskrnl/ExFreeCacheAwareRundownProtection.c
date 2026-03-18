/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140007928
 * Callers:
 *     RawCleanupVcb @ 0x1403EE474 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x1405631E8 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x1406A3110 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}

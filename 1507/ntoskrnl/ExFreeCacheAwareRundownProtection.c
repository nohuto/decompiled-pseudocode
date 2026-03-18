/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x14000781C
 * Callers:
 *     RawCleanupVcb @ 0x14040E0A0 (RawCleanupVcb.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(*((PVOID *)RunRefCacheAware + 1), 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}

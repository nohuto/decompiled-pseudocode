/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x140007840
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x14040E2E8 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x14040E3E0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x1405BEFDC (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}

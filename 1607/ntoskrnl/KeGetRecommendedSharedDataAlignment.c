/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x14009D700
 * Callers:
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404C17A0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1404C1898 (ExInitializeRundownProtectionCacheAware.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14057C920 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}

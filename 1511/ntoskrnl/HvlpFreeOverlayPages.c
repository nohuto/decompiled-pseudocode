/*
 * XREFs of HvlpFreeOverlayPages @ 0x14010760C
 * Callers:
 *     HvlInitializeProcessor @ 0x14052F954 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1405F683C (HvlDeleteProcessor.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x1406CFCF0 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}

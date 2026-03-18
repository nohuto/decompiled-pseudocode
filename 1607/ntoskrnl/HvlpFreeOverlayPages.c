/*
 * XREFs of HvlpFreeOverlayPages @ 0x140112194
 * Callers:
 *     HvlInitializeProcessor @ 0x14054E4D8 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1406203EC (HvlDeleteProcessor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}

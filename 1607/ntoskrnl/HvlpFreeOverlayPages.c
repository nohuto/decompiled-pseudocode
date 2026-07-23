/*
 * XREFs of HvlpFreeOverlayPages @ 0x1401126F8
 * Callers:
 *     HvlInitializeProcessor @ 0x14054E878 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1406204A0 (HvlDeleteProcessor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}

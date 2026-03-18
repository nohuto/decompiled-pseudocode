/*
 * XREFs of HvlpFreeOverlayPages @ 0x14013A308
 * Callers:
 *     HvlInitializeProcessor @ 0x14059A970 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140670600 (HvlDeleteProcessor.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x1407537BC (VerifierMmFreeContiguousMemorySpecifyCache.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}

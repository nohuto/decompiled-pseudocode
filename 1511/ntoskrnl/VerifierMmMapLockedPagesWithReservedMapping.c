/*
 * XREFs of VerifierMmMapLockedPagesWithReservedMapping @ 0x1406C0AD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall VerifierMmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  return pXdvMmMapLockedPagesWithReservedMapping(MappingAddress, PoolTag, MemoryDescriptorList, CacheType);
}

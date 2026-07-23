/*
 * XREFs of MmAllocateContiguousMemorySpecifyCacheNode @ 0x140131964
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCache @ 0x140131944 (MmAllocateContiguousMemorySpecifyCache.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x14009A6A0 (MmAllocateContiguousNodeMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemorySpecifyCacheNode(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType,
        NODE_REQUIREMENT PreferredNode)
{
  unsigned int v6; // r10d

  if ( CacheType == MmCached )
  {
    v6 = 64;
  }
  else
  {
    v6 = 516;
    if ( CacheType == MmWriteCombined )
      v6 = 1028;
  }
  return (PVOID)MmAllocateContiguousNodeMemory(
                  NumberOfBytes,
                  LowestAcceptableAddress.QuadPart,
                  HighestAcceptableAddress.QuadPart,
                  BoundaryAddressMultiple.QuadPart,
                  v6,
                  PreferredNode);
}

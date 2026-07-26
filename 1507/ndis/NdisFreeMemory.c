/*
 * XREFs of NdisFreeMemory @ 0x1C001F2F0
 * Callers:
 *     ndisVerifierFreeMemory @ 0x1C00602F0 (ndisVerifierFreeMemory.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemory(PVOID VirtualAddress, UINT Length, UINT MemoryFlags)
{
  if ( MemoryFlags )
  {
    if ( (MemoryFlags & 2) != 0 )
    {
      MmFreeNonCachedMemory(VirtualAddress, Length);
    }
    else if ( (MemoryFlags & 1) != 0 )
    {
      MmFreeContiguousMemory(VirtualAddress);
    }
  }
  else
  {
    ExFreePoolWithTag(VirtualAddress, 0);
  }
}

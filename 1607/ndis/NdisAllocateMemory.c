/*
 * XREFs of NdisAllocateMemory @ 0x1C0050320
 * Callers:
 *     ndisVerifierAllocateMemory @ 0x1C0063AE0 (ndisVerifierAllocateMemory.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemory(
        PVOID *VirtualAddress,
        UINT Length,
        UINT MemoryFlags,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  PVOID NonCachedMemory; // rax

  if ( MemoryFlags )
  {
    if ( (MemoryFlags & 2) != 0 )
    {
      NonCachedMemory = MmAllocateNonCachedMemory(Length);
    }
    else
    {
      if ( (MemoryFlags & 1) == 0 )
      {
        *VirtualAddress = 0LL;
        return *VirtualAddress == 0LL ? 0xC0000001 : 0;
      }
      NonCachedMemory = (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                                 Length,
                                 0LL,
                                 (NDIS_PHYSICAL_ADDRESS)HighestAcceptableAddress.QuadPart,
                                 0LL,
                                 4,
                                 0x80000000);
    }
  }
  else
  {
    NonCachedMemory = ExAllocatePoolWithTag(ndisDriverPoolType, Length, 0x6D61444Eu);
  }
  *VirtualAddress = NonCachedMemory;
  return *VirtualAddress == 0LL ? 0xC0000001 : 0;
}

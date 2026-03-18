/*
 * XREFs of MmAllocateContiguousMemory @ 0x1401D35C0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx

  v2 = HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_1402FE758 )
    v2 = qword_1402FE758;
  return (PVOID)MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}

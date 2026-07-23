/*
 * XREFs of MmAllocateContiguousMemory @ 0x1401E34C8
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx

  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_140326AD0 )
    v2 = qword_140326AD0;
  return MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}

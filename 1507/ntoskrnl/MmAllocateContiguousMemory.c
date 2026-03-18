/*
 * XREFs of MmAllocateContiguousMemory @ 0x140214A08
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateContiguousMemory @ 0x140114E20 (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx

  v2 = HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_14034EC10 )
    v2 = qword_14034EC10;
  return MiAllocateContiguousMemory(NumberOfBytes, 0LL, v2, 0LL, 6u, 0x80000000);
}

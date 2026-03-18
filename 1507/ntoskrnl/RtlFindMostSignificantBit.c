/*
 * XREFs of RtlFindMostSignificantBit @ 0x140111C10
 * Callers:
 *     NtMapViewOfSection @ 0x1404B5D50 (NtMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  __int64 v2; // rax

  if ( !_BitScanReverse64((unsigned __int64 *)&v2, Set) )
    LOBYTE(v2) = -1;
  return v2;
}

/*
 * XREFs of RtlFindMostSignificantBit @ 0x14009E154
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     NtMapViewOfSection @ 0x140436740 (NtMapViewOfSection.c)
 *     MiValidateZeroBits @ 0x140658DCC (MiValidateZeroBits.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}

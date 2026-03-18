/*
 * XREFs of MiAddSecureEntry @ 0x14042AB30
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040C688 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiSecureVad @ 0x14042AA80 (MiSecureVad.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiAllocateVad @ 0x14046D108 (MiAllocateVad.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiCloneNoChange @ 0x140527F0C (MiCloneNoChange.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405320CC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140014510 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x140014B08 (MiLocateExclusiveSecure.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *result; // rax
  _DWORD *v10; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 && (a5 == 1 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x65536D4Du);
  v10 = result;
  if ( result )
  {
    result[4] = 0;
    *((_QWORD *)result + 2) = a2;
    result[2] = 2;
    *((_QWORD *)result + 3) = a3;
    if ( (a4 & 1) != 0 )
    {
      result[4] |= 8u;
    }
    else if ( (a4 & 4) != 0 )
    {
      result[4] |= 0xAu;
    }
    else if ( (a4 & 2) != 0 )
    {
      result[4] |= 9u;
    }
    if ( a5 == 1 )
      result[4] |= 0x20u;
    if ( a4 < 0 )
      result[4] |= 4u;
    if ( (a4 & 0x40000000) != 0 )
      result[4] |= 0x10u;
    MiInsertVadEvent(a1, (__int64 *)result, 1);
    *(_DWORD *)(a1 + 48) |= 0x4000u;
    return v10;
  }
  return result;
}

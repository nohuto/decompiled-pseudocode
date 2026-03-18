/*
 * XREFs of MiAddSecureEntry @ 0x14047B4A0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiSecureVad @ 0x140415A20 (MiSecureVad.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiCloneNoChange @ 0x1404615D8 (MiCloneNoChange.c)
 *     MiAllocateVad @ 0x140463408 (MiAllocateVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404F3C18 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x1400E860C (MiLocateExclusiveSecure.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
    MiInsertVadEvent(a1, result, 1LL);
    *(_DWORD *)(a1 + 48) |= 0x4000u;
    return v10;
  }
  return result;
}

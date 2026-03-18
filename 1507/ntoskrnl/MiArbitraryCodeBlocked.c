/*
 * XREFs of MiArbitraryCodeBlocked @ 0x1400DCCF8
 * Callers:
 *     MiAllowProtectionChange @ 0x1400DCB94 (MiAllowProtectionChange.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1400DCD2C (EtwTraceMemoryAcg.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x400) != 0 || (BYTE2(MiFlags) & 3u) > 1 && (MiFlags & 0x40000) != 0 )
  {
    EtwTraceMemoryAcg(0x80000000LL);
    return 3221227012LL;
  }
  else
  {
    EtwTraceMemoryAcg(0LL);
    return 0LL;
  }
}

/*
 * XREFs of MiArbitraryCodeBlocked @ 0x1400F5BF8
 * Callers:
 *     MiAllowProtectionChange @ 0x1400F5AE4 (MiAllowProtectionChange.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1400F5C1C (EtwTraceMemoryAcg.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x400) != 0 )
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

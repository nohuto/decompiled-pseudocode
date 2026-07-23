/*
 * XREFs of MiArbitraryCodeBlocked @ 0x1400B548C
 * Callers:
 *     MiAllowProtectionChange @ 0x1400B5348 (MiAllowProtectionChange.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1400B54B0 (EtwTraceMemoryAcg.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x400) == 0 || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0 )
  {
    EtwTraceMemoryAcg(0LL);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000LL);
    return 3221227012LL;
  }
}

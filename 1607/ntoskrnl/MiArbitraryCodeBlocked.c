/*
 * XREFs of MiArbitraryCodeBlocked @ 0x1400B75F4
 * Callers:
 *     MiAllowProtectionChange @ 0x1400B74B0 (MiAllowProtectionChange.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140433010 (MiMapViewOfSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1400B7618 (EtwTraceMemoryAcg.c)
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

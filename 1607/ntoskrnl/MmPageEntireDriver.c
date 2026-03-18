/*
 * XREFs of MmPageEntireDriver @ 0x14047DC74
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x140014A30 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025FB0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiSetPagingOfDriver @ 0x140083DC4 (MiSetPagingOfDriver.c)
 *     KeFlushQueuedDpcs @ 0x1400841B4 (KeFlushQueuedDpcs.c)
 *     MiCancelPhase0Locking @ 0x14047DD28 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  PVOID *v2; // rax
  __int64 v3; // rbp
  PVOID v4; // rsi
  unsigned __int64 *PteAddress; // rdi
  unsigned __int64 *v6; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = v2[6];
  if ( (dword_1403A9134 & 1) == 0
    && ((unsigned __int64)AddressWithinSection < qword_140326910
     || (unsigned __int64)AddressWithinSection >= qword_140326910 + 0x8000000000LL) )
  {
    KeFlushQueuedDpcs();
    PteAddress = (unsigned __int64 *)MiGetPteAddress((unsigned __int64)v4);
    v6 = &PteAddress[(unsigned __int64)*(unsigned int *)(v3 + 64) >> 12];
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, (unsigned __int64)(v6 - 1));
  }
  return v4;
}

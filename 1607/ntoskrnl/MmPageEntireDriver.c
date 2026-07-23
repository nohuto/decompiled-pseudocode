/*
 * XREFs of MmPageEntireDriver @ 0x14047C9C8
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiSetPagingOfDriver @ 0x140081F24 (MiSetPagingOfDriver.c)
 *     KeFlushQueuedDpcs @ 0x140082314 (KeFlushQueuedDpcs.c)
 *     MiCancelPhase0Locking @ 0x14047CA7C (MiCancelPhase0Locking.c)
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
    && ((unsigned __int64)AddressWithinSection < qword_140326950
     || (unsigned __int64)AddressWithinSection >= qword_140326950 + 0x8000000000LL) )
  {
    KeFlushQueuedDpcs();
    PteAddress = (unsigned __int64 *)MiGetPteAddress((unsigned __int64)v4);
    v6 = &PteAddress[(unsigned __int64)*(unsigned int *)(v3 + 64) >> 12];
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, (unsigned __int64)(v6 - 1));
  }
  return v4;
}

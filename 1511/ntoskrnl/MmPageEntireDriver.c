/*
 * XREFs of MmPageEntireDriver @ 0x1403CF37C
 * Callers:
 *     VerifierMmPageEntireDriver @ 0x1406C0AE0 (VerifierMmPageEntireDriver.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiSetPagingOfDriver @ 0x14001A3D0 (MiSetPagingOfDriver.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     KeFlushQueuedDpcs @ 0x14009C070 (KeFlushQueuedDpcs.c)
 *     MiCancelPhase0Locking @ 0x1403CFE00 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  PVOID *v2; // rax
  __int64 v3; // rbp
  PVOID v4; // rsi
  unsigned __int64 *PteAddress; // rdi
  unsigned __int64 *v6; // rbx

  if ( (*(_BYTE *)(8 * (((unsigned __int64)AddressWithinSection >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)((((unsigned __int64)AddressWithinSection >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)MiGetPdeAddress((unsigned __int64)AddressWithinSection) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = v2[6];
  if ( (dword_1403810E8 & 1) == 0 && (unsigned __int64)AddressWithinSection + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    KeFlushQueuedDpcs();
    PteAddress = (unsigned __int64 *)MiGetPteAddress((unsigned __int64)v4);
    v6 = &PteAddress[(unsigned __int64)*(unsigned int *)(v3 + 64) >> 12];
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, (unsigned __int64)(v6 - 1));
  }
  return v4;
}

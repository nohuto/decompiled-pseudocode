/*
 * XREFs of MmPageEntireDriver @ 0x1404F5378
 * Callers:
 *     VerifierMmPageEntireDriver @ 0x140742320 (VerifierMmPageEntireDriver.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     MiSetPagingOfDriver @ 0x1400D3E3C (MiSetPagingOfDriver.c)
 *     KeFlushQueuedDpcs @ 0x1400D4B60 (KeFlushQueuedDpcs.c)
 *     MiCancelPhase0Locking @ 0x1404F5498 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  PVOID *v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx

  if ( (*(_BYTE *)(8 * (((unsigned __int64)AddressWithinSection >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)((((unsigned __int64)AddressWithinSection >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)((((unsigned __int64)AddressWithinSection >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = (unsigned __int64)v2[6];
  if ( (dword_1403D00D8 & 1) == 0 && (unsigned __int64)AddressWithinSection + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    KeFlushQueuedDpcs();
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * (((unsigned __int64)*(unsigned int *)(v3 + 64) >> 12) - 1);
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v5);
  }
  return (PVOID)v4;
}

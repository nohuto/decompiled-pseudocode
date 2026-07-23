/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x1401B83B0
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x1401B84A0 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     FsRtlLookupLastBaseMcbEntry @ 0x1400987F0 (FsRtlLookupLastBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}

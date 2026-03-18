/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x14008C688
 * Callers:
 *     FsRtlAddMcbEntry @ 0x1401B8464 (FsRtlAddMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     FsRtlAddBaseMcbEntry @ 0x14008CC94 (FsRtlAddBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn, SectorCount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}

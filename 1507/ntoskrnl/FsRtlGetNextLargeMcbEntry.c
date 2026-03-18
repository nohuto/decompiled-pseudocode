/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x1401E1ED0
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x1401E1FC0 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlGetNextBaseMcbEntry @ 0x1401037E0 (FsRtlGetNextBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlGetNextLargeMcbEntry(
        PLARGE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r12
  BOOLEAN NextBaseMcbEntry; // al
  PKGUARDED_MUTEX v14; // rbx
  BOOLEAN v15; // di
  unsigned __int8 OldIrql; // si
  signed __int32 v17; // eax

  GuardedMutex = Mcb->GuardedMutex;
  v10 = KeAbPreAcquire((ULONG_PTR)Mcb->GuardedMutex, 0LL, 0LL, (__int64)Lbn);
  v11 = v10;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  GuardedMutex->Owner = KeGetCurrentThread();
  GuardedMutex->OldIrql = CurrentIrql;
  NextBaseMcbEntry = FsRtlGetNextBaseMcbEntry(&Mcb->BaseMcb, RunIndex, Vbn, Lbn, SectorCount);
  v14 = Mcb->GuardedMutex;
  v15 = NextBaseMcbEntry;
  v14->Owner = 0LL;
  OldIrql = v14->OldIrql;
  v17 = _InterlockedCompareExchange(&v14->Count, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended(&v14->Count, v17);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v14);
  return v15;
}

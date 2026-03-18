/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x1401E2020
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x1401E2414 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlLookupBaseMcbEntry @ 0x140103070 (FsRtlLookupBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLargeMcbEntry(
        PLARGE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // r14
  PKGUARDED_MUTEX v15; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v17; // eax
  BOOLEAN v19; // [rsp+40h] [rbp-38h]

  GuardedMutex = Mcb->GuardedMutex;
  v12 = KeAbPreAcquire((ULONG_PTR)Mcb->GuardedMutex, 0LL, 0LL, (__int64)SectorCountFromLbn);
  v13 = v12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  GuardedMutex->Owner = KeGetCurrentThread();
  GuardedMutex->OldIrql = CurrentIrql;
  v19 = FsRtlLookupBaseMcbEntry(
          &Mcb->BaseMcb,
          Vbn,
          Lbn,
          SectorCountFromLbn,
          StartingLbn,
          SectorCountFromStartingLbn,
          Index);
  v15 = Mcb->GuardedMutex;
  v15->Owner = 0LL;
  OldIrql = v15->OldIrql;
  v17 = _InterlockedCompareExchange(&v15->Count, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended(&v15->Count, v17);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v15);
  return v19;
}

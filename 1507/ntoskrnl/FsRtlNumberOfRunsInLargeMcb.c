/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x1401E248C
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x1401E254C (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  __int64 v1; // r9
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  PKGUARDED_MUTEX v7; // rbx
  ULONG PairCount; // edi
  unsigned __int8 OldIrql; // si
  signed __int32 v10; // eax

  GuardedMutex = Mcb->GuardedMutex;
  v4 = KeAbPreAcquire((ULONG_PTR)Mcb->GuardedMutex, 0LL, 0LL, v1);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  GuardedMutex->Owner = KeGetCurrentThread();
  GuardedMutex->OldIrql = CurrentIrql;
  v7 = Mcb->GuardedMutex;
  PairCount = Mcb->BaseMcb.PairCount;
  v7->Owner = 0LL;
  OldIrql = v7->OldIrql;
  v10 = _InterlockedCompareExchange(&v7->Count, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended(&v7->Count, v10);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v7);
  return PairCount;
}

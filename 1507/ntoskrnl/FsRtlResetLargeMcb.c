/*
 * XREFs of FsRtlResetLargeMcb @ 0x1401E2680
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __stdcall FsRtlResetLargeMcb(PLARGE_MCB Mcb, BOOLEAN SelfSynchronized)
{
  __int64 v2; // r9
  PKGUARDED_MUTEX GuardedMutex; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  PKGUARDED_MUTEX v8; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v10; // eax

  if ( SelfSynchronized )
  {
    Mcb->BaseMcb.PairCount = 0;
  }
  else
  {
    GuardedMutex = Mcb->GuardedMutex;
    v5 = KeAbPreAcquire((ULONG_PTR)Mcb->GuardedMutex, 0LL, 0LL, v2);
    v6 = v5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v5);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    GuardedMutex->Owner = KeGetCurrentThread();
    GuardedMutex->OldIrql = CurrentIrql;
    Mcb->BaseMcb.PairCount = 0;
    v8 = Mcb->GuardedMutex;
    v8->Owner = 0LL;
    OldIrql = v8->OldIrql;
    v10 = _InterlockedCompareExchange(&v8->Count, 1, 0);
    if ( v10 )
      ExpReleaseFastMutexContended(&v8->Count, v10);
    __writecr8(OldIrql);
    KeAbPostRelease((ULONG_PTR)v8);
  }
}

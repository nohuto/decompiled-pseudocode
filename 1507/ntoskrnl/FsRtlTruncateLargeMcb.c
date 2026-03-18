/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x14010678C
 * Callers:
 *     FsRtlTruncateMcb @ 0x1401E29E8 (FsRtlTruncateMcb.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlTruncateBaseMcb @ 0x140106844 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  __int64 v2; // r9
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r14
  PKGUARDED_MUTEX v9; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v11; // eax

  GuardedMutex = Mcb->GuardedMutex;
  v6 = KeAbPreAcquire((ULONG_PTR)Mcb->GuardedMutex, 0LL, 0LL, v2);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  GuardedMutex->Owner = KeGetCurrentThread();
  GuardedMutex->OldIrql = CurrentIrql;
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  v9 = Mcb->GuardedMutex;
  v9->Owner = 0LL;
  OldIrql = v9->OldIrql;
  v11 = _InterlockedCompareExchange(&v9->Count, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended(&v9->Count, v11);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v9);
}

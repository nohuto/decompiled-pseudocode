/*
 * XREFs of FsRtlSplitLargeMcb @ 0x1401E28C4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlSplitBaseMcb @ 0x1401E274C (FsRtlSplitBaseMcb.c)
 */

BOOLEAN __stdcall FsRtlSplitLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  __int64 v3; // r9
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r14
  PKGUARDED_MUTEX v11; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v13; // eax
  BOOLEAN v15; // [rsp+68h] [rbp+20h]

  GuardedMutex = Mcb->GuardedMutex;
  v8 = KeAbPreAcquire((ULONG_PTR)Mcb->GuardedMutex, 0LL, 0LL, v3);
  v9 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  GuardedMutex->Owner = KeGetCurrentThread();
  GuardedMutex->OldIrql = CurrentIrql;
  v15 = FsRtlSplitBaseMcb(&Mcb->BaseMcb, Vbn, Amount);
  v11 = Mcb->GuardedMutex;
  v11->Owner = 0LL;
  OldIrql = v11->OldIrql;
  v13 = _InterlockedCompareExchange(&v11->Count, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended(&v11->Count, v13);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v11);
  return v15;
}

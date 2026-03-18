/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x1401E217C
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x1401E23D0 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlLookupLastBaseMcbEntry @ 0x140112148 (FsRtlLookupLastBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  __int64 v3; // r9
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r14
  PKGUARDED_MUTEX v11; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v13; // eax
  BOOLEAN BaseMcbEntry; // [rsp+68h] [rbp+20h]

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
  BaseMcbEntry = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  v11 = Mcb->GuardedMutex;
  v11->Owner = 0LL;
  OldIrql = v11->OldIrql;
  v13 = _InterlockedCompareExchange(&v11->Count, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended(&v11->Count, v13);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v11);
  return BaseMcbEntry;
}

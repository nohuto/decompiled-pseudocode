/*
 * XREFs of FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1401E22A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlLookupLastBaseMcbEntryAndIndex @ 0x140127BEC (FsRtlLookupLastBaseMcbEntryAndIndex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntryAndIndex(
        PLARGE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r14
  PKGUARDED_MUTEX v12; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v14; // eax
  BOOLEAN BaseMcbEntryAndIndex; // [rsp+20h] [rbp-38h]

  GuardedMutex = OpaqueMcb->GuardedMutex;
  v9 = KeAbPreAcquire((ULONG_PTR)OpaqueMcb->GuardedMutex, 0LL, 0LL, (__int64)Index);
  v10 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  GuardedMutex->Owner = KeGetCurrentThread();
  GuardedMutex->OldIrql = CurrentIrql;
  BaseMcbEntryAndIndex = FsRtlLookupLastBaseMcbEntryAndIndex(&OpaqueMcb->BaseMcb, LargeVbn, LargeLbn, Index);
  v12 = OpaqueMcb->GuardedMutex;
  v12->Owner = 0LL;
  OldIrql = v12->OldIrql;
  v14 = _InterlockedCompareExchange(&v12->Count, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended(&v12->Count, v14);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v12);
  return BaseMcbEntryAndIndex;
}

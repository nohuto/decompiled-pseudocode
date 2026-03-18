/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x1401E340C
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x1401E3818 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  ULONG_PTR v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r12
  _QWORD *i; // rbx
  _QWORD *v10; // rcx
  ULONG_PTR v11; // rbx
  unsigned __int8 v12; // di
  signed __int32 v13; // eax

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
  {
    v5 = *(_QWORD *)(v3 + 152);
    v6 = KeAbPreAcquire(v5, 0LL, 0LL, v4);
    v7 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
      ExpAcquireFastMutexContended(v5, v6);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v5 + 48) = CurrentIrql;
  }
  for ( i = *(_QWORD **)(v3 + 88); i != (_QWORD *)(v3 + 88); i = (_QWORD *)*i )
  {
    v10 = i;
    if ( *(_BYTE *)(i[2] + 68LL) )
    {
      i = (_QWORD *)i[1];
      FsRtlpRemoveAndCompleteWaitingIrp(v10);
    }
  }
  if ( !a2 )
  {
    v11 = *(_QWORD *)(v3 + 152);
    *(_QWORD *)(v11 + 8) = 0LL;
    v12 = *(_BYTE *)(v11 + 48);
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v11, v13);
    __writecr8(v12);
    KeAbPostRelease(v11);
  }
}

/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x1401E327C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E2F5C (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x1401E380C (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140073E88 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall FsRtlpCancelReadOnlyOplockIrp(__int64 a1, char a2)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  char v5; // al
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 *i; // rbx
  ULONG_PTR v11; // rbx
  unsigned __int8 v12; // di
  signed __int32 v13; // eax

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v5 = 0;
  if ( !a2 )
  {
    v6 = *(_QWORD *)(v3 + 152);
    v7 = KeAbPreAcquire(v6, 0LL, 0LL, v4);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
      ExpAcquireFastMutexContended(v6, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v6 + 48) = CurrentIrql;
    v5 = 0;
  }
  for ( i = *(__int64 **)(v3 + 40); i != (__int64 *)(v3 + 40); i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (__int64 *)i[1];
      FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, -1073741536, 0);
      v5 = 1;
    }
  }
  if ( v5 )
    FsRtlpComputeShareableOplockState(v3);
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

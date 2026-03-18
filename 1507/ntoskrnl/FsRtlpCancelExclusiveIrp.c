/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x140133958
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x140072918 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x140133948 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E3578 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  ULONG_PTR v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v11; // rcx
  ULONG_PTR v12; // rbx
  unsigned __int8 v13; // di
  signed __int32 v14; // eax

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
  {
    v7 = *(_QWORD *)(v5 + 152);
    v8 = KeAbPreAcquire(v7, 0LL, 0LL, v6);
    v9 = v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v7, 0) )
      ExpAcquireFastMutexContended(v7, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 48) = CurrentIrql;
  }
  if ( *(_QWORD *)v5 && *(_BYTE *)(*(_QWORD *)v5 + 68LL) )
  {
    FsRtlpModifyThreadPriorities(v5, 0LL, 0LL);
    FsRtlpClearOwnerThread(v5, 0LL);
    *(_BYTE *)(v5 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 56LL) == v5 )
      *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v5 + 48LL) = -1073741536;
    pIofCompleteRequest(*(PIRP *)v5, 1);
    *(_QWORD *)v5 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 8), 0x746C6644u);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 144) & 0x20 | 1;
    if ( a3 )
    {
      while ( 1 )
      {
        v11 = (_QWORD *)(v5 + 88);
        if ( (_QWORD *)*v11 == v11 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v11);
      }
    }
  }
  if ( !a2 )
  {
    v12 = *(_QWORD *)(v5 + 152);
    *(_QWORD *)(v12 + 8) = 0LL;
    v13 = *(_BYTE *)(v12 + 48);
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)v12, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v12, v14);
    __writecr8(v13);
    KeAbPostRelease(v12);
  }
}

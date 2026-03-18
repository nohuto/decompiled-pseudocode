/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x140103A90
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x140103A80 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401AD32C (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD **v7; // rcx

  v5 = *(_QWORD **)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex((PFAST_MUTEX)v5[19]);
  if ( *v5 && *(_BYTE *)(*v5 + 68LL) )
  {
    FsRtlpModifyThreadPriorities((__int64)v5, 0LL, 0);
    FsRtlpClearOwnerThread((__int64)v5, 0LL);
    *((_BYTE *)v5 + 32) = 0;
    if ( *(_QWORD **)(*v5 + 56LL) == v5 )
      *(_QWORD *)(*v5 + 56LL) = 0LL;
    *(_DWORD *)(*v5 + 48LL) = -1073741536;
    LOBYTE(v6) = 1;
    pIofCompleteRequest(*v5, v6);
    *v5 = 0LL;
    ObfDereferenceObjectWithTag((PVOID)v5[1], 0x746C6644u);
    v5[1] = 0LL;
    *((_DWORD *)v5 + 36) = v5[18] & 0x20 | 1;
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = (_QWORD **)(v5 + 11);
        if ( *v7 == v7 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v7);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v5[19]);
}

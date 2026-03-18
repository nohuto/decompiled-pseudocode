/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x1401B96F8
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401B9498 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x1401B9B14 (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400781F0 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400ACA8C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall FsRtlpCancelReadOnlyOplockIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // r14
  __int64 *i; // rbx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v4 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(__int64 **)(v3 + 40); i != (__int64 *)(v3 + 40); i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (__int64 *)i[1];
      FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, -1073741536, 0);
      v4 = 1;
    }
  }
  if ( v4 )
    FsRtlpComputeShareableOplockState(v3);
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}

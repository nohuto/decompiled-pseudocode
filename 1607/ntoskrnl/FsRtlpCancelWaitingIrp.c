/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x1401B97D0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1400B42DC (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x1401B9CC0 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A26C4 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 88); i != (_QWORD *)(v3 + 88); i = (_QWORD *)*i )
  {
    v5 = i;
    if ( *(_BYTE *)(i[2] + 68LL) )
    {
      i = (_QWORD *)i[1];
      FsRtlpRemoveAndCompleteWaitingIrp(v5);
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}

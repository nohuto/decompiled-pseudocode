/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x1400C90E0
 * Callers:
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1400C91E4 (FsRtlpOplockRHIrpCancelRoutine.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  int v6; // r8d
  char v7; // r14
  _QWORD *v8; // rsi
  _QWORD *i; // rbx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v7 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v8 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD **)(v5 + 56); i != v8; i = (_QWORD *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        LOBYTE(v6) = 1;
        FsRtlpRemoveAndBreakRHIrp((PVOID)*i, v5, v6, -1073741536, 0);
        v7 = 1;
      }
    }
  }
  if ( v7 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (_QWORD *)*v8 == v8 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}

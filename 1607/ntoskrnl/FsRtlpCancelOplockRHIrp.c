/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x1400A2450
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1400A2440 (FsRtlpOplockRHIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400777A4 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400781F0 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400A258C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9B20 (FsRtlpRemoveAndCompleteRHIrp.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  char v6; // r14
  _QWORD *v7; // rsi
  _QWORD *i; // rbx
  int v9; // eax
  _QWORD *v10; // rcx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v6 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v7 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD **)(v5 + 56); i != v7; i = (_QWORD *)*i )
  {
    if ( !i[7] && *(_BYTE *)(i[2] + 68LL) )
    {
      i = (_QWORD *)i[1];
      v9 = EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails);
      v10 = (_QWORD *)*i;
      if ( v9 )
        FsRtlpRemoveAndCompleteRHIrp(v10, 0, 0, 0);
      else
        FsRtlpRemoveAndBreakRHIrp(v10, v5, 1, -1073741536, 0, 0, 0, 0);
      v6 = 1;
    }
  }
  if ( v6 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (_QWORD *)*v7 == v7 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}

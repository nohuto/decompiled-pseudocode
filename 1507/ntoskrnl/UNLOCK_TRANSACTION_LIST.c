/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x14055789C
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void UNLOCK_TRANSACTION_LIST()
{
  signed __int32 v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v2; // ax

  qword_14034D768 = 0LL;
  v0 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v0 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v0);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v2;
  if ( !v2
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

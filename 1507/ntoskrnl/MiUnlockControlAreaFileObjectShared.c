/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x1400FB898
 * Callers:
 *     MiTrimSection @ 0x1400FA79C (MiTrimSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v2; // rbx
  __int16 v3; // ax

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 112;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 112), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 112));
  KeAbPostRelease(v2);
  v3 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v3;
  if ( !v3 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}

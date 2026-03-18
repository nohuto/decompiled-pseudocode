/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140109320
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v2; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v4; // ax

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)BugCheckParameter2, v2);
  KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

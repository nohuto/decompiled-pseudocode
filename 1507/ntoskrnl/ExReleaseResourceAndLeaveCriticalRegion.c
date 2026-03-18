/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x1400C89D0
 * Callers:
 *     VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x14074C394 (VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot.c)
 * Callees:
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  __int16 v2; // cx
  $CD287064E7C9F7953DE243E927CFCB99 *v3; // rcx

  ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v2;
  if ( !v2 )
  {
    v3 = &CurrentThread->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v3->ApcState.ApcListHead[0].Flink != v3
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v3);
    }
  }
}

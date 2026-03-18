/*
 * XREFs of KeLeaveCriticalRegion @ 0x14004F890
 * Callers:
 *     VerifierKeLeaveCriticalRegion @ 0x14074839C (VerifierKeLeaveCriticalRegion.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax
  __int16 v1; // cx
  $CD287064E7C9F7953DE243E927CFCB99 *v2; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v1;
  if ( !v1 )
  {
    v2 = &CurrentThread->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v2->ApcState.ApcListHead[0].Flink != v2
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v2);
    }
  }
}

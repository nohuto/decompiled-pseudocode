/*
 * XREFs of KeLeaveGuardedRegion @ 0x1400F0740
 * Callers:
 *     VerifierKeLeaveGuardedRegion @ 0x1407421AC (VerifierKeLeaveGuardedRegion.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned int)++CurrentThread->SpecialApcDisable;
  if ( !(_WORD)v1
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v1);
  }
}

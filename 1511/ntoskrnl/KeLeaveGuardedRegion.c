/*
 * XREFs of KeLeaveGuardedRegion @ 0x1400775E0
 * Callers:
 *     VerifierKeLeaveGuardedRegion @ 0x1406C09B4 (VerifierKeLeaveGuardedRegion.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned int)++CurrentThread->SpecialApcDisable;
  if ( !(_WORD)v1
    && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v1);
  }
}

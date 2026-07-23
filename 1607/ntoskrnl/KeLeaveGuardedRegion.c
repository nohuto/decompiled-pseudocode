/*
 * XREFs of KeLeaveGuardedRegion @ 0x1400C58F0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned int)++CurrentThread->SpecialApcDisable;
  if ( !(_WORD)v1
    && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v1);
  }
}

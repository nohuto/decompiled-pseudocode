/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1404B95BC
 * Callers:
 *     <none>
 * Callees:
 *     ExpWnfDispatchKernelSubscription @ 0x1404B9600 (ExpWnfDispatchKernelSubscription.c)
 */

void ExpWnfWorkItemRoutine()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  do
  {
    _InterlockedAnd((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription();
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0, 1) != 1 );
  KeLeaveCriticalRegion();
}

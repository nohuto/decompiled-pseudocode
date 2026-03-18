/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1404C5F7C
 * Callers:
 *     <none>
 * Callees:
 *     ExpWnfDeleteSubscription @ 0x1403E2034 (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, PsInitialSystemProcess);
  KeLeaveCriticalRegion();
}

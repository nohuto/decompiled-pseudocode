/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1404C19F8
 * Callers:
 *     <none>
 * Callees:
 *     ExpWnfDeleteSubscription @ 0x1404C1E2C (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  KeLeaveCriticalRegion();
}

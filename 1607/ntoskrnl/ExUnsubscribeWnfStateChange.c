/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1404AD728
 * Callers:
 *     <none>
 * Callees:
 *     ExpWnfDeleteSubscription @ 0x1404ADB5C (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  KeLeaveCriticalRegion();
}

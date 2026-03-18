/*
 * XREFs of KeEnterCriticalRegion @ 0x14004E6B0
 * Callers:
 *     VerifierKeEnterCriticalRegion @ 0x14074812C (VerifierKeEnterCriticalRegion.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}

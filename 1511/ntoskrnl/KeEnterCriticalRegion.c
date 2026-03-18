/*
 * XREFs of KeEnterCriticalRegion @ 0x140042B40
 * Callers:
 *     VerifierKeEnterCriticalRegion @ 0x1406C5EF8 (VerifierKeEnterCriticalRegion.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}

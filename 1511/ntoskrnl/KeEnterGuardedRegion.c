/*
 * XREFs of KeEnterGuardedRegion @ 0x140077620
 * Callers:
 *     VerifierKeEnterGuardedRegion @ 0x1406C0974 (VerifierKeEnterGuardedRegion.c)
 * Callees:
 *     <none>
 */

void KeEnterGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
}

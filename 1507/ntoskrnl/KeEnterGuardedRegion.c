/*
 * XREFs of KeEnterGuardedRegion @ 0x1400F0780
 * Callers:
 *     VerifierKeEnterGuardedRegion @ 0x14074216C (VerifierKeEnterGuardedRegion.c)
 * Callees:
 *     <none>
 */

void KeEnterGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
}

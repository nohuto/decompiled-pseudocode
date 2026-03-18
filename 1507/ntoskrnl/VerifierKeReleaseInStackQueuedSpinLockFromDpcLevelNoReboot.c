/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot @ 0x140748740
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  pXdvKeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
}

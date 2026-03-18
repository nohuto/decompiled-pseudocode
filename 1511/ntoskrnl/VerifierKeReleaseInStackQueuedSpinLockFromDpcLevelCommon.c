/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1406C631C
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1406C62E4 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot @ 0x1406C6358 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  pXdvKeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
}

/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1406C62A0
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1406C6268 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot @ 0x1406C62DC (VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  pXdvKeReleaseInStackQueuedSpinLockForDpc(a1);
}

/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot @ 0x1407486A8
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  pXdvKeReleaseInStackQueuedSpinLockForDpc(a1);
}

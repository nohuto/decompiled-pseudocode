/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x14074864C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 */

void __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+38h] [rbp+0h]

  VfDeadlockReleaseResource(
    (unsigned __int64)a1->LockQueue.Lock & 0xFFFFFFFFFFFFFFFCuLL,
    6LL,
    KeGetCurrentThread(),
    retaddr);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  pXdvKeReleaseInStackQueuedSpinLockForDpc(a1);
}

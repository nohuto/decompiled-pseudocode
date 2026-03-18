/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1407479AC
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140200D68 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpc(KSPIN_LOCK *a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  struct _KLOCK_QUEUE_HANDLE *v4; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ++dword_140331D08;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  v4 = (struct _KLOCK_QUEUE_HANDLE *)MmHighestUserAddress;
  if ( a1 < MmHighestUserAddress || a1 + 1 < a1 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
    v4 = (struct _KLOCK_QUEUE_HANDLE *)MmHighestUserAddress;
  }
  if ( a2 < v4 || &a2[1] < a2 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a2, 0x18uLL, 0LL);
  pXdvKeAcquireInStackQueuedSpinLockForDpc(a1, a2);
  return VfDeadlockAcquireResource((_DWORD)a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}

/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140747A78
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 */

void __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot(KSPIN_LOCK *a1, struct _KLOCK_QUEUE_HANDLE *a2)
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
}

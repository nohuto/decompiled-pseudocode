/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1406C6208
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x1406C61D0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x1406C6360 (VerifierKeReleaseInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1406C6F78 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockCommon(ULONG_PTR a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rbx

  v2 = (struct _KLOCK_QUEUE_HANDLE *)a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, a1, 0LL);
  LOBYTE(a2) = v2->OldIrql;
  LOBYTE(a1) = CurrentIrql;
  v4 = ViKeLowerIrqlSanityChecks(a1, a2);
  pXdvKeReleaseInStackQueuedSpinLock(v2);
  return ViKeIrqlLogCommon(v4, 1LL);
}

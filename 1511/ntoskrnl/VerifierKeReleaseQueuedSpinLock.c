/*
 * XREFs of VerifierKeReleaseQueuedSpinLock @ 0x1406C09EC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1406C6F78 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeReleaseQueuedSpinLock(ULONG_PTR a1, __int64 a2)
{
  KIRQL v2; // di
  KSPIN_LOCK_QUEUE_NUMBER v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rbx

  v2 = a2;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( KernelVerifier == 1 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x36uLL, CurrentIrql, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  LOBYTE(a1) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(a1, a2);
  pXdvKeReleaseQueuedSpinLock(v3, v2);
  return ViKeIrqlLogCommon(v5, 1LL);
}

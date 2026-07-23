/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140712258
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140712220 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x1407123B0 (VerifierKeReleaseInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140712FC8 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockCommon(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rbx

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, a1, 0LL);
  LOBYTE(a2) = *(_BYTE *)(v2 + 16);
  LOBYTE(a1) = CurrentIrql;
  v4 = ViKeLowerIrqlSanityChecks(a1, a2);
  pXdvKeReleaseInStackQueuedSpinLock(v2);
  return ViKeIrqlLogCommon(v4, 1LL);
}

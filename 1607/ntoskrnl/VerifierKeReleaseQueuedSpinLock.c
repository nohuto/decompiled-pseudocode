/*
 * XREFs of VerifierKeReleaseQueuedSpinLock @ 0x14070CA84
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140712FC8 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeReleaseQueuedSpinLock(ULONG_PTR a1, __int64 a2)
{
  char v2; // di
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx

  v2 = a2;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( KernelVerifier == 1 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x36uLL, CurrentIrql, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  LOBYTE(a1) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(a1, a2);
  LOBYTE(v6) = v2;
  v7 = v5;
  pXdvKeReleaseQueuedSpinLock(v3, v6);
  return ViKeIrqlLogCommon(v7, 1LL);
}

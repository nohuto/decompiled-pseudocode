/*
 * XREFs of VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x140717D3C
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x140718304 (ViResourceAcquireSanityChecks.c)
 */

__int64 __fastcall VerifierExAcquireSharedWaitForExclusiveNoReboot(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  return pXdvExAcquireSharedWaitForExclusive(a1, v4);
}

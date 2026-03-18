/*
 * XREFs of VerifierExAcquireResourceSharedLiteNoReboot @ 0x140717BEC
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x140718304 (ViResourceAcquireSanityChecks.c)
 */

__int64 __fastcall VerifierExAcquireResourceSharedLiteNoReboot(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  return pXdvExAcquireResourceSharedLite(a1, v4);
}

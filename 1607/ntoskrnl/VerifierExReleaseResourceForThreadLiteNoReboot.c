/*
 * XREFs of VerifierExReleaseResourceForThreadLiteNoReboot @ 0x140718184
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1407183AC (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceForThreadLiteNoReboot(ULONG_PTR a1, __int64 a2)
{
  ViResourceReleaseSanityChecks(a1);
  return pXdvExReleaseResourceForThreadLite(a1, a2);
}

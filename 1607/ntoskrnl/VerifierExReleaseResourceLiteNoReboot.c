/*
 * XREFs of VerifierExReleaseResourceLiteNoReboot @ 0x1407181B0
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1407183AC (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceLiteNoReboot(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return pXdvExReleaseResourceLite(a1);
}

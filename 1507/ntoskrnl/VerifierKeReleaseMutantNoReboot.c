/*
 * XREFs of VerifierKeReleaseMutantNoReboot @ 0x1407488B8
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

LONG __fastcall VerifierKeReleaseMutantNoReboot(
        struct _KMUTANT *a1,
        KPRIORITY Increment,
        BOOLEAN Abandoned,
        BOOLEAN Wait)
{
  if ( a1 < MmHighestUserAddress || &a1[1] < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 0x38uLL, 0LL);
  return pXdvKeReleaseMutant(a1, Increment, Abandoned, Wait);
}

/*
 * XREFs of VerifierKeReleaseMutexNoReboot @ 0x14074899C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

LONG __fastcall VerifierKeReleaseMutexNoReboot(struct _KMUTANT *a1, BOOLEAN a2)
{
  if ( a1 < MmHighestUserAddress || &a1[1] < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 0x38uLL, 0LL);
  return pXdvKeReleaseMutex(a1, a2);
}

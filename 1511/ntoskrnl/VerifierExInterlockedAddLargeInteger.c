/*
 * XREFs of VerifierExInterlockedAddLargeInteger @ 0x1406C0390
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedAddLargeInteger @ 0x1400E2338 (ExInterlockedAddLargeInteger.c)
 */

LARGE_INTEGER __fastcall VerifierExInterlockedAddLargeInteger(LARGE_INTEGER *a1, LARGE_INTEGER a2, KSPIN_LOCK *a3)
{
  return pXdvExInterlockedAddLargeInteger(a1, a2, a3);
}

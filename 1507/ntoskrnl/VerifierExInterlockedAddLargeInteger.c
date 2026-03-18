/*
 * XREFs of VerifierExInterlockedAddLargeInteger @ 0x140741B84
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedAddLargeInteger @ 0x14012F2BC (ExInterlockedAddLargeInteger.c)
 */

LARGE_INTEGER __fastcall VerifierExInterlockedAddLargeInteger(LARGE_INTEGER *a1, LARGE_INTEGER a2, KSPIN_LOCK *a3)
{
  return pXdvExInterlockedAddLargeInteger(a1, a2, a3);
}

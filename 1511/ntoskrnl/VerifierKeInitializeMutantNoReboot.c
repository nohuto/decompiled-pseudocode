/*
 * XREFs of VerifierKeInitializeMutantNoReboot @ 0x1406C5FD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VerifierKeInitializeMutantNoReboot(struct _KMUTANT *a1)
{
  return ViKeInitializeMutantCommon(a1);
}

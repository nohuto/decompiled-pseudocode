/*
 * XREFs of VerifierKeInitializeMutexNoReboot @ 0x1406C5FFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VerifierKeInitializeMutexNoReboot(struct _KMUTANT *a1, ULONG a2)
{
  return ViKeInitializeMutexCommon(a1, a2);
}

/*
 * XREFs of VerifierZwDeleteKey @ 0x1406C0D44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwDeleteKey(HANDLE KeyHandle)
{
  return pXdvZwDeleteKey(KeyHandle);
}

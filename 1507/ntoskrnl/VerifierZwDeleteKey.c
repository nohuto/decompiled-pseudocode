/*
 * XREFs of VerifierZwDeleteKey @ 0x140742584
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

/*
 * XREFs of VerifierZwFlushKey @ 0x14025AFD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwFlushKey(HANDLE KeyHandle)
{
  return pXdvZwFlushKey(KeyHandle);
}

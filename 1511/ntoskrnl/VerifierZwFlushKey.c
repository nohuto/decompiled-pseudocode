/*
 * XREFs of VerifierZwFlushKey @ 0x14020B938
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

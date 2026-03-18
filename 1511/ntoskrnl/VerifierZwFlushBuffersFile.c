/*
 * XREFs of VerifierZwFlushBuffersFile @ 0x1406C0D54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return pXdvZwFlushBuffersFile(FileHandle, IoStatusBlock);
}

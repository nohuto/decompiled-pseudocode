/*
 * XREFs of VerifierZwSetQuotaInformationFile @ 0x14074262C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  return pXdvZwSetQuotaInformationFile(FileHandle, IoStatusBlock, Buffer, Length);
}

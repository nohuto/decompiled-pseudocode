/*
 * XREFs of ZwSetQuotaInformationFile @ 0x1401537C0
 * Callers:
 *     VerifierZwSetQuotaInformationFile @ 0x1406C0DEC (VerifierZwSetQuotaInformationFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}

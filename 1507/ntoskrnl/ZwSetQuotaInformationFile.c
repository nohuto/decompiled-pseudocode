/*
 * XREFs of ZwSetQuotaInformationFile @ 0x140182130
 * Callers:
 *     VerifierZwSetQuotaInformationFile @ 0x14074262C (VerifierZwSetQuotaInformationFile.c)
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

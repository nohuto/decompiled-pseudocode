/*
 * XREFs of NtSetQuotaInformationFile @ 0x140625F20
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  return IopSetEaOrQuotaInformationFile(FileHandle, (unsigned __int64)IoStatusBlock, (char *)Buffer, Length);
}

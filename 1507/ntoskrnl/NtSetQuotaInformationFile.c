/*
 * XREFs of NtSetQuotaInformationFile @ 0x140676C0C
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  return IopSetEaOrQuotaInformationFile(FileHandle, (ULONG64)IoStatusBlock, (char *)Buffer, Length);
}

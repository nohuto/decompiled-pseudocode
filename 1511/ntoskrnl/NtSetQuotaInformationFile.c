/*
 * XREFs of NtSetQuotaInformationFile @ 0x1405FC2FC
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  return IopSetEaOrQuotaInformationFile(FileHandle, (ULONG64)IoStatusBlock, (char *)Buffer, Length);
}

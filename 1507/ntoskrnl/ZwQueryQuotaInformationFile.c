/*
 * XREFs of ZwQueryQuotaInformationFile @ 0x1401817F0
 * Callers:
 *     VerifierZwQueryQuotaInformationFile @ 0x1407425E4 (VerifierZwQueryQuotaInformationFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}

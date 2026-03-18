/*
 * XREFs of VerifierZwQueryQuotaInformationFile @ 0x1407425E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwQueryQuotaInformationFile(
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
  return pXdvZwQueryQuotaInformationFile(
           FileHandle,
           IoStatusBlock,
           Buffer,
           Length,
           ReturnSingleEntry,
           SidList,
           SidListLength,
           StartSid,
           RestartScan);
}

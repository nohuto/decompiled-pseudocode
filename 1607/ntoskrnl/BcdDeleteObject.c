/*
 * XREFs of BcdDeleteObject @ 0x1406D216C
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1406758B4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1406D3944 (BiBindEfiEntries.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1401263AC (BiSetFirmwareModifiedFromObject.c)
 *     BiIsFirmwareApplication @ 0x14012E594 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdDeleteObject(HANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsFirmwareApplication((__int64)BcdObjectHandle) )
      BiSetFirmwareModifiedFromObject((__int64)BcdObjectHandle);
    v4 = BiDeleteKey((__int64)BcdObjectHandle);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}

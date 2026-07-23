/*
 * XREFs of BcdCreateObject @ 0x1406D20DC
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1406758B4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14012E4F0 (BiSetFirmwareModified.c)
 *     BiIsFirmwareApplication @ 0x14012E594 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 *     BiCreateObject @ 0x1406D246C (BiCreateObject.c)
 */

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  NTSTATUS Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(BcdStoreHandle, Identifier, Description, 0LL, BcdObjectHandle);
    if ( Object >= 0 && BiIsFirmwareApplication((__int64)*BcdObjectHandle) )
      BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}

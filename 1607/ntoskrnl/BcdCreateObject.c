/*
 * XREFs of BcdCreateObject @ 0x1406D1FA4
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14012DF80 (BiSetFirmwareModified.c)
 *     BiIsFirmwareApplication @ 0x14012E024 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 *     BiCreateObject @ 0x1406D2334 (BiCreateObject.c)
 */

NTSTATUS __fastcall BcdCreateObject(__int64 a1, int a2, int a3, __int64 *a4)
{
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  int Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 && BiIsFirmwareApplication(*a4) )
      BiSetFirmwareModified(a1, 1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}

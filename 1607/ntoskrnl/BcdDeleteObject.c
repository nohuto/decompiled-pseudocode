/*
 * XREFs of BcdDeleteObject @ 0x1406D2034
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1406D380C (BiBindEfiEntries.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x140125E3C (BiSetFirmwareModifiedFromObject.c)
 *     BiIsFirmwareApplication @ 0x14012E024 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __fastcall BcdDeleteObject(__int64 a1)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  int v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsFirmwareApplication(a1) )
      BiSetFirmwareModifiedFromObject(a1);
    v4 = BiDeleteKey(a1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}

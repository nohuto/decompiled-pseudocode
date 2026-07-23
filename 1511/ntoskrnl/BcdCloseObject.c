/*
 * XREFs of BcdCloseObject @ 0x1404FCD44
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14021682C (WheaPersistOfflinedPage.c)
 *     PopBcdSetPendingResume @ 0x1404F57FC (PopBcdSetPendingResume.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     PopBcdClearPendingResume @ 0x1404FBDA4 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x1404FBEB0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14063D040 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140654A4C (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14068DC70 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14068EC74 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x14068F154 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x14068FB74 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1406914FC (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdObjectHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    BiCloseKey(BcdObjectHandle);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}

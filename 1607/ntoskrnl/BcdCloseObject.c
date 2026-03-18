/*
 * XREFs of BcdCloseObject @ 0x14053D664
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x1405349E4 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x14053C630 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14053C72C (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140693FEC (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1406D24D0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D33E0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D38D4 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1406D4310 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1406D4A80 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1406D5CF0 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdCloseObject(HANDLE Handle)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)Handle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    BiCloseKey(Handle);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}

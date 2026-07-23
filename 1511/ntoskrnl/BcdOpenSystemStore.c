/*
 * XREFs of BcdOpenSystemStore @ 0x1404FB6B8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14021682C (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x140654A4C (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdOpenSystemStore(PHANDLE BcdStoreHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx

  result = BiAcquireBcdSyncMutant(0LL);
  if ( result >= 0 )
  {
    v3 = BiOpenSystemStore(BcdStoreHandle);
    BiReleaseBcdSyncMutant(0LL);
    return v3;
  }
  return result;
}

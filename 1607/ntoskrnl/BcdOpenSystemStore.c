/*
 * XREFs of BcdOpenSystemStore @ 0x14053C46C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1406940D0 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
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

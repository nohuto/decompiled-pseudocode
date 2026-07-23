/*
 * XREFs of BcdCloseStore @ 0x14053CDE8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     BiLoadSystemStore @ 0x14053BB20 (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1406940D0 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x14012E640 (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x14053BC34 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x14053D460 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14053D918 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  NTSTATUS result; // eax
  char v5; // bl
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle) )
    {
      v5 = 0;
      if ( BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
        v5 = 4;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v5 |= 2u;
    }
    else
    {
      v5 = 2;
    }
    v6 = BiCloseStore((__int64)BcdStoreHandle, v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  return result;
}

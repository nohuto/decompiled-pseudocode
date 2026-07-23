/*
 * XREFs of BcdCloseStore @ 0x14056E464
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     BiLoadSystemStore @ 0x14056D274 (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     BiCloseStore @ 0x14056D384 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x14056F0BC (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14056F55C (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
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
      v5 = 4;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v5 = 6;
    }
    else
    {
      v5 = 2;
    }
    v6 = BiCloseStore(BcdStoreHandle, v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  return result;
}

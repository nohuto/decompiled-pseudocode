/*
 * XREFs of BcdCloseStore @ 0x1404FBE3C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14021682C (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     BiLoadSystemStore @ 0x1404FACDC (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x140654A4C (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     BiCloseStore @ 0x1404FADEC (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x1404FC61C (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1404FCABC (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
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

/*
 * XREFs of BcdCloseStore @ 0x14053C8A8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     BiLoadSystemStore @ 0x14053B5E0 (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x140693FEC (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x14012E0D0 (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x14053B6F4 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x14053CF20 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14053D3D8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdCloseStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  __int64 result; // rax
  char v5; // bl
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)BiIsSystemStore(a1) )
    {
      v5 = 0;
      if ( BiIsSynchFirmwareEntries(a1) )
        v5 = 4;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v5 |= 2u;
    }
    else
    {
      v5 = 2;
    }
    v6 = BiCloseStore(a1, v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  return result;
}

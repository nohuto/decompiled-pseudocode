/*
 * XREFs of BcdForciblyUnloadStore @ 0x140534100
 * Callers:
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     BiUnloadHiveByHandle @ 0x140534168 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1405342F0 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x14053D918 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdForciblyUnloadStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  NTSTATUS result; // eax
  NTSTATUS v5; // edi
  NTSTATUS v6; // eax
  __int64 v7; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    v5 = 0;
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle) )
      v5 = BiExportStoreAlterationsToFirmware(BcdStoreHandle);
    v6 = BiUnloadHiveByHandle(BcdStoreHandle);
    LOBYTE(v7) = v3;
    if ( v5 >= 0 )
      v5 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v5;
  }
  return result;
}

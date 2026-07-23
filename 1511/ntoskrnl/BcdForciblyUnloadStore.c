/*
 * XREFs of BcdForciblyUnloadStore @ 0x1404F4C48
 * Callers:
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     BiUnloadHiveByHandle @ 0x1404F4CB0 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1404FB850 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x1404FCABC (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
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

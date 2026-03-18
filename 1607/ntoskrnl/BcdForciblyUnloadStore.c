/*
 * XREFs of BcdForciblyUnloadStore @ 0x140533BC0
 * Callers:
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     BiUnloadHiveByHandle @ 0x140533C28 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140533DB0 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x14053D3D8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdForciblyUnloadStore(HANDLE Handle)
{
  __int64 v2; // rcx
  char v3; // si
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)Handle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    v5 = 0;
    if ( (unsigned __int8)BiIsSystemStore(Handle) )
      v5 = BiExportStoreAlterationsToFirmware(Handle);
    v6 = BiUnloadHiveByHandle(Handle);
    LOBYTE(v7) = v3;
    if ( v5 >= 0 )
      v5 = v6;
    BiReleaseBcdSyncMutant(v7);
    return (unsigned int)v5;
  }
  return result;
}

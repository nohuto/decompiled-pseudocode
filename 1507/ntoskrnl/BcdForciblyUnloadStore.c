/*
 * XREFs of BcdForciblyUnloadStore @ 0x140569050
 * Callers:
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     BiUnloadHiveByHandle @ 0x1405690B8 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x14056DDE8 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x14056F55C (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
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

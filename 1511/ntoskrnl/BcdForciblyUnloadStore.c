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

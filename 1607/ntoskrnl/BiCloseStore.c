/*
 * XREFs of BiCloseStore @ 0x14053B6F4
 * Callers:
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BcdCloseStore @ 0x14053C8A8 (BcdCloseStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140124DA8 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x14012DF80 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x14012DFC4 (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x140533C28 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140533DB0 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  int v3; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  char v6; // dl

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = (void *)v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    v3 = BiExportStoreAlterationsToFirmware((__int64)v5);
    if ( v3 >= 0 )
      BiSetFirmwareModified((__int64)v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0);
  else
    BiCloseKey(v5);
  return (unsigned int)v3;
}

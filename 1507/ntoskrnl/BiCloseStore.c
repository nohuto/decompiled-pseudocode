/*
 * XREFs of BiCloseStore @ 0x14056D384
 * Callers:
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 * Callees:
 *     BiUnloadHiveByHandle @ 0x1405690B8 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x14056DDE8 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 */

__int64 __fastcall BiCloseStore(HANDLE Handle, char a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( (a2 & 4) != 0 )
    v2 = BiExportStoreAlterationsToFirmware(Handle);
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(Handle, 0);
  else
    BiCloseKey(Handle);
  return v2;
}

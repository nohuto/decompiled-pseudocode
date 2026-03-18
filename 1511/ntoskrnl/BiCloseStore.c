/*
 * XREFs of BiCloseStore @ 0x1404FADEC
 * Callers:
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BcdCloseStore @ 0x1404FBE3C (BcdCloseStore.c)
 * Callees:
 *     BiUnloadHiveByHandle @ 0x1404F4CB0 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1404FB850 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
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

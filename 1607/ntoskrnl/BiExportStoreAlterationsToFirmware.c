/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140533DB0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140533BC0 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14053B6F4 (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14053C0EC (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x1406D4DB4 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(__int64 a1)
{
  int v2; // eax
  int v4; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( !v2 )
    return 0LL;
  v4 = v2 - 1;
  if ( !v4 )
    return BiExportStoreAlterationsToEfi(a1);
  if ( v4 == 1 )
    return 0LL;
  return 3221225659LL;
}

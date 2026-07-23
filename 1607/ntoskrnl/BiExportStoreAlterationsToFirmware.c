/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x1405342F0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140534100 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14053BC34 (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14053C62C (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x1406D4EEC (BiExportStoreAlterationsToEfi.c)
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

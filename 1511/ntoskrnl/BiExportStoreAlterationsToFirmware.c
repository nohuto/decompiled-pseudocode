/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x1404FB850
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1404F4C48 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x1404FADEC (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1404FB870 (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x1406905FC (BiExportStoreAlterationsToEfi.c)
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

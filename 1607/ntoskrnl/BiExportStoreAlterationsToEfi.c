/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x1406D4EEC
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x1405342F0 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 *     BiExportBcdObjects @ 0x1406D4AD4 (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1406D4F58 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(_QWORD *a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  const GUID *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[1] = (const GUID *)v7;
  v7[0] = (const GUID *)v7;
  v3 = BiBuildIdentifierList(a1, a2, v7);
  if ( v3 >= 0 )
  {
    v4 = BiExportBcdObjects(a1, v7);
    if ( v4 < 0 )
      v3 = v4;
    v5 = BiExportEfiBootManager(a1, (__int64)v7);
    if ( v5 < 0 )
      v3 = v5;
  }
  BiFreeIdentifierList(v7);
  return (unsigned int)v3;
}

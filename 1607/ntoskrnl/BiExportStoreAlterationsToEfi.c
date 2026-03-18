/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x1406D4DB4
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140533DB0 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 *     BiExportBcdObjects @ 0x1406D499C (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x1406D4A80 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1406D4E20 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(_QWORD *a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[1] = (__int64)v7;
  v7[0] = (__int64)v7;
  v3 = BiBuildIdentifierList(a1, a2, v7);
  if ( v3 >= 0 )
  {
    v4 = BiExportBcdObjects((__int64)a1, v7);
    if ( v4 < 0 )
      v3 = v4;
    v5 = BiExportEfiBootManager((__int64)a1, (__int64)v7);
    if ( v5 < 0 )
      v3 = v5;
  }
  BiFreeIdentifierList(v7);
  return (unsigned int)v3;
}

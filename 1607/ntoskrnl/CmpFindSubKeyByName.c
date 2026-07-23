/*
 * XREFs of CmpFindSubKeyByName @ 0x1405603A4
 * Callers:
 *     CmpSortDriverList @ 0x1407AF920 (CmpSortDriverList.c)
 *     CmpFindGroupOrderList @ 0x1407AFA98 (CmpFindGroupOrderList.c)
 *     CmpFindDrivers @ 0x1407B03C8 (CmpFindDrivers.c)
 *     CmpIsLoadType @ 0x1407B04F8 (CmpIsLoadType.c)
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x1407CDB80 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x1407CDC40 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1407CDCF0 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, __m128i *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}

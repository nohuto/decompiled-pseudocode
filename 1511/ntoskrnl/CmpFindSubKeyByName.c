/*
 * XREFs of CmpFindSubKeyByName @ 0x1405239F8
 * Callers:
 *     CmpSortDriverList @ 0x140753EA8 (CmpSortDriverList.c)
 *     CmpFindGroupOrderList @ 0x140754014 (CmpFindGroupOrderList.c)
 *     CmpFindDrivers @ 0x140754D08 (CmpFindDrivers.c)
 *     CmpIsLoadType @ 0x140754E2C (CmpIsLoadType.c)
 *     CmGetSystemControlValues @ 0x140754FCC (CmGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x14078238C (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140782448 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1407824E8 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, const UNICODE_STRING *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}

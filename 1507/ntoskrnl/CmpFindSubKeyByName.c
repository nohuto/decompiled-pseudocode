/*
 * XREFs of CmpFindSubKeyByName @ 0x140590DF0
 * Callers:
 *     CmpFindPathByNameEx @ 0x1401DFBAC (CmpFindPathByNameEx.c)
 *     CmpSortDriverList @ 0x1407BA9C0 (CmpSortDriverList.c)
 *     CmpFindGroupOrderList @ 0x1407BAB2C (CmpFindGroupOrderList.c)
 *     CmpFindDrivers @ 0x1407BB424 (CmpFindDrivers.c)
 *     CmpIsLoadType @ 0x1407BB548 (CmpIsLoadType.c)
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x1407F8920 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x1407F89DC (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1407F8A7C (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}

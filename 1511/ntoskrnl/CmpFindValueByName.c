/*
 * XREFs of CmpFindValueByName @ 0x1404A8CEC
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmpMarkCurrentProfileDirty @ 0x14051DBB0 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x140521970 (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x140523A10 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     CmpSortDriverList @ 0x140753EA8 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x140754654 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1407547E0 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140754E2C (CmpIsLoadType.c)
 *     CmGetSystemControlValues @ 0x140754FCC (CmGetSystemControlValues.c)
 * Callees:
 *     CmpFindNameInList @ 0x1403F40B0 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+48h] [rbp+10h]

  CmpFindNameInList(a1, a2 + 36);
  return v3;
}

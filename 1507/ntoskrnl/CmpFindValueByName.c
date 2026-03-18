/*
 * XREFs of CmpFindValueByName @ 0x140429D14
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmpFindControlSet @ 0x140590E08 (CmpFindControlSet.c)
 *     CmpMarkCurrentValueDirty @ 0x1405989E8 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405A3950 (CmpMarkCurrentProfileDirty.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     CmpSortDriverList @ 0x1407BA9C0 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x1407BAD70 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1407BAEFC (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407BB548 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407F8760 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}

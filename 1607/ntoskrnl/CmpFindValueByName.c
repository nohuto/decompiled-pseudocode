/*
 * XREFs of CmpFindValueByName @ 0x140402A28
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmpMarkCurrentValueDirty @ 0x14054DF74 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14055C7CC (CmpMarkCurrentProfileDirty.c)
 *     CmpFindControlSet @ 0x14055FE7C (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x140609150 (CmpPreserveSystemHiveData.c)
 *     CmpSortDriverList @ 0x1407AF920 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x1407AFCE0 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1407AFE90 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407B04F8 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407CD9B4 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     CmpFindNameInList @ 0x140402A54 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}

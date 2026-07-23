/*
 * XREFs of CmpFindNameInList @ 0x140401914
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 */

_BOOL8 __fastcall CmpFindNameInList(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}

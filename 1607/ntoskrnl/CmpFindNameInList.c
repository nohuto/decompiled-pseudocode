/*
 * XREFs of CmpFindNameInList @ 0x140402A54
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x140402A28 (CmpFindValueByName.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B080 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FF9F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x140608F88 (CmpMergeKeyValues.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F08C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x140402B1C (CmpFindNameInListWithStatus.c)
 */

_BOOL8 __fastcall CmpFindNameInList(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}

/*
 * XREFs of HvpGetCellContextReinitialize @ 0x14002CF68
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmpFindNameInListCellWithStatus @ 0x140401A80 (CmpFindNameInListCellWithStatus.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     HvIsCellAllocated @ 0x140438890 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x14043EC00 (HvpReleaseCellPaged.c)
 *     CmpCheckLeaf @ 0x14043EC90 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404C4624 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     HvpReleaseCellFlat @ 0x1404CBCC8 (HvpReleaseCellFlat.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140581D00 (CmpKeyNodeStackEntryInitialize.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpAddValueKeyTombstone @ 0x1405FEBF8 (CmpAddValueKeyTombstone.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14060A5A0 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A9A8 (CmpMarkEntireIndexDirty.c)
 *     CmpGetValueForAudit @ 0x14060B408 (CmpGetValueForAudit.c)
 *     CmpValueEnumStackAdvance @ 0x14060B534 (CmpValueEnumStackAdvance.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14060EC9C (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextReinitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)a1 = -1;
  *(_WORD *)(a1 + 4) = 0;
  return result;
}

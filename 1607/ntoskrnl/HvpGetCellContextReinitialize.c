/*
 * XREFs of HvpGetCellContextReinitialize @ 0x14002D3E8
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     HvReallocateCell @ 0x1403FFDEC (HvReallocateCell.c)
 *     CmpFindNameInListWithStatus @ 0x140402B1C (CmpFindNameInListWithStatus.c)
 *     CmpFindNameInListCellWithStatus @ 0x140402BC0 (CmpFindNameInListCellWithStatus.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpQueryKeyDataFromNode @ 0x140438210 (CmpQueryKeyDataFromNode.c)
 *     HvIsCellAllocated @ 0x1404399C0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x14043FD30 (HvpReleaseCellPaged.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x1404402B0 (CmpVEExecuteOpenLogic.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404E1020 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     HvpReleaseCellFlat @ 0x1404E9A6C (HvpReleaseCellFlat.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140581850 (CmpKeyNodeStackEntryInitialize.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpAddValueKeyTombstone @ 0x1405FEB44 (CmpAddValueKeyTombstone.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14060A4EC (CmpKeyEnumStackEntryInitialize.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A8F4 (CmpMarkEntireIndexDirty.c)
 *     CmpGetValueForAudit @ 0x14060B354 (CmpGetValueForAudit.c)
 *     CmpValueEnumStackAdvance @ 0x14060B480 (CmpValueEnumStackAdvance.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14060EBE8 (CmpLightWeightDuplicateParentLists.c)
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

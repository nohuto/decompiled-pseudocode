/*
 * XREFs of ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x180091CAC
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001CB0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x180001F58 (--1CGroupingStoryboard@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeTableData@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x180042310 (-FreeTableData@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@CAXPEAU_RTL_GEN.c)
 */

PVOID __fastcall CStoryboard::UnifiedTargetRect::`scalar deleting destructor'(PVOID Buffer)
{
  struct _RTL_GENERIC_TABLE *v2; // rcx

  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)Buffer + 24);
  CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FreeTableData(v2, Buffer);
  return Buffer;
}

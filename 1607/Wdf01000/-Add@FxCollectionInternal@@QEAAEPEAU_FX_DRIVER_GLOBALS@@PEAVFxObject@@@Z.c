/*
 * XREFs of ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0019BD4
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0015CB0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCollectionAdd @ 0x1C00161C0 (imp_WdfCollectionAdd.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0016B60 (imp_WdfPdoInitAddHardwareID.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0019654 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

char __fastcall FxCollectionInternal::Add(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *Item)
{
  _QWORD *v5; // rax
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v7; // rdx
  char v8; // bl
  unsigned int v9; // edx
  _LIST_ENTRY *Flink; // rcx
  void *Caller; // [rsp+38h] [rbp+0h]

  v5 = FxPoolAllocator(
         FxDriverGlobals,
         &FxDriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x18uLL,
         FxDriverGlobals->Tag,
         Caller);
  if ( !v5 )
    return 0;
  Blink = this->m_ListHead.Blink;
  v7 = (_LIST_ENTRY *)(v5 + 1);
  if ( Blink->Flink != &this->m_ListHead )
    __fastfail(3u);
  v7->Flink = &this->m_ListHead;
  v8 = 1;
  v5[2] = Blink;
  Blink->Flink = v7;
  this->m_ListHead.Blink = v7;
  *v5 = Item;
  v9 = _InterlockedIncrement(&Item->m_Refcnt);
  if ( SLOBYTE(Item->m_ObjectFlags) < 0 )
    Flink = Item[-1].m_ChildEntry.Flink;
  else
    Flink = 0LL;
  if ( Flink )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)Flink,
      this,
      185,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
      TagAddRef,
      v9);
  ++this->m_Count;
  return v8;
}

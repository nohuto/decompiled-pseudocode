/*
 * XREFs of ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C000FCC0
 * Callers:
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0009A8C (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0009F74 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C001A370 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C002B800 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfCollectionAdd @ 0x1C007F200 (imp_WdfCollectionAdd.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
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
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]

  v5 = FxPoolAllocator(
         FxDriverGlobals,
         (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x18uLL,
         FxDriverGlobals->Tag,
         Caller);
  if ( !v5 )
    return 0;
  Blink = this->m_ListHead.Blink;
  v7 = (_LIST_ENTRY *)(v5 + 1);
  v5[1] = &this->m_ListHead;
  v5[2] = Blink;
  if ( Blink->Flink != &this->m_ListHead )
    __fastfail(3u);
  Blink->Flink = v7;
  v8 = 1;
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

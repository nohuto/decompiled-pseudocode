/*
 * XREFs of ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001F830
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0015900 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021DA4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0021FEC (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0027BF0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0028310 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCollectionAdd @ 0x1C0032DF0 (imp_WdfCollectionAdd.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

unsigned __int8 __fastcall FxCollectionInternal::Add(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *Item)
{
  _QWORD *v5; // rax
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v7; // rdx
  unsigned int v8; // edx
  _LIST_ENTRY *Flink; // rcx
  void *Caller; // [rsp+38h] [rbp+0h]

  v5 = FxPoolAllocator(
         FxDriverGlobals,
         &FxDriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x18uLL,
         FxDriverGlobals->Tag,
         Caller);
  if ( v5 )
  {
    Blink = this->m_ListHead.Blink;
    v7 = (_LIST_ENTRY *)(v5 + 1);
    v5[1] = &this->m_ListHead;
    v5[2] = Blink;
    if ( Blink->Flink != &this->m_ListHead )
      __fastfail(3u);
    Blink->Flink = v7;
    this->m_ListHead.Blink = v7;
    *v5 = Item;
    v8 = _InterlockedIncrement(&Item->m_Refcnt);
    if ( SLOBYTE(Item->m_ObjectFlags) < 0 )
    {
      Flink = Item[-1].m_ChildEntry.Flink;
      if ( Flink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Flink,
          this,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
          TagAddRef,
          v8);
    }
    ++this->m_Count;
    LOBYTE(v5) = 1;
  }
  return (unsigned __int8)v5;
}

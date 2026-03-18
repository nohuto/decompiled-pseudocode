/*
 * XREFs of ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005D418
 * Callers:
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0080E1C (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 */

FxCollectionEntry *__fastcall FxCollectionInternal::AllocateEntry(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]

  return (FxCollectionEntry *)FxPoolAllocator(
                                FxDriverGlobals,
                                (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0x18uLL,
                                FxDriverGlobals->Tag,
                                Caller);
}

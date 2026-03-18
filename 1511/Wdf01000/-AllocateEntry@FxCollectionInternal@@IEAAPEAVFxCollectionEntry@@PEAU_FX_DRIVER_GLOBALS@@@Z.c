/*
 * XREFs of ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00573C0
 * Callers:
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0073908 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 */

FxCollectionEntry *__fastcall FxCollectionInternal::AllocateEntry(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  void *Caller; // [rsp+38h] [rbp+0h]

  return (FxCollectionEntry *)FxPoolAllocator(
                                FxDriverGlobals,
                                &FxDriverGlobals->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0x18uLL,
                                FxDriverGlobals->Tag,
                                Caller);
}

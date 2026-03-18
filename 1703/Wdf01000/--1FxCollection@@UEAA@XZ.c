/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C001B6F4
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0016E20 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C00308C0 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0030940 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  this->__vftable = (FxCollection_vtbl *)FxIoResList::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this);
}

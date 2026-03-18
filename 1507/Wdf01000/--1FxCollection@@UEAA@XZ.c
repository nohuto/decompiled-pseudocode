/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C001EB84
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0009A50 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C0009F30 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C000FD6C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  this->__vftable = (FxCollection_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this);
}

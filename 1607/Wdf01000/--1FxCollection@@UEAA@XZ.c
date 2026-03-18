/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C0019408
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0014CC0 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C00198B0 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0019C80 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d

  this->__vftable = (FxCollection_vtbl *)&FxCollection::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this, v2, v3);
}

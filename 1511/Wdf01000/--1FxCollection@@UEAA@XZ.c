/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C00249E4
 * Callers:
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C0021D60 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0021FB0 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C001F8C4 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d

  this->__vftable = (FxCollection_vtbl *)&FxIoResList::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this, v2, v3);
}

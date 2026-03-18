/*
 * XREFs of ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C002E560
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C001B738 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxIoTargetRemote *__fastcall FxIoTargetRemote::`scalar deleting destructor'(
        FxIoTargetRemote *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxIoTargetRemote *v5; // rcx

  v3 = a2;
  this->__vftable = (FxIoTargetRemote_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxIoTargetRemote *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}

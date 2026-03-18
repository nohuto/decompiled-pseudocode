/*
 * XREFs of ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C008FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00058A0 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxSystemThread *__fastcall FxSystemThread::`scalar deleting destructor'(
        FxSystemThread *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxSystemThread *v5; // rcx

  v3 = a2;
  this->__vftable = (FxSystemThread_vtbl *)&FxSystemThread::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxSystemThread *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}

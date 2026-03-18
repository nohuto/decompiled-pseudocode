/*
 * XREFs of ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0069D10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxWmiIrpHandler *__fastcall FxWmiIrpHandler::`scalar deleting destructor'(
        FxWmiIrpHandler *this,
        char a2,
        unsigned int a3)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx
  FxWmiIrpHandler *v6; // rcx

  this->__vftable = (FxWmiIrpHandler_vtbl *)&FxWmiIrpHandler::`vftable';
  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
    IoFreeWorkItem(m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v6 = (FxWmiIrpHandler *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v6 = this;
    FxPoolFree(v6);
  }
  return this;
}

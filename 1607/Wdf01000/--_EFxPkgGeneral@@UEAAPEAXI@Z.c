/*
 * XREFs of ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C009CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0019324 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxPkgGeneral *__fastcall FxPkgGeneral::`vector deleting destructor'(FxPkgGeneral *this, char a2, unsigned int a3)
{
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v7; // rax
  FxPkgGeneral *v8; // rcx

  this->__vftable = (FxPkgGeneral_vtbl *)&FxPkgGeneral::`vftable';
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  while ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Flink = p_m_FileObjectInfoHeadList->Flink;
    v7 = p_m_FileObjectInfoHeadList->Flink->Flink;
    if ( p_m_FileObjectInfoHeadList->Flink->Blink != p_m_FileObjectInfoHeadList || v7->Blink != Flink )
      __fastfail(3u);
    p_m_FileObjectInfoHeadList->Flink = v7;
    v7->Blink = p_m_FileObjectInfoHeadList;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxPoolFree(Flink);
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v8 = (FxPkgGeneral *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v8 = this;
    FxPoolFree(v8);
  }
  return this;
}

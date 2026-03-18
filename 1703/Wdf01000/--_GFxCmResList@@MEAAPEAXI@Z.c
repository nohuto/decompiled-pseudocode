/*
 * XREFs of ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C00308C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C001B6F4 (--1FxCollection@@UEAA@XZ.c)
 */

FxCmResList *__fastcall FxCmResList::`scalar deleting destructor'(FxCmResList *this, char a2)
{
  FxCmResList *v4; // rcx

  this->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
  FxCollection::~FxCollection(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxCmResList *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}

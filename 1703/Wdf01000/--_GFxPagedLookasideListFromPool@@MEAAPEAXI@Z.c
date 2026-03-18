/*
 * XREFs of ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C007EC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxPagedLookasideListFromPool *__fastcall FxPagedLookasideListFromPool::`scalar deleting destructor'(
        FxPagedLookasideListFromPool *this,
        char a2,
        unsigned int a3)
{
  bool v3; // zf
  FxPagedLookasideListFromPool *v6; // rcx

  v3 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxPagedLookasideListFromPool_vtbl *)FxPagedLookasideListFromPool::`vftable';
  if ( !v3 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  if ( this->m_RawBufferSize )
    ExDeletePagedLookasideList(&this->m_PoolLookaside);
  this->__vftable = (FxPagedLookasideListFromPool_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v6 = (FxPagedLookasideListFromPool *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v6 = this;
    FxPoolFree(v6);
  }
  return this;
}

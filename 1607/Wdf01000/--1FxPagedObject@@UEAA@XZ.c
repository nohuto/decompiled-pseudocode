/*
 * XREFs of ??1FxPagedObject@@UEAA@XZ @ 0x1C006263C
 * Callers:
 *     ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x1C0080720 (--_GFxPagedObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxPagedObject::~FxPagedObject(FxPagedObject *this, unsigned int a2, unsigned int a3)
{
  MxPagedLock *m_Lock; // rcx

  this->__vftable = (FxPagedObject_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
  m_Lock = this->m_Lock;
  if ( m_Lock )
  {
    FxPoolFree(m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this, a2, a3);
}

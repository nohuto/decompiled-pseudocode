/*
 * XREFs of ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C0073B20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00090B0 (--1FxObject@@UEAA@XZ.c)
 */

FxSpinLock *__fastcall FxSpinLock::`scalar deleting destructor'(FxSpinLock *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxSpinLock *v5; // rcx

  v3 = a2;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxSpinLock *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}

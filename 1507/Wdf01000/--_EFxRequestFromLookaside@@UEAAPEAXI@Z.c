/*
 * XREFs of ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C0076FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C005C624 (--1FxRequestBase@@MEAA@XZ.c)
 */

FxRequestBase *__fastcall FxRequestFromLookaside::`vector deleting destructor'(
        FxRequestBase *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxRequestBase *v5; // rcx

  v3 = a2;
  FxRequestBase::~FxRequestBase(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxRequestBase *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}

/*
 * XREFs of ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C00777E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C0077700 (--1FxTimer@@UEAA@XZ.c)
 */

FxTimer *__fastcall FxTimer::`vector deleting destructor'(FxTimer *this, __int64 a2, unsigned int a3)
{
  char v3; // bl
  FxTimer *v5; // rcx

  v3 = a2;
  FxTimer::~FxTimer(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxTimer *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}

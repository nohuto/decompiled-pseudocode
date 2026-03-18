/*
 * XREFs of ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x1C006CC60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C006CBD8 (--1FxRequestMemory@@UEAA@XZ.c)
 */

FxRequestMemory *__fastcall FxRequestMemory::`vector deleting destructor'(FxRequestMemory *this, char a2)
{
  FxRequestMemory *v4; // rcx

  FxRequestMemory::~FxRequestMemory(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxRequestMemory *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}

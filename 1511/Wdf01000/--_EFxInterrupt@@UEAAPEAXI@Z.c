/*
 * XREFs of ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1C008C440
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C008C3A4 (--1FxInterrupt@@UEAA@XZ.c)
 */

FxInterrupt *__fastcall FxInterrupt::`vector deleting destructor'(FxInterrupt *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxInterrupt *v5; // rcx

  v3 = a2;
  FxInterrupt::~FxInterrupt(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxInterrupt *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}

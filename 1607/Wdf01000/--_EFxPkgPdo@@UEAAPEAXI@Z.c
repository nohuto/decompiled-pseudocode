/*
 * XREFs of ??_EFxPkgPdo@@UEAAPEAXI@Z @ 0x1C0091FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C0091F38 (--1FxPkgPdo@@UEAA@XZ.c)
 */

FxPkgPdo *__fastcall FxPkgPdo::`vector deleting destructor'(FxPkgPdo *this, char a2)
{
  FxPkgPdo *v4; // rcx

  FxPkgPdo::~FxPkgPdo(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgPdo *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}

/*
 * XREFs of ??_EFxPkgPdo@@UEAAPEAXI@Z @ 0x1C0096150
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C00960C0 (--1FxPkgPdo@@UEAA@XZ.c)
 */

FxPkgPdo *__fastcall FxPkgPdo::`vector deleting destructor'(FxPkgPdo *this, char a2)
{
  FxPkgPdo *v4; // rcx

  FxPkgPdo::~FxPkgPdo(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgPdo *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}

/*
 * XREFs of ??_EFxPkgFdo@@MEAAPEAXI@Z @ 0x1C008A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x1C008A6D4 (--1FxPkgFdo@@MEAA@XZ.c)
 */

FxPkgFdo *__fastcall FxPkgFdo::`vector deleting destructor'(FxPkgFdo *this, unsigned int a2)
{
  char v2; // bl
  FxPkgFdo *v4; // rcx

  v2 = a2;
  FxPkgFdo::~FxPkgFdo(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxPkgFdo *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}

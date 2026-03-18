/*
 * XREFs of ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x1C0081940
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0081874 (--1FxPkgIo@@UEAA@XZ.c)
 */

FxPkgIo *__fastcall FxPkgIo::`vector deleting destructor'(FxPkgIo *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxPkgIo *v5; // rcx

  v3 = a2;
  FxPkgIo::~FxPkgIo(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxPkgIo *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}

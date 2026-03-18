/*
 * XREFs of ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1C00960C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 */

FxPkgPnp *__fastcall FxPkgPnp::`vector deleting destructor'(FxPkgPnp *this, unsigned int a2)
{
  char v2; // bl
  FxPkgPnp *v4; // rcx

  v2 = a2;
  FxPkgPnp::~FxPkgPnp(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxPkgPnp *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}

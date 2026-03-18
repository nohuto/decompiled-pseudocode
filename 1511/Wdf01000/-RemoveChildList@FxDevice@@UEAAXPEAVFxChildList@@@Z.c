/*
 * XREFs of ?RemoveChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C006AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C00894F0 (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 */

void __fastcall FxDevice::RemoveChildList(FxDevice *this, FxChildList *List)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    FxPkgPnp::RemoveChildList(m_PkgPnp, List);
}

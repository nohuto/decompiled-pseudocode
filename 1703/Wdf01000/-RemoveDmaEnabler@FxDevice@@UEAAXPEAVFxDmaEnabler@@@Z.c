/*
 * XREFs of ?RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C007D120
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C009D550 (-RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 */

void __fastcall FxDevice::RemoveDmaEnabler(FxDevice *this, FxDmaEnabler *Enabler)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    FxPkgPnp::RemoveDmaEnabler(m_PkgPnp, Enabler);
}

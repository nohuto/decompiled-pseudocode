/*
 * XREFs of ?AllocateDmaEnablerList@FxDevice@@UEAAJXZ @ 0x1C000E860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FxDevice::AllocateDmaEnablerList(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    return FxPkgPnp::AllocateDmaEnablerList(m_PkgPnp);
  else
    return 0;
}

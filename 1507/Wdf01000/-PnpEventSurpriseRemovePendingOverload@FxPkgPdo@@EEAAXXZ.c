/*
 * XREFs of ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x1C0099770
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C0066F6C (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 */

void __fastcall FxPkgPdo::PnpEventSurpriseRemovePendingOverload(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
    FxDeviceDescriptionEntry::DeviceSurpriseRemoved(m_Description);
  FxPkgPnp::PnpEventSurpriseRemovePendingOverload(this);
}

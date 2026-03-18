/*
 * XREFs of ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x1C00846F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C005F89C (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 */

void __fastcall FxPkgPdo::PnpEventSurpriseRemovePendingOverload(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
    FxDeviceDescriptionEntry::DeviceSurpriseRemoved(m_Description);
  FxPkgPnp::PnpEventSurpriseRemovePendingOverload(this);
}

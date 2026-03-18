/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C0074E14
 * Callers:
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0037260 (imp_WdfDeviceAddQueryInterface.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C009AF50 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxQueryInterface *__fastcall FxQueryInterface::`scalar deleting destructor'(FxQueryInterface *this)
{
  _INTERFACE *m_Interface; // rcx

  m_Interface = this->m_Interface;
  if ( m_Interface && !this->m_EmbeddedInterface )
    FxPoolFree(m_Interface);
  FxPoolFree(this);
  return this;
}

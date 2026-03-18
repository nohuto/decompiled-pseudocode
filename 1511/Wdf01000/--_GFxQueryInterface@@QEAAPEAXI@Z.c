/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C0062B80
 * Callers:
 *     imp_WdfDeviceAddQueryInterface @ 0x1C002CFB0 (imp_WdfDeviceAddQueryInterface.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C00884B0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
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

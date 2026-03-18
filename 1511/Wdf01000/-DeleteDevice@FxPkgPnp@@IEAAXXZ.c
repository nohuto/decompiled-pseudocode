/*
 * XREFs of ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C008847C
 * Callers:
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0084720 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C00893E4 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C008A850 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C006A82C (-Destroy@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::DeleteDevice(FxPkgPnp *this)
{
  FxDevice::Destroy(this->m_Device);
  this->m_DeviceBase->DeleteObject(this->m_DeviceBase);
}

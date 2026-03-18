/*
 * XREFs of ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C0096B5C
 * Callers:
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0092570 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0097B20 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0098D30 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0078FDC (-Destroy@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::DeleteDevice(FxPkgPnp *this)
{
  FxDevice::Destroy(this->m_Device);
  this->m_DeviceBase->DeleteObject(this->m_DeviceBase);
}

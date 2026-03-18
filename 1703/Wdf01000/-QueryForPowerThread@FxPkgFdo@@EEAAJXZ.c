/*
 * XREFs of ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1C009D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0065EC0 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C009AE94 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgFdo::QueryForPowerThread(FxPkgFdo *this)
{
  int result; // eax

  result = FxDeviceBase::QueryForInterface(
             this->m_DeviceBase,
             &FxPkgPnp::GUID_POWER_THREAD_INTERFACE,
             &this->m_PowerThreadInterface.Interface,
             0x28u,
             1u,
             0LL,
             this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
  if ( result < 0 )
    return FxPkgPnp::CreatePowerThread(this);
  this->m_HasPowerThread = 1;
  return result;
}

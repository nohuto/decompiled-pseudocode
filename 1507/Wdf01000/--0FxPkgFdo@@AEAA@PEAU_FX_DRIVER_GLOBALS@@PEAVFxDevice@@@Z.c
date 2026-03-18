/*
 * XREFs of ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C00138E4
 * Callers:
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0010E04 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C001C620 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

void __fastcall FxPkgFdo::FxPkgFdo(FxPkgFdo *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxDevice *Device)
{
  FxPkgPnp::FxPkgPnp(this, FxDriverGlobals, Device, 0x1101u);
  this->__vftable = (FxPkgFdo_vtbl *)&FxPkgFdo::`vftable';
  this->m_DeviceFilterAddResourceRequirements.m_Method = 0LL;
  this->m_DeviceFilterRemoveResourceRequirements.m_Method = 0LL;
  this->m_DeviceRemoveAddedResources.m_Method = 0LL;
  this->m_DefaultDeviceList = 0LL;
  this->m_StaticDeviceList = 0LL;
  this->m_DefaultTarget = 0LL;
  this->m_SelfTarget = 0LL;
  this->m_BusEnumRetries = 0;
  this->m_DeviceInterfacesCanBeEnabled = 1;
  this->m_Filter = 0;
  *(_QWORD *)&this->m_BusInformation.BusTypeGuid.Data1 = 0LL;
  *(_QWORD *)this->m_BusInformation.BusTypeGuid.Data4 = 0LL;
  *(_QWORD *)&this->m_BusInformation.LegacyBusType = 0LL;
  memset(
    &this->m_SurpriseRemoveAndReenumerateSelfInterface,
    0,
    sizeof(this->m_SurpriseRemoveAndReenumerateSelfInterface));
}

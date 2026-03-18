/*
 * XREFs of ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0022AF0
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0034790 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C0022A90 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C0022C28 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0022DDC (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002E3B0 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPoxInterface::InitializeComponents(FxPoxInterface *this)
{
  int _a3; // edi
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v5; // r14
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  __int64 _a2; // rdx
  const void *_a1; // rax
  int (__fastcall *EvtDeviceWdmPostPoFxRegisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax
  FxDeviceBase *v11; // rsi
  unsigned __int64 v12; // rsi
  FxPkgPnp *v13; // rcx
  FxDeviceBase *v14; // rax
  __int64 m_DeviceObject; // rdx
  const void *v16; // rax
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax

  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 0LL;
  if ( this->m_DevicePowerRequirementMachine
    || (_a3 = FxPoxInterface::CreateDevicePowerRequirementMachine(this), _a3 >= 0) )
  {
    _a3 = FxPoxInterface::PoxRegisterDevice(this);
    if ( _a3 < 0 )
    {
      m_PkgPnp = this->m_PkgPnp;
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qid(m_PkgPnp->m_Globals, 2u, 0xCu, 0xDu, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, _a3);
    }
    else
    {
      PoFxActivateComponent(this->m_PoHandle, 0LL, 0LL);
      PoFxStartDevicePowerManagement(this->m_PoHandle);
      PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
      v5 = PowerFrameworkSettings;
      if ( PowerFrameworkSettings
        && (EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice) != 0LL
        && ((v11 = this->m_PkgPnp->m_DeviceBase, !v11->m_ObjectSize)
          ? (v12 = 0LL)
          : (v12 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL),
            _a3 = EvtDeviceWdmPostPoFxRegisterDevice((WDFDEVICE__ *)v12, this->m_PoHandle),
            _a3 < 0) )
      {
        v13 = this->m_PkgPnp;
        v14 = v13->m_DeviceBase;
        m_DeviceObject = (__int64)v14->m_DeviceObject.m_DeviceObject;
        if ( v14->m_ObjectSize )
          v16 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v16 = 0LL;
        WPP_IFR_SF_qid(v13->m_Globals, 2u, 0xCu, 0xEu, WPP_PoxInterface_cpp_Traceguids, v16, m_DeviceObject, _a3);
        EvtDeviceWdmPrePoFxUnregisterDevice = v5->EvtDeviceWdmPrePoFxUnregisterDevice;
        if ( EvtDeviceWdmPrePoFxUnregisterDevice )
          EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v12, this->m_PoHandle);
        PoFxUnregisterDevice(this->m_PoHandle);
      }
      else
      {
        FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventRegisteredWithPox);
      }
    }
  }
  return (unsigned int)_a3;
}

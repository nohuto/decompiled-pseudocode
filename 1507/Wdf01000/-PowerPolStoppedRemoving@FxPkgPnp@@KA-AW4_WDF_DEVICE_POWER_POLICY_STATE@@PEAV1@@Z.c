/*
 * XREFs of ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C00A3DB4 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C00A3F64 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppedRemoving(FxPkgPnp *This)
{
  FxPoxInterface *p_m_PoxInterface; // rbx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned __int64 v3; // r9
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // r8
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v6; // rcx

  p_m_PoxInterface = &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface;
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(p_m_PoxInterface);
    if ( PowerFrameworkSettings )
    {
      EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
      if ( EvtDeviceWdmPrePoFxUnregisterDevice )
      {
        m_DeviceBase = p_m_PoxInterface->m_PkgPnp->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize <= (unsigned __int16)v3 )
          v6 = v3;
        else
          v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
        EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v6, p_m_PoxInterface->m_PoHandle);
      }
    }
    PoFxUnregisterDevice(p_m_PoxInterface->m_PoHandle);
    FxDevicePwrRequirementMachine::ProcessEvent(
      p_m_PoxInterface->m_DevicePowerRequirementMachine,
      DprEventUnregisteredWithPox);
  }
  return 1422LL;
}

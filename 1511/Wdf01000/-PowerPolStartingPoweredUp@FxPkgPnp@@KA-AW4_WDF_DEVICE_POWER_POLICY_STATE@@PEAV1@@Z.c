/*
 * XREFs of ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0025D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0003F04 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008DF00 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008E0C8 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C008E668 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingPoweredUp(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  volatile int m_IdleTimeoutStatus; // r8d
  char v5; // di
  FxDeviceBase *m_DeviceBase; // rbx
  FxPoxInterface *p_m_PoxInterface; // rbx
  const void *_a1; // rax
  _DEVICE_OBJECT *_a2; // rax
  const void *v11; // rbx
  int _a3; // esi
  FxPkgPnp *v13; // r10
  FxDeviceBase *v14; // rcx
  __int64 v15; // rax
  const void *v16; // rcx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v18; // r14
  int (__fastcall *EvtDeviceWdmPostPoFxRegisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax
  FxDeviceBase *v20; // rdi
  unsigned __int64 v21; // rdi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v23; // rax
  __int64 m_DeviceObject; // rdx
  const void *v25; // rax
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_Globals = This->m_Globals;
  m_IdleTimeoutStatus = m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus;
  v5 = m_IdleTimeoutStatus | 1;
  m_DeviceBase = m_Owner->m_PkgPnp->m_DeviceBase;
  if ( _InterlockedExchange(&m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus, m_IdleTimeoutStatus | 1) != m_IdleTimeoutStatus )
  {
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      3u,
      0xCu,
      0xCu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( (v5 & 4) != 0 && FxLibraryGlobals.PoxRegisterDevice && (v5 & 2) == 0 )
  {
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      v11 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v11 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 3u, 0xCu, 0xDu, WPP_PowerPolicyStateMachine_cpp_Traceguids, v11, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  p_m_PoxInterface = &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface;
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 1282LL;
  if ( !p_m_PoxInterface->m_DevicePowerRequirementMachine
    && FxPoxInterface::CreateDevicePowerRequirementMachine(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) < 0 )
  {
    return 1425LL;
  }
  _a3 = FxPoxInterface::PoxRegisterDevice(p_m_PoxInterface);
  if ( _a3 >= 0 )
  {
    PoFxActivateComponent(p_m_PoxInterface->m_PoHandle, 0LL, 0LL);
    PoFxStartDevicePowerManagement(p_m_PoxInterface->m_PoHandle);
    PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(p_m_PoxInterface);
    v18 = PowerFrameworkSettings;
    if ( !PowerFrameworkSettings )
      goto LABEL_34;
    EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
    if ( !EvtDeviceWdmPostPoFxRegisterDevice )
      goto LABEL_34;
    v20 = p_m_PoxInterface->m_PkgPnp->m_DeviceBase;
    v21 = v20->m_ObjectSize ? (unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    _a3 = EvtDeviceWdmPostPoFxRegisterDevice((WDFDEVICE__ *)v21, p_m_PoxInterface->m_PoHandle);
    if ( _a3 < 0 )
    {
      m_PkgPnp = p_m_PoxInterface->m_PkgPnp;
      v23 = m_PkgPnp->m_DeviceBase;
      m_DeviceObject = (__int64)v23->m_DeviceObject.m_DeviceObject;
      if ( v23->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_qid(m_PkgPnp->m_Globals, 2u, 0xCu, 0xEu, WPP_PoxInterface_cpp_Traceguids, v25, m_DeviceObject, _a3);
      EvtDeviceWdmPrePoFxUnregisterDevice = v18->EvtDeviceWdmPrePoFxUnregisterDevice;
      if ( EvtDeviceWdmPrePoFxUnregisterDevice )
        EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v21, p_m_PoxInterface->m_PoHandle);
      PoFxUnregisterDevice(p_m_PoxInterface->m_PoHandle);
    }
    else
    {
LABEL_34:
      FxDevicePwrRequirementMachine::ProcessEvent(
        p_m_PoxInterface->m_DevicePowerRequirementMachine,
        DprEventRegisteredWithPox);
    }
  }
  else
  {
    v13 = p_m_PoxInterface->m_PkgPnp;
    v14 = v13->m_DeviceBase;
    v15 = (__int64)v14->m_DeviceObject.m_DeviceObject;
    v16 = v14->m_ObjectSize ? (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_qid(v13->m_Globals, 2u, 0xCu, 0xDu, WPP_PoxInterface_cpp_Traceguids, v16, v15, _a3);
  }
  if ( _a3 >= 0 )
    return 1282LL;
  else
    return 1425LL;
}

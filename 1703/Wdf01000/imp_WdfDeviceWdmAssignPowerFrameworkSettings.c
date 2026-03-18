/*
 * XREFs of imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C003B960
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00252E8 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned int _a4; // eax
  _PO_FX_COMPONENT_V1 *Component; // rax
  unsigned int v10; // ebx
  unsigned __int16 v11; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !PowerFrameworkSettings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v10 = -1073741808;
    v11 = 20;
LABEL_14:
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v11, WPP_FxDeviceApiKm_cpp_Traceguids, Device, v10);
    goto LABEL_15;
  }
  _a4 = PowerFrameworkSettings->Size;
  if ( PowerFrameworkSettings->Size == 72 )
  {
    Component = PowerFrameworkSettings->Component;
    if ( !Component )
      return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
    if ( Component->IdleStateCount )
    {
      if ( Component->IdleStates )
        return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
      v11 = 23;
    }
    else
    {
      v11 = 22;
    }
    v10 = -1073741811;
    goto LABEL_14;
  }
  v10 = -1073741820;
  WPP_IFR_SF_qddd(m_Globals, 0, 0x12u, 0x15u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, 72, _a4, -1073741820);
LABEL_15:
  FxVerifierDbgBreakPoint(m_Globals);
  return v10;
}

/*
 * XREFs of ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0034790
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0022AF0 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingPoweredUp(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  volatile int m_IdleTimeoutStatus; // r8d
  char v5; // di
  FxDeviceBase *m_DeviceBase; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  const void *_a1; // rax
  _DEVICE_OBJECT *_a2; // rax
  const void *v12; // rbx

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
      v12 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 3u, 0xCu, 0xDu, WPP_PowerPolicyStateMachine_cpp_Traceguids, v12, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  v7 = FxPoxInterface::InitializeComponents(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  v8 = 1282;
  if ( v7 < 0 )
    return 1425;
  return v8;
}

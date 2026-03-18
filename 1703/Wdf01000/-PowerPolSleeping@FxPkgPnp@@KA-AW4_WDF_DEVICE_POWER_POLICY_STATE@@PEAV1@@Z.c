/*
 * XREFs of ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C00130E8 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C002DEE8 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C002E0A4 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0085F88 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleeping(FxPkgPnp *This)
{
  __int64 result; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxDeviceBase *v7; // rax
  __int64 v8; // r10
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !This->m_SpecialFileCount[1] && This->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount )
  {
    m_DeviceBase = This->m_DeviceBase;
    m_Globals = This->m_Globals;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x1Du, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    v7 = This->m_DeviceBase;
    v9 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid device state in %s.%s. Dump the driver log (!wdflogdump %s.$s) for more information.\n",
      v7->m_Globals->Public.DriverName,
      (const char *)&v9,
      v7->m_Globals->Public.DriverName);
    if ( *(_BYTE *)(v8 + 319) )
      DbgBreakPoint();
  }
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    FxPoxInterface::PowerNotRequiredCallbackWorker(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface, 0);
  FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1319LL;
  result = 1322LL;
  if ( ((This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) > This->m_SystemWake )
    return 1319LL;
  return result;
}

/*
 * XREFs of ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010180
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C0010700 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C0027538 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0036EA4 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C008E0FC (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleeping(FxPkgPnp *This)
{
  __int64 result; // rax
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax
  FxDeviceBase *v5; // rax
  __int64 v6; // r10
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !This->m_SpecialFileCount[1] && This->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount )
  {
    m_DeviceBase = This->m_DeviceBase;
    _a1 = m_DeviceBase->m_ObjectSize ? (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(This->m_Globals, 2u, 0xCu, 0x1Du, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    v5 = This->m_DeviceBase;
    v7 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid device state in %s.%s. Dump the driver log (!wdflogdump %s.$s) for more information.\n",
      v5->m_Globals->Public.DriverName,
      (const char *)&v7,
      v5->m_Globals->Public.DriverName);
    if ( *(_BYTE *)(v6 + 319) )
      DbgBreakPoint();
  }
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    FxPoxInterface::PowerNotRequiredCallbackWorker(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface, 0);
  FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1319LL;
  result = 1322LL;
  if ( (signed int)((This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) > This->m_SystemWake )
    return 1319LL;
  return result;
}

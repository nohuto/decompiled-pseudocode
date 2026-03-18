/*
 * XREFs of ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0097B20
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0024050 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0024450 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C002EA3C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00967C0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::ProcessDelayedDeletion(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax

  m_DeviceBase = this->m_DeviceBase;
  _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceBase->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x20u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  FxPkgPnp::CleanupStateMachines(this, 0);
  FxPkgPnp::DeleteDevice(this);
}

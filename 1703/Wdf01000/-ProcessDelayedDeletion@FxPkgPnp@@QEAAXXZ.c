/*
 * XREFs of ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009BF08
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025590 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0032054 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009AB00 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::ProcessDelayedDeletion(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  _DEVICE_OBJECT *_a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8

  m_DeviceBase = this->m_DeviceBase;
  _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x20u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  FxPkgPnp::CleanupStateMachines(this, 0);
  FxPkgPnp::DeleteDevice(this);
}

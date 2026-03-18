/*
 * XREFs of ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0014AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025590 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPkgPnp::_PowerPolDevicePowerUpComplete(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int8 MinorFunction,
        _POWER_STATE PowerState,
        FxPkgPnp *Context)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _DEVICE_OBJECT *_a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  unsigned __int8 v9; // r8

  if ( Context->m_PowerPolicyMachine.m_Owner->m_RequestedPowerUpIrp )
  {
    m_DeviceBase = Context->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(Context->m_Globals, 2u, 0xCu, 0x21u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
    FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolPowerUpNotSeen, v9);
  }
}

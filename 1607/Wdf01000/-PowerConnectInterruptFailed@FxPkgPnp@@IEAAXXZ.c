/*
 * XREFs of ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C0094C6C
 * Callers:
 *     ?PowerInitialConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095420 (-PowerInitialConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095BB0 (-PowerWakingConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095BD0 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00627CC (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 */

void __fastcall FxPkgPnp::PowerConnectInterruptFailed(FxPkgPnp *this)
{
  int _a2; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rcx
  FxDeviceBase *v5; // rax
  WDFDEVICE__ *v6; // rax

  _a2 = FxPkgPnp::NotifyResourceObjectsDx(this, 4);
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2);
  }
  v5 = this->m_DeviceBase;
  if ( v5->m_ObjectSize )
    v6 = (WDFDEVICE__ *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v6 = 0LL;
  this->m_DeviceD0Exit.m_Device = v6;
  this->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit);
  FxPkgPnp::PowerSetDevicePowerState(this, 5);
}

/*
 * XREFs of ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C009B7AC
 * Callers:
 *     ?PowerInitialConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C040 (-PowerInitialConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C690 (-PowerWakingConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C6B0 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C005BBE4 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 */

void __fastcall FxPkgPnp::PowerConnectInterruptFailed(FxPkgPnp *this)
{
  int _a2; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rcx
  FxDeviceBase *v5; // rcx
  unsigned __int64 v6; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int _a3; // ecx
  FxDeviceBase *v9; // rax
  __int64 m_DeviceObject; // rdx
  const void *v11; // rax

  _a2 = FxPkgPnp::NotifyResourceObjectsDx(this, 4);
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x26u, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2);
  }
  v5 = this->m_DeviceBase;
  if ( v5->m_ObjectSize )
    v6 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v6 = 0LL;
  m_Method = this->m_DeviceD0Exit.m_Method;
  if ( m_Method )
    _a3 = m_Method((WDFDEVICE__ *)v6, WdfPowerDeviceD3Final);
  else
    _a3 = 0;
  if ( _a3 < 0 )
  {
    v9 = this->m_DeviceBase;
    m_DeviceObject = (__int64)v9->m_DeviceObject.m_DeviceObject;
    if ( v9->m_ObjectSize )
      v11 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v11 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0x27u, WPP_PowerStateMachine_cpp_Traceguids, v11, m_DeviceObject, _a3);
  }
  FxPkgPnp::PowerSetDevicePowerState(this, 5);
}

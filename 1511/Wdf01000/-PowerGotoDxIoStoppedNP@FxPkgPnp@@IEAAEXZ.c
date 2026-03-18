/*
 * XREFs of ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C0086ADC
 * Callers:
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086A80 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086AC0 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0014AD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0014B50 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00550E8 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00551C8 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077F70 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedNP(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int _a4; // edi
  char v4; // al
  FxDeviceBase *m_DeviceBase; // rcx
  bool v6; // si
  unsigned __int64 v7; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v9; // ecx
  FxDeviceBase *v10; // rax
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // rax
  int v13; // eax
  FxDeviceBase *v14; // rcx
  unsigned __int64 v15; // rcx
  int (__fastcall *v16)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v17; // ecx
  FxDeviceBase *v18; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v20; // rax
  unsigned __int8 v21; // r8
  __int64 v23; // rdx

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  _a4 = 5;
  if ( CurrentStackLocation->Parameters.Create.EaLength - 4 > 2 )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4 = 6;
  v4 = FxPkgPnp::PowerDmaPowerDown(this);
  m_DeviceBase = this->m_DeviceBase;
  v6 = v4 == 0;
  if ( m_DeviceBase->m_ObjectSize )
    v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v7 = 0LL;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method )
    v9 = m_Method((WDFDEVICE__ *)v7, (_WDF_POWER_DEVICE_STATE)_a4);
  else
    v9 = 0;
  if ( v9 < 0 )
  {
    v6 = 1;
    v10 = this->m_DeviceBase;
    _a3 = v10->m_DeviceObject.m_DeviceObject;
    if ( v10->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x18u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      _a4,
      v9);
  }
  v13 = FxPkgPnp::NotifyResourceObjectsDx(this, 1);
  v14 = this->m_DeviceBase;
  if ( v13 < 0 )
    v6 = 1;
  if ( v14->m_ObjectSize )
    v15 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v15 = 0LL;
  v16 = this->m_DeviceD0Exit.m_Method;
  if ( v16 )
    v17 = v16((WDFDEVICE__ *)v15, (_WDF_POWER_DEVICE_STATE)_a4);
  else
    v17 = 0;
  if ( v17 < 0 )
  {
    v18 = this->m_DeviceBase;
    m_DeviceObject = v18->m_DeviceObject.m_DeviceObject;
    if ( v18->m_ObjectSize )
      v20 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v20 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)m_DeviceObject,
      0xCu,
      0x19u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v20,
      m_DeviceObject,
      _a4,
      v17);
    v6 = 1;
  }
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v6 = 1;
  }
  if ( v6 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit, v21);
    LOBYTE(v23) = 1;
    this->PowerReleasePendingDeviceIrp(this, v23);
    return 1;
  }
}

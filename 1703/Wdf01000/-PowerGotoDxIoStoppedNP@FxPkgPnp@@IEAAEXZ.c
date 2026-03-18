/*
 * XREFs of ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C0099580
 * Callers:
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099520 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099560 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0024C28 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0024CA8 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0037600 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00657B8 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00658B4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C00676D0 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008AF98 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedNP(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int _a4; // esi
  char v4; // al
  FxDeviceBase *m_DeviceBase; // rdx
  bool v6; // bl
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v8; // rdx
  int v9; // eax
  FxDeviceBase *v10; // r8
  unsigned __int16 v11; // cx
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // r8
  int v14; // eax
  FxDeviceBase *v15; // rdx
  unsigned __int16 v16; // ax
  WDFDEVICE__ *v17; // rdx
  __int64 v19; // rdx

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  _a4 = 5;
  if ( CurrentStackLocation->Parameters.Create.EaLength - 4 > 2 )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4 = 6;
  v4 = FxPkgPnp::PowerDmaPowerDown(this);
  m_DeviceBase = this->m_DeviceBase;
  v6 = v4 == 0;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v8 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v8 = 0LL;
  v9 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&this->m_DeviceD0ExitPreInterruptsDisabled, v8, _a4);
  if ( v9 < 0 )
  {
    v6 = 1;
    v10 = this->m_DeviceBase;
    v11 = v10->m_ObjectSize;
    _a3 = v10->m_DeviceObject.m_DeviceObject;
    _a2 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x15u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      _a4,
      v9);
  }
  v14 = FxPkgPnp::NotifyResourceObjectsDx(this, 1);
  v15 = this->m_DeviceBase;
  if ( v14 < 0 )
    v6 = 1;
  v16 = v15->m_ObjectSize;
  v17 = (WDFDEVICE__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0Exit.m_TargetState = _a4;
  if ( !v16 )
    v17 = 0LL;
  this->m_DeviceD0Exit.m_Device = v17;
  if ( (int)FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit) < 0 )
    v6 = 1;
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
    FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit);
    LOBYTE(v19) = 1;
    this->PowerReleasePendingDeviceIrp(this, v19);
    return 1;
  }
}

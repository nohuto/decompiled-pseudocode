/*
 * XREFs of ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C009515C
 * Callers:
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095100 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095140 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C00255F0 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C002566C (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00627CC (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00628AC (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0064340 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00873E0 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedNP(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int _a4; // edi
  char v4; // al
  FxDeviceBase *m_DeviceBase; // rdx
  bool v6; // si
  WDFDEVICE__ *v7; // rdx
  int v8; // eax
  FxDeviceBase *v9; // rcx
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // rcx
  bool v12; // sf
  FxDeviceBase *v13; // rax
  WDFDEVICE__ *v14; // rax
  __int64 v16; // rdx

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
    v7 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v7 = 0LL;
  v8 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&this->m_DeviceD0ExitPreInterruptsDisabled, v7, _a4);
  if ( v8 < 0 )
  {
    v6 = 1;
    v9 = this->m_DeviceBase;
    _a3 = v9->m_DeviceObject.m_DeviceObject;
    if ( v9->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
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
      v8);
  }
  v12 = (int)FxPkgPnp::NotifyResourceObjectsDx(this, 1) < 0;
  v13 = this->m_DeviceBase;
  if ( v12 )
    v6 = 1;
  if ( v13->m_ObjectSize )
    v14 = (WDFDEVICE__ *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v14 = 0LL;
  this->m_DeviceD0Exit.m_Device = v14;
  this->m_DeviceD0Exit.m_TargetState = _a4;
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
    LOBYTE(v16) = 1;
    this->PowerReleasePendingDeviceIrp(this, v16);
    return 1;
  }
}

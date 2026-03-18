/*
 * XREFs of ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C00256B8
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0037EC0 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0039020 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C0013924 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0023880 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C00255F0 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C002566C (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00873E0 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStopped(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int EaLength; // eax
  unsigned int _a4; // ebx
  char v5; // al
  FxDeviceBase *m_DeviceBase; // rcx
  bool v7; // r14
  unsigned __int64 v8; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int globals; // ecx
  char v11; // r13
  _LIST_ENTRY *Blink; // rbp
  int v13; // r12d
  FxDeviceBase *v14; // rax
  WDFDEVICE__ *v15; // rax
  char v16; // di
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v18; // bl
  __int64 v19; // rdx
  _LIST_ENTRY **p_Blink; // rdi
  int v22; // eax
  FxDeviceBase *v23; // rax
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // rax
  const void *v26; // rdi
  bool v27; // [rsp+90h] [rbp+8h]
  int v28; // [rsp+98h] [rbp+10h]

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  if ( EaLength < 4 || (_a4 = 5, EaLength > 6) )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4 = 6;
  v5 = FxPkgPnp::PowerDmaPowerDown(this);
  m_DeviceBase = this->m_DeviceBase;
  v7 = v5 == 0;
  v27 = v5 == 0;
  if ( m_DeviceBase->m_ObjectSize )
    v8 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v8 = 0LL;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method )
    globals = m_Method((WDFDEVICE__ *)v8, (_WDF_POWER_DEVICE_STATE)_a4);
  else
    globals = 0;
  if ( globals < 0 )
  {
    v7 = 1;
    v27 = 1;
    v23 = this->m_DeviceBase;
    _a3 = v23->m_DeviceObject.m_DeviceObject;
    if ( v23->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x14u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      _a4,
      globals);
  }
  v11 = 16;
  if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
  {
    v11 = 80;
    this->m_WakeInterruptsKeepConnected = 0;
  }
  Blink = this->m_InterruptListHead.Blink;
  v13 = 0;
  if ( Blink != &this->m_InterruptListHead )
  {
    do
    {
      p_Blink = &Blink[-28].Blink;
      v22 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, v11);
      v28 = v22;
      if ( v22 < 0 )
      {
        if ( *((_WORD *)p_Blink + 5) )
          v26 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v26 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Fu, WPP_FxPkgPnp_cpp_Traceguids, v26, v22);
        v13 = v28;
      }
      Blink = Blink->Blink;
    }
    while ( Blink != &this->m_InterruptListHead );
    v7 = v27;
    if ( v13 < 0 )
      v7 = 1;
  }
  v14 = this->m_DeviceBase;
  if ( v14->m_ObjectSize )
    v15 = (WDFDEVICE__ *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v15 = 0LL;
  this->m_DeviceD0Exit.m_Device = v15;
  this->m_DeviceD0Exit.m_TargetState = _a4;
  v16 = v7;
  if ( FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit) < 0 )
    v16 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v16 = 1;
  }
  if ( v16 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      v18 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
      FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v18);
    }
    else
    {
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDown, 0);
    }
    LOBYTE(v19) = 1;
    this->PowerReleasePendingDeviceIrp(this, v19);
    return 1;
  }
}

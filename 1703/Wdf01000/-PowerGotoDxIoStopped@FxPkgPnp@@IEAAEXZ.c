/*
 * XREFs of ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0024CFC
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003B0F0 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C003C2D0 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C0014660 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0022C40 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0024C28 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0024CA8 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025590 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0037600 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008AF98 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStopped(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int EaLength; // eax
  unsigned int _a4; // ebx
  char v5; // al
  FxDeviceBase *m_DeviceBase; // rcx
  bool v7; // zf
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  char v9; // bp
  unsigned __int16 m_ObjectSize; // dx
  int globals; // r8d
  char v12; // r12
  _LIST_ENTRY *Blink; // rdi
  FxDeviceBase *v14; // rdx
  unsigned __int16 v15; // ax
  WDFDEVICE__ *v16; // rdx
  char v17; // di
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v19; // bl
  __int64 v20; // rdx
  unsigned __int64 v22; // rcx
  _LIST_ENTRY **p_Blink; // r14
  int v24; // r13d
  int v25; // ecx
  FxDeviceBase *v26; // rdx
  _DEVICE_OBJECT *_a3; // rcx
  unsigned __int16 v28; // ax
  const void *_a2; // rdx
  __int16 v30; // cx
  const void *v31; // r14
  int v32; // [rsp+90h] [rbp+8h]
  char v33; // [rsp+98h] [rbp+10h]

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  if ( EaLength < 4 || (_a4 = 5, EaLength > 6) )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4 = 6;
  v5 = FxPkgPnp::PowerDmaPowerDown(this);
  m_DeviceBase = this->m_DeviceBase;
  v7 = v5 == 0;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  v9 = v7;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v33 = v7;
  if ( m_Method )
  {
    v22 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v22 = 0LL;
    globals = m_Method((WDFDEVICE__ *)v22, (_WDF_POWER_DEVICE_STATE)_a4);
  }
  else
  {
    globals = 0;
  }
  if ( globals < 0 )
  {
    v9 = 1;
    v33 = 1;
    v26 = this->m_DeviceBase;
    _a3 = v26->m_DeviceObject.m_DeviceObject;
    v28 = v26->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v28 )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)_a2,
      0xCu,
      0x14u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      _a4,
      globals);
  }
  v12 = 16;
  if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
  {
    v12 = 80;
    this->m_WakeInterruptsKeepConnected = 0;
  }
  Blink = this->m_InterruptListHead.Blink;
  v32 = 0;
  if ( Blink != &this->m_InterruptListHead )
  {
    do
    {
      p_Blink = &Blink[-28].Blink;
      v24 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, v12);
      if ( v24 < 0 )
      {
        v30 = *((_WORD *)p_Blink + 5);
        v31 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v30 )
          v31 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Fu, WPP_FxPkgPnp_cpp_Traceguids, v31, v24);
        v25 = v24;
        v32 = v24;
      }
      else
      {
        v25 = v32;
      }
      Blink = Blink->Blink;
    }
    while ( Blink != &this->m_InterruptListHead );
    v9 = v33;
    if ( v25 < 0 )
      v9 = 1;
  }
  v14 = this->m_DeviceBase;
  v15 = v14->m_ObjectSize;
  v16 = (WDFDEVICE__ *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0Exit.m_TargetState = _a4;
  if ( !v15 )
    v16 = 0LL;
  this->m_DeviceD0Exit.m_Device = v16;
  v17 = v9;
  if ( FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit) < 0 )
    v17 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v17 = 1;
  }
  if ( v17 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      v19 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
      FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v19);
    }
    else
    {
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDown, 0);
    }
    LOBYTE(v20) = 1;
    this->PowerReleasePendingDeviceIrp(this, v20);
    return 1;
  }
}

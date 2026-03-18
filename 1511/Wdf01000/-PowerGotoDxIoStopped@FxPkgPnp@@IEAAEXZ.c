/*
 * XREFs of ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0014B9C
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00333E0 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0034290 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000F324 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0012AA0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0014AD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0014B50 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077F70 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStopped(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int EaLength; // eax
  unsigned int _a4; // ebx
  char v5; // al
  __int64 v6; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  bool v8; // di
  unsigned __int64 v9; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int globals; // ecx
  const _GUID *v12; // r8
  char v13; // r12
  _LIST_ENTRY *Blink; // r14
  int v15; // r13d
  FxDeviceBase *v16; // rcx
  unsigned __int64 v17; // rcx
  int (__fastcall *v18)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v19; // ecx
  unsigned __int8 v20; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  KIRQL v22; // bl
  __int64 v23; // rdx
  _LIST_ENTRY **p_Blink; // rbp
  int v26; // eax
  FxDeviceBase *v27; // rax
  _DEVICE_OBJECT *_a3; // rdx
  const void *_a2; // rax
  const void *v30; // rbp
  FxDeviceBase *v31; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v33; // rax
  bool v34; // [rsp+90h] [rbp+8h]
  int v35; // [rsp+98h] [rbp+10h]

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  if ( EaLength < 4 || (_a4 = 5, EaLength > 6) )
    _a4 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4 = 6;
  v5 = FxPkgPnp::PowerDmaPowerDown(this);
  m_DeviceBase = this->m_DeviceBase;
  v8 = v5 == 0;
  v34 = v5 == 0;
  if ( m_DeviceBase->m_ObjectSize )
    v9 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v9 = 0LL;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method )
    globals = m_Method((WDFDEVICE__ *)v9, (_WDF_POWER_DEVICE_STATE)_a4);
  else
    globals = 0;
  v12 = WPP_PowerStateMachine_cpp_Traceguids;
  if ( globals < 0 )
  {
    v8 = 1;
    v34 = 1;
    v27 = this->m_DeviceBase;
    _a3 = v27->m_DeviceObject.m_DeviceObject;
    if ( v27->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)_a3,
      0xCu,
      0x16u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      _a4,
      globals);
  }
  v13 = 16;
  if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
  {
    v13 = 80;
    this->m_WakeInterruptsKeepConnected = 0;
  }
  Blink = this->m_InterruptListHead.Blink;
  v15 = 0;
  if ( Blink != &this->m_InterruptListHead )
  {
    do
    {
      p_Blink = &Blink[-28].Blink;
      v26 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, v13);
      v35 = v26;
      if ( v26 < 0 )
      {
        if ( *((_WORD *)p_Blink + 5) )
          v30 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v30 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Fu, WPP_FxPkgPnp_cpp_Traceguids, v30, v26);
        v15 = v35;
      }
      Blink = Blink->Blink;
    }
    while ( Blink != &this->m_InterruptListHead );
    v8 = v34;
    if ( v15 < 0 )
      v8 = 1;
  }
  v16 = this->m_DeviceBase;
  if ( v16->m_ObjectSize )
    v17 = (unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v17 = 0LL;
  v18 = this->m_DeviceD0Exit.m_Method;
  if ( v18 )
    v19 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, const _GUID *))v18)(v17, _a4, v12);
  else
    v19 = 0;
  if ( v19 < 0 )
  {
    v31 = this->m_DeviceBase;
    m_DeviceObject = v31->m_DeviceObject.m_DeviceObject;
    if ( v31->m_ObjectSize )
      v33 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v33 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)m_DeviceObject,
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v33,
      m_DeviceObject,
      _a4,
      v19);
    v8 = 1;
  }
  ((void (__fastcall *)(FxPkgPnp *, __int64, const _GUID *))this->PowerParentPowerDereference)(this, v6, v12);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v8 = 1;
  }
  if ( v8 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      v22 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
      FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v22);
    }
    else
    {
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDown, v20);
    }
    LOBYTE(v23) = 1;
    this->PowerReleasePendingDeviceIrp(this, v23);
    return 1;
  }
}

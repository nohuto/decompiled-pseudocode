/*
 * XREFs of ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0013280
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0013600 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C008ADEC (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 */

void __fastcall FxPkgPnp::NotPowerPolicyOwnerEnterNewState(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_STATE NewState)
{
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // ebx
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // esi
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  int v10; // edx
  FxPowerPolicyStateCallback *v11; // rcx
  int v12; // ecx
  _WDF_DEVICE_POWER_POLICY_STATE CurrentTargetState; // eax
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v14; // rax
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPowerPolicyStateCallback *v16; // rcx
  FxDeviceBase *v17; // r9
  WDFDEVICE__ *v18; // r9
  FxDeviceBase *v19; // r9
  WDFDEVICE__ *v20; // r9
  FxDeviceBase *v21; // r9
  WDFDEVICE__ *v22; // r9
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA data; // [rsp+50h] [rbp-38h] BYREF

  if ( NewState != WdfDevStatePwrPolNull )
  {
    _a3 = NewState;
    _a4 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    do
    {
      m_DeviceBase = this->m_DeviceBase;
      _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xAu,
        WPP_NotPowerPolicyOwnerStateMachine_cpp_Traceguids,
        _a1,
        _a2,
        _a3,
        _a4);
      m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
      if ( m_PowerPolicyStateCallbacks )
      {
        v17 = this->m_DeviceBase;
        data.Type = StateNotificationLeaveState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        if ( v17->m_ObjectSize )
          v18 = (WDFDEVICE__ *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v18 = 0LL;
        FxPowerPolicyStateCallback::Invoke(m_PowerPolicyStateCallbacks, _a4, StateNotificationLeaveState, v18, &data);
      }
      m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
      v10 = m_HistoryIndex + 1;
      if ( this->m_PowerPolicyMachine.m_QueueDepth == 8 )
        LOBYTE(v10) = v10 % 8;
      else
        v10 %= (int)this->m_PowerPolicyMachine.m_QueueDepth;
      this->m_PowerPolicyMachine.m_HistoryIndex = v10;
      this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
      v11 = this->m_PowerPolicyStateCallbacks;
      if ( v11 )
      {
        v19 = this->m_DeviceBase;
        data.Type = StateNotificationEnterState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        if ( v19->m_ObjectSize )
          v20 = (WDFDEVICE__ *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        FxPowerPolicyStateCallback::Invoke(v11, _a3, StateNotificationEnterState, v20, &data);
      }
      _a4 = _a3;
      v12 = 0;
      *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
      CurrentTargetState = WdfDevStatePwrPolObjectCreated;
      while ( CurrentTargetState != _a3 )
      {
        CurrentTargetState = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v12].CurrentTargetState;
        if ( CurrentTargetState == WdfDevStatePwrPolNull )
        {
          v14 = 0LL;
          goto LABEL_14;
        }
      }
      v14 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[v12];
LABEL_14:
      StateFunc = v14->StateFunc;
      if ( StateFunc )
        _a3 = StateFunc(this);
      else
        _a3 = WdfDevStatePwrPolNull;
      v16 = this->m_PowerPolicyStateCallbacks;
      if ( v16 )
      {
        v21 = this->m_DeviceBase;
        data.Type = StateNotificationPostProcessState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
        if ( v21->m_ObjectSize )
          v22 = (WDFDEVICE__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v22 = 0LL;
        FxPowerPolicyStateCallback::Invoke(v16, _a4, StateNotificationPostProcessState, v22, &data);
      }
    }
    while ( _a3 != WdfDevStatePwrPolNull );
  }
}

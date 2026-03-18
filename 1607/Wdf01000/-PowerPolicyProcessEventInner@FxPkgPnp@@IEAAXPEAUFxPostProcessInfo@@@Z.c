/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0024720
 * Callers:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C002EA90 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0012D94 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00137D8 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C00167FC (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0016830 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0023E30 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C0094070 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C0094218 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r15
  const POWER_POLICY_STATE_TABLE *v4; // rdi
  KIRQL v5; // r8
  FxPowerPolicyEvent v6; // r14d
  unsigned int v7; // ecx
  int v8; // ecx
  int v9; // edx
  unsigned __int8 v10; // dl
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // esi
  FxDeviceBase *v12; // rax
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // r12d
  FxDeviceBase *v14; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  int v19; // edx
  __int64 v20; // rdx
  FxPowerPolicyStateCallback *v21; // rcx
  __int64 v22; // rdi
  int v23; // r14d
  FxPowerPolicyStateCallback *v24; // rcx
  unsigned __int8 m_QueueFlags; // cl
  int v26; // edx
  _WDF_DEVICE_POWER_POLICY_STATE CurrentTargetState; // eax
  KIRQL v28; // al
  FxPowerPolicyEvent v29; // r14d
  unsigned int m_SingularEventsPresent; // ecx
  int m_QueueDepth; // ecx
  int v32; // edx
  unsigned __int8 v33; // dl
  unsigned __int8 TargetStatesCount; // al
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // rcx
  int v36; // edx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *v41; // r9
  WDFDEVICE__ *v42; // r9
  FxDeviceBase *v43; // r9
  WDFDEVICE__ *v44; // r9
  _LARGE_INTEGER v45; // rdx
  FxDeviceBase *v46; // r9
  WDFDEVICE__ *v47; // r9
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v49; // edx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  const void *v51; // rax
  FxDeviceBase *v52; // rcx
  unsigned int v53; // edx
  _DEVICE_OBJECT *v54; // r8
  const void *v55; // rcx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v56; // rdi
  MxTimer TimerContext; // [rsp+60h] [rbp-A0h] BYREF
  FxPkgPnp *v59; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+110h] [rbp+10h] BYREF

  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
LABEL_39:
      v26 = 0;
      CurrentTargetState = WdfDevStatePwrPolObjectCreated;
      while ( CurrentTargetState != *(_DWORD *)&this->m_DeviceBase[1].m_Type )
      {
        CurrentTargetState = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v26].CurrentTargetState;
        if ( CurrentTargetState == WdfDevStatePwrPolNull )
        {
          v56 = 0LL;
          goto LABEL_44;
        }
      }
      v56 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[v26];
LABEL_44:
      v28 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
      if ( this->m_PowerPolicyMachine.m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail
        || (v29 = this->m_PowerPolicyMachine.m_Queue[this->m_PowerPolicyMachine.m_QueueHead], (v29 & 0x60030) == 0)
        && !v56->QueueOpen )
      {
        KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v28);
        return;
      }
      m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
      if ( (m_SingularEventsPresent & v29) != 0 )
        this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v29;
      m_QueueDepth = this->m_PowerPolicyMachine.m_QueueDepth;
      v32 = this->m_PowerPolicyMachine.m_QueueHead + 1;
      if ( m_QueueDepth == 8 )
        v33 = v32 % 8;
      else
        v33 = v32 % m_QueueDepth;
      this->m_PowerPolicyMachine.m_QueueHead = v33;
      KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v28);
      if ( v56 )
      {
        TargetStatesCount = v56->TargetStatesCount;
        if ( TargetStatesCount )
        {
          TargetStates = v56->TargetStates;
          v36 = 0;
          while ( v29 != TargetStates[v36].PowerPolicyEvent )
          {
            if ( ++v36 >= (unsigned int)TargetStatesCount )
              goto LABEL_39;
          }
          FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, TargetStates[v36].TargetState);
        }
      }
    }
  }
  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  while ( 1 )
  {
    v4 = &FxPkgPnp::m_WdfPowerPolicyStates[(*(_DWORD *)&this->m_DeviceBase[1].m_Type & 0xFFFF7FFF) - 1280];
    v5 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    if ( this->m_PowerPolicyMachine.m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail )
      break;
    v6 = this->m_PowerPolicyMachine.m_Queue[this->m_PowerPolicyMachine.m_QueueHead];
    if ( (v6 & 0x23F07F0) == 0 && (*(_DWORD *)&v4->StateInfo.Bits & 1) == 0 )
      goto LABEL_31;
    v7 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v7 & v6) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v7 & ~v6;
    v8 = this->m_PowerPolicyMachine.m_QueueDepth;
    v9 = this->m_PowerPolicyMachine.m_QueueHead + 1;
    if ( v8 == 8 )
      v10 = v9 % 8;
    else
      v10 = v9 % v8;
    this->m_PowerPolicyMachine.m_QueueHead = v10;
    KeReleaseSpinLock(p_m_Lock, v5);
    if ( v4->FirstTargetState.PowerPolicyEvent == v6 )
    {
      _a3 = v4->FirstTargetState.TargetState;
      goto LABEL_11;
    }
    OtherTargetStates = v4->OtherTargetStates;
    if ( !OtherTargetStates || (LODWORD(v38) = 0, OtherTargetStates->PowerPolicyEvent == PwrPolNull) )
    {
LABEL_62:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v49 = *(_DWORD *)&m_DeviceBase[1].m_Type;
        m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
        if ( m_DeviceBase->m_ObjectSize )
          v51 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v51 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0x13u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v51,
          m_DeviceObject,
          v49,
          v6);
      }
      if ( ((*(_DWORD *)&v4->StateInfo.Bits >> 1) & v6) == 0 )
      {
        v52 = this->m_DeviceBase;
        v53 = *(_DWORD *)&v52[1].m_Type;
        v54 = v52->m_DeviceObject.m_DeviceObject;
        if ( v52->m_ObjectSize )
          v55 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v55 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          (unsigned int)v54,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v55,
          v54,
          v53,
          v6,
          *(_DWORD *)&v4->StateInfo.Bits >> 1);
      }
      if ( v6 >= PwrPolUsbSelectiveSuspendCallback || v6 < (PwrPolWakeFailed|PwrPolStart) )
      {
        switch ( v6 )
        {
          case PwrPolSx:
            FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
            break;
          case PwrPolWakeSuccess:
          case PwrPolWakeFailed:
            this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
            break;
          case PwrPolUsbSelectiveSuspendCallback:
            KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
            break;
          case PwrPolUsbSelectiveSuspendCompleted:
            this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
            break;
        }
      }
    }
    else
    {
      v39 = 0LL;
      while ( OtherTargetStates[v39].PowerPolicyEvent != v6 )
      {
        v38 = (unsigned int)(v38 + 1);
        v39 = v38;
        if ( OtherTargetStates[v38].PowerPolicyEvent == PwrPolNull )
          goto LABEL_62;
      }
      _a3 = OtherTargetStates[(unsigned int)v38].TargetState;
LABEL_11:
      if ( _a3 == WdfDevStatePwrPolNull )
        goto LABEL_62;
      v12 = this->m_DeviceBase;
      TimerContext.m_Timer.m_TimerContext = 0LL;
      TimerContext.m_Timer.m_TimerCallback = 0LL;
      TimerContext.m_Timer.m_Period = 0;
      TimerContext.m_Timer.m_KernelExTimer = 0LL;
      v59 = this;
      _a4 = *(_DWORD *)&v12[1].m_Type;
      do
      {
        v14 = this->m_DeviceBase;
        _a2 = v14->m_DeviceObject.m_DeviceObject;
        if ( v14->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          this->m_Globals,
          4u,
          0x15u,
          0x15u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          _a1,
          _a2,
          _a3,
          _a4);
        m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
        if ( m_PowerPolicyStateCallbacks )
        {
          v41 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          if ( v41->m_ObjectSize )
            v42 = (WDFDEVICE__ *)((unsigned __int64)v41 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v42 = 0LL;
          FxPowerPolicyStateCallback::Invoke(
            m_PowerPolicyStateCallbacks,
            _a4,
            StateNotificationLeaveState,
            v42,
            &NotificationData);
        }
        m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
        v19 = m_HistoryIndex + 1;
        if ( this->m_PowerPolicyMachine.m_QueueDepth == 8 )
        {
          v20 = v19 & 0x80000007;
          if ( (int)v20 < 0 )
            v20 = ((unsigned __int8)(v20 - 1) | 0xFFFFFFF8) + 1;
        }
        else
        {
          v20 = (unsigned int)(v19 >> 31);
          LODWORD(v20) = __SPAIR64__(v20, (int)m_HistoryIndex + 1) % this->m_PowerPolicyMachine.m_QueueDepth;
        }
        this->m_PowerPolicyMachine.m_HistoryIndex = v20;
        this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
        v21 = this->m_PowerPolicyStateCallbacks;
        if ( v21 )
        {
          v43 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          if ( v43->m_ObjectSize )
            v44 = (WDFDEVICE__ *)((unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v44 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v21, _a3, StateNotificationEnterState, v44, &NotificationData);
        }
        _a4 = _a3;
        v22 = (_a3 & 0xFFFF7FFF) - 1280;
        *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
        if ( FxPkgPnp::m_WdfPowerPolicyStates[v22].StateFunc )
        {
          v23 = _a3 & 0x8000;
          if ( (_a3 & 0x8000) != 0 )
          {
            MxTimer::Initialize(&TimerContext, &TimerContext, FxWatchdog::_WatchdogDpc, 0);
            CurrentThread = KeGetCurrentThread();
            v45.QuadPart = -6000000000LL;
            if ( v59->m_SharedPower.m_ExtendWatchDogTimer )
              v45.QuadPart = -864000000000LL;
            MxTimer::Start(&TimerContext, v45, 0);
          }
          _a3 = FxPkgPnp::m_WdfPowerPolicyStates[v22].StateFunc(this);
          if ( v23 )
            MxTimer::Stop(&TimerContext);
        }
        else
        {
          _a3 = WdfDevStatePwrPolNull;
        }
        v24 = this->m_PowerPolicyStateCallbacks;
        if ( v24 )
        {
          v46 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          if ( v46->m_ObjectSize )
            v47 = (WDFDEVICE__ *)((unsigned __int64)v46 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v47 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v24, _a4, StateNotificationPostProcessState, v47, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePwrPolNull );
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
      if ( TimerContext.m_Timer.m_IsExtTimer )
      {
        if ( TimerContext.m_Timer.m_KernelExTimer )
        {
          LOBYTE(v20) = 1;
          ExDeleteTimer(TimerContext.m_Timer.m_KernelExTimer, v20, 0LL, 0LL);
        }
      }
    }
  }
  m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0
    && !this->m_PowerPolicyMachine.m_WorkItemRunningCount
    && this->m_PowerPolicyMachine.m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerPolicyMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
    }
    if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_PowerPolicyMachine.m_WorkItemFinished;
      this->m_PowerPolicyMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_31:
  KeReleaseSpinLock(p_m_Lock, v5);
}

/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0023CE0
 * Callers:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025590 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C00320B0 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0012FA8 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0014518 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C001938C (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C00193C8 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0023940 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C00983D4 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C0098588 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r15
  const POWER_POLICY_STATE_TABLE *v4; // rdi
  KIRQL v5; // r8
  FxPowerPolicyEvent v6; // r14d
  unsigned int v7; // ecx
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // esi
  FxDeviceBase *v9; // rax
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // r13d
  FxDeviceBase *v11; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  __int64 v16; // rdx
  FxPowerPolicyStateCallback *v17; // rcx
  __int64 v18; // rdi
  int v19; // r14d
  FxPowerPolicyStateCallback *v20; // rcx
  unsigned __int8 m_QueueFlags; // cl
  int v22; // edx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v23; // rdi
  int CurrentTargetState; // eax
  KIRQL v25; // al
  FxPowerPolicyEvent v26; // r14d
  unsigned int m_SingularEventsPresent; // ecx
  unsigned __int8 TargetStatesCount; // al
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // rcx
  int v30; // edx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r10d
  FxDeviceBase *v36; // r9
  unsigned __int16 v37; // ax
  WDFDEVICE__ *v38; // r9
  FxDeviceBase *v39; // r9
  unsigned __int16 v40; // ax
  WDFDEVICE__ *v41; // r9
  _LARGE_INTEGER v42; // rdx
  FxDeviceBase *v43; // r9
  unsigned __int16 v44; // ax
  WDFDEVICE__ *v45; // r9
  FxDeviceBase *m_DeviceBase; // r10
  unsigned int v47; // edx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v50; // r10
  FxDeviceBase *v51; // r8
  unsigned int v52; // ecx
  _DEVICE_OBJECT *v53; // rdx
  unsigned __int16 v54; // ax
  const void *v55; // r8
  MxTimer TimerContext; // [rsp+60h] [rbp-A0h] BYREF
  FxPkgPnp *v58; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+110h] [rbp+10h] BYREF

  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
LABEL_33:
      v22 = 0;
      v23 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
      CurrentTargetState = 1280;
      do
      {
        if ( CurrentTargetState == *(_DWORD *)&this->m_DeviceBase[1].m_Type )
          goto LABEL_37;
        v23 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v22];
        CurrentTargetState = v23->CurrentTargetState;
      }
      while ( v23->CurrentTargetState != WdfDevStatePwrPolNull );
      v23 = 0LL;
LABEL_37:
      v25 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
      if ( this->m_PowerPolicyMachine.m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail
        || (v26 = this->m_PowerPolicyMachine.m_Queue[this->m_PowerPolicyMachine.m_QueueHead], (v26 & 0x60030) == 0)
        && !v23->QueueOpen )
      {
        KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v25);
        return;
      }
      m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
      if ( (m_SingularEventsPresent & v26) != 0 )
        this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v26;
      this->m_PowerPolicyMachine.m_QueueHead = ((unsigned int)this->m_PowerPolicyMachine.m_QueueHead + 1)
                                             % this->m_PowerPolicyMachine.m_QueueDepth;
      KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v25);
      if ( v23 )
      {
        TargetStatesCount = v23->TargetStatesCount;
        if ( TargetStatesCount )
        {
          TargetStates = v23->TargetStates;
          v30 = 0;
          while ( v26 != TargetStates[v30].PowerPolicyEvent )
          {
            if ( ++v30 >= (unsigned int)TargetStatesCount )
              goto LABEL_33;
          }
          FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, TargetStates[v30].TargetState);
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
      goto LABEL_25;
    v7 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v7 & v6) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v7 & ~v6;
    this->m_PowerPolicyMachine.m_QueueHead = ((unsigned int)this->m_PowerPolicyMachine.m_QueueHead + 1)
                                           % this->m_PowerPolicyMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v5);
    if ( v4->FirstTargetState.PowerPolicyEvent == v6 )
    {
      _a3 = v4->FirstTargetState.TargetState;
      goto LABEL_9;
    }
    OtherTargetStates = v4->OtherTargetStates;
    if ( !OtherTargetStates || (LODWORD(v32) = 0, OtherTargetStates->PowerPolicyEvent == PwrPolNull) )
    {
LABEL_53:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v47 = *(_DWORD *)&m_DeviceBase[1].m_Type;
        m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v50 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v50 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0x13u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v50,
          m_DeviceObject,
          v47,
          v6);
      }
      globals = *(_DWORD *)&v4->StateInfo.Bits >> 1;
      if ( (globals & v6) == 0 )
      {
        v51 = this->m_DeviceBase;
        v52 = *(_DWORD *)&v51[1].m_Type;
        v53 = v51->m_DeviceObject.m_DeviceObject;
        v54 = v51->m_ObjectSize;
        v55 = (const void *)((unsigned __int64)v51 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v54 )
          v55 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          (unsigned int)v55,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v55,
          v53,
          v52,
          v6,
          globals);
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
      v33 = 0LL;
      while ( OtherTargetStates[v33].PowerPolicyEvent != v6 )
      {
        v32 = (unsigned int)(v32 + 1);
        v33 = v32;
        if ( OtherTargetStates[v32].PowerPolicyEvent == PwrPolNull )
          goto LABEL_53;
      }
      _a3 = OtherTargetStates[(unsigned int)v32].TargetState;
LABEL_9:
      if ( _a3 == WdfDevStatePwrPolNull )
        goto LABEL_53;
      v9 = this->m_DeviceBase;
      TimerContext.m_Timer.m_TimerContext = 0LL;
      TimerContext.m_Timer.m_TimerCallback = 0LL;
      TimerContext.m_Timer.m_Period = 0;
      TimerContext.m_Timer.m_KernelExTimer = 0LL;
      v58 = this;
      _a4 = *(_DWORD *)&v9[1].m_Type;
      do
      {
        v11 = this->m_DeviceBase;
        _a2 = v11->m_DeviceObject.m_DeviceObject;
        if ( v11->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
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
          v36 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v37 = v36->m_ObjectSize;
          v38 = (WDFDEVICE__ *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v37 )
            v38 = 0LL;
          FxPowerPolicyStateCallback::Invoke(
            m_PowerPolicyStateCallbacks,
            _a4,
            StateNotificationLeaveState,
            v38,
            &NotificationData);
        }
        m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
        v16 = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
        this->m_PowerPolicyMachine.m_HistoryIndex = v16;
        this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
        v17 = this->m_PowerPolicyStateCallbacks;
        if ( v17 )
        {
          v39 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v40 = v39->m_ObjectSize;
          v41 = (WDFDEVICE__ *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v40 )
            v41 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v17, _a3, StateNotificationEnterState, v41, &NotificationData);
        }
        _a4 = _a3;
        v18 = (_a3 & 0xFFFF7FFF) - 1280;
        *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
        if ( FxPkgPnp::m_WdfPowerPolicyStates[v18].StateFunc )
        {
          v19 = _a3 & 0x8000;
          if ( (_a3 & 0x8000) != 0 )
          {
            MxTimer::Initialize(&TimerContext, &TimerContext, FxWatchdog::_WatchdogDpc, 0);
            CurrentThread = KeGetCurrentThread();
            v42.QuadPart = -6000000000LL;
            if ( v58->m_SharedPower.m_ExtendWatchDogTimer )
              v42.QuadPart = -864000000000LL;
            MxTimer::Start(&TimerContext, v42, 0);
          }
          _a3 = FxPkgPnp::m_WdfPowerPolicyStates[v18].StateFunc(this);
          if ( v19 )
            MxTimer::Stop(&TimerContext);
        }
        else
        {
          _a3 = WdfDevStatePwrPolNull;
        }
        v20 = this->m_PowerPolicyStateCallbacks;
        if ( v20 )
        {
          v43 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          v44 = v43->m_ObjectSize;
          v45 = (WDFDEVICE__ *)((unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v44 )
            v45 = 0LL;
          FxPowerPolicyStateCallback::Invoke(v20, _a4, StateNotificationPostProcessState, v45, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePwrPolNull );
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
      if ( TimerContext.m_Timer.m_IsExtTimer )
      {
        if ( TimerContext.m_Timer.m_KernelExTimer )
        {
          LOBYTE(v16) = 1;
          ExDeleteTimer(TimerContext.m_Timer.m_KernelExTimer, v16, 0LL, 0LL);
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
LABEL_25:
  KeReleaseSpinLock(p_m_Lock, v5);
}

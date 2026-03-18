/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0024F80
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0032140 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0013194 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0014518 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C001938C (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C00193C8 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C00983D4 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C00985C4 (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  FxPostProcessInfo *v2; // r13
  unsigned __int64 *p_m_Lock; // r12
  const POWER_STATE_TABLE *v5; // rsi
  KIRQL v6; // r8
  signed int v7; // r14d
  int m_SingularEventsPresent; // ecx
  const POWER_EVENT_TARGET_STATE *OtherTargetStates; // rdx
  _WDF_DEVICE_POWER_STATE _a3; // edi
  FxDeviceBase *v11; // rax
  _WDF_DEVICE_POWER_STATE _a4; // r15d
  FxDeviceBase *v13; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  __int64 v18; // rdx
  FxPowerStateCallback *v19; // rcx
  __int64 v20; // rsi
  int v21; // r14d
  FxPowerStateCallback *v22; // rcx
  unsigned __int8 m_QueueFlags; // cl
  __int64 v24; // rcx
  __int64 v25; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r10d
  FxDeviceBase *v28; // r9
  unsigned __int16 v29; // ax
  WDFDEVICE__ *v30; // r9
  FxDeviceBase *v31; // r9
  unsigned __int16 v32; // ax
  WDFDEVICE__ *v33; // r9
  _LARGE_INTEGER v34; // rdx
  FxDeviceBase *v35; // r9
  unsigned __int16 v36; // ax
  WDFDEVICE__ *v37; // r9
  FxDeviceBase *m_DeviceBase; // r10
  unsigned int v39; // edx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v42; // r10
  FxDeviceBase *v43; // r8
  unsigned int v44; // ecx
  _DEVICE_OBJECT *v45; // rdx
  unsigned __int16 v46; // ax
  const void *v47; // r8
  MxTimer TimerContext; // [rsp+60h] [rbp-A0h] BYREF
  FxPkgPnp *v50; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _WDF_DEVICE_POWER_NOTIFICATION_DATA NotificationData; // [rsp+110h] [rbp+10h] BYREF

  v2 = Info;
  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  while ( 1 )
  {
    v5 = &FxPkgPnp::m_WdfPowerStates[(HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) & 0xFFFF7FFF)
                                   - 768];
    v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    if ( this->m_PowerMachine.m_QueueHead == this->m_PowerMachine.m_QueueTail )
      break;
    v7 = this->m_PowerMachine.m_Queue.Events[this->m_PowerMachine.m_QueueHead];
    if ( (v7 & 0x3900) == 0 && (*(_DWORD *)&v5->StateInfo.Bits & 1) == 0 )
      goto LABEL_26;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & v7) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)v7;
    this->m_PowerMachine.m_QueueHead = ((unsigned int)this->m_PowerMachine.m_QueueHead + 1)
                                     % this->m_PowerMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v6);
    if ( v5->FirstTargetState.PowerEvent == v7 )
    {
      _a3 = v5->FirstTargetState.TargetState;
      goto LABEL_9;
    }
    OtherTargetStates = v5->OtherTargetStates;
    if ( !OtherTargetStates || (LODWORD(v24) = 0, OtherTargetStates->PowerEvent == PowerEventMaximum) )
    {
LABEL_38:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v39 = HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable);
        m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v42 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v42 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0xCu, 0xCu, WPP_PowerStateMachine_cpp_Traceguids, v42, m_DeviceObject, v39, v7);
      }
      globals = *(_DWORD *)&v5->StateInfo.Bits >> 1;
      if ( (globals & v7) == 0 )
      {
        v43 = this->m_DeviceBase;
        v44 = HIDWORD(v43[1].FxNonPagedObject::FxObject::__vftable);
        v45 = v43->m_DeviceObject.m_DeviceObject;
        v46 = v43->m_ObjectSize;
        v47 = (const void *)((unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v46 )
          v47 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          (unsigned int)v47,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v47,
          v45,
          v44,
          v7,
          globals);
      }
      if ( v7 <= 32 && v7 > 0 )
      {
        if ( v7 <= 2 )
        {
          LOBYTE(OtherTargetStates) = 1;
          this->PowerReleasePendingDeviceIrp(this, (unsigned __int8)OtherTargetStates);
        }
        else if ( v7 == 8 || v7 == 16 || v7 == 32 )
        {
          FxPkgPnp::PowerCompletePendedWakeIrp(this);
        }
      }
    }
    else
    {
      v25 = 0LL;
      while ( OtherTargetStates[v25].PowerEvent != v7 )
      {
        v24 = (unsigned int)(v24 + 1);
        v25 = v24;
        if ( OtherTargetStates[v24].PowerEvent == PowerEventMaximum )
          goto LABEL_38;
      }
      _a3 = OtherTargetStates[(unsigned int)v24].TargetState;
LABEL_9:
      if ( _a3 == WdfDevStatePowerNull )
        goto LABEL_38;
      v11 = this->m_DeviceBase;
      v50 = this;
      TimerContext.m_Timer.m_TimerContext = 0LL;
      TimerContext.m_Timer.m_TimerCallback = 0LL;
      TimerContext.m_Timer.m_Period = 0;
      TimerContext.m_Timer.m_KernelExTimer = 0LL;
      _a4 = HIDWORD(v11[1].FxNonPagedObject::FxObject::__vftable);
      do
      {
        v13 = this->m_DeviceBase;
        _a2 = v13->m_DeviceObject.m_DeviceObject;
        if ( v13->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x15u, 0xEu, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3, _a4);
        m_PowerStateCallbacks = this->m_PowerStateCallbacks;
        if ( m_PowerStateCallbacks )
        {
          v28 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v29 = v28->m_ObjectSize;
          v30 = (WDFDEVICE__ *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v29 )
            v30 = 0LL;
          FxPowerStateCallback::Invoke(m_PowerStateCallbacks, _a4, StateNotificationLeaveState, v30, &NotificationData);
        }
        m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
        v18 = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
        this->m_PowerMachine.m_HistoryIndex = v18;
        this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
        v19 = this->m_PowerStateCallbacks;
        if ( v19 )
        {
          v31 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v32 = v31->m_ObjectSize;
          v33 = (WDFDEVICE__ *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v32 )
            v33 = 0LL;
          FxPowerStateCallback::Invoke(v19, _a3, StateNotificationEnterState, v33, &NotificationData);
        }
        _a4 = _a3;
        v20 = (_a3 & 0xFFFF7FFF) - 768;
        HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
        if ( FxPkgPnp::m_WdfPowerStates[v20].StateFunc )
        {
          v21 = _a3 & 0x8000;
          if ( (_a3 & 0x8000) != 0 )
          {
            MxTimer::Initialize(&TimerContext, &TimerContext, FxWatchdog::_WatchdogDpc, 0);
            CurrentThread = KeGetCurrentThread();
            v34.QuadPart = -6000000000LL;
            if ( v50->m_SharedPower.m_ExtendWatchDogTimer )
              v34.QuadPart = -864000000000LL;
            MxTimer::Start(&TimerContext, v34, 0);
          }
          _a3 = FxPkgPnp::m_WdfPowerStates[v20].StateFunc(this);
          if ( v21 )
            MxTimer::Stop(&TimerContext);
        }
        else
        {
          _a3 = WdfDevStatePowerNull;
        }
        v22 = this->m_PowerStateCallbacks;
        if ( v22 )
        {
          v35 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          v36 = v35->m_ObjectSize;
          v37 = (WDFDEVICE__ *)((unsigned __int64)v35 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v36 )
            v37 = 0LL;
          FxPowerStateCallback::Invoke(v22, _a4, StateNotificationPostProcessState, v37, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePowerNull );
      p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
      v2 = Info;
      if ( TimerContext.m_Timer.m_IsExtTimer )
      {
        if ( TimerContext.m_Timer.m_KernelExTimer )
        {
          LOBYTE(v18) = 1;
          ExDeleteTimer(TimerContext.m_Timer.m_KernelExTimer, v18, 0LL, 0LL);
        }
      }
    }
  }
  m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0
    && !this->m_PowerMachine.m_WorkItemRunningCount
    && this->m_PowerMachine.m_QueueHead == this->m_PowerMachine.m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      v2->m_DeleteObject = 1;
    }
    if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
    {
      v2->m_Event = this->m_PowerMachine.m_WorkItemFinished;
      this->m_PowerMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_26:
  KeReleaseSpinLock(p_m_Lock, v6);
}

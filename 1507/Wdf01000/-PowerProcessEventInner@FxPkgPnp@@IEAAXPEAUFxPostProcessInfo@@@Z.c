/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0019960
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C002A390 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0006648 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C009B514 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C009B6B0 (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  FxPostProcessInfo *v2; // r13
  unsigned __int64 *p_m_Lock; // r12
  const POWER_STATE_TABLE *v5; // rsi
  KIRQL v6; // r8
  signed int v7; // r14d
  int m_SingularEventsPresent; // ecx
  int m_QueueDepth; // ecx
  int v10; // edx
  unsigned __int8 v11; // dl
  __int64 v12; // rdx
  _WDF_DEVICE_POWER_STATE _a3; // edi
  FxDeviceBase *v14; // rax
  _WDF_DEVICE_POWER_STATE _a4; // r15d
  FxDeviceBase *v16; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  __int64 m_HistoryIndex; // rcx
  int v21; // edx
  __int64 v22; // rdx
  FxPowerStateCallback *v23; // rcx
  __int64 v24; // rsi
  int v25; // r14d
  FxPowerStateCallback *v26; // rcx
  unsigned __int8 m_QueueFlags; // cl
  const POWER_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  __int64 v29; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *v31; // r9
  WDFDEVICE__ *v32; // r9
  FxDeviceBase *v33; // r9
  WDFDEVICE__ *v34; // r9
  LARGE_INTEGER v35; // rdx
  FxDeviceBase *v36; // r9
  WDFDEVICE__ *v37; // r9
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v39; // edx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  const void *v41; // rax
  FxDeviceBase *v42; // rcx
  unsigned int v43; // edx
  _DEVICE_OBJECT *v44; // r8
  const void *v45; // rcx
  ULONG Period; // [rsp+60h] [rbp-A0h] BYREF
  char v48; // [rsp+64h] [rbp-9Ch]
  PKDEFERRED_ROUTINE DeferredRoutine; // [rsp+68h] [rbp-98h]
  _KTIMER Timer; // [rsp+70h] [rbp-90h] BYREF
  _KDPC Dpc; // [rsp+B0h] [rbp-50h] BYREF
  PVOID DeferredContext; // [rsp+F0h] [rbp-10h]
  FxPkgPnp *v53; // [rsp+F8h] [rbp-8h]
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
      goto LABEL_30;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & v7) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)v7;
    m_QueueDepth = this->m_PowerMachine.m_QueueDepth;
    v10 = this->m_PowerMachine.m_QueueHead + 1;
    if ( m_QueueDepth == 8 )
      v11 = v10 % 8;
    else
      v11 = v10 % m_QueueDepth;
    this->m_PowerMachine.m_QueueHead = v11;
    KeReleaseSpinLock(p_m_Lock, v6);
    if ( v5->FirstTargetState.PowerEvent == v7 )
    {
      _a3 = v5->FirstTargetState.TargetState;
      goto LABEL_11;
    }
    OtherTargetStates = v5->OtherTargetStates;
    if ( !OtherTargetStates || (v12 = 0LL, OtherTargetStates->PowerEvent == PowerEventMaximum) )
    {
LABEL_42:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v39 = HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable);
        m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
        if ( m_DeviceBase->m_ObjectSize )
          v41 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v41 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0xCu, 0xCu, WPP_PowerStateMachine_cpp_Traceguids, v41, m_DeviceObject, v39, v7);
      }
      if ( ((*(_DWORD *)&v5->StateInfo.Bits >> 1) & v7) == 0 )
      {
        v42 = this->m_DeviceBase;
        v43 = HIDWORD(v42[1].FxNonPagedObject::FxObject::__vftable);
        v44 = v42->m_DeviceObject.m_DeviceObject;
        if ( v42->m_ObjectSize )
          v45 = (const void *)((unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v45 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          (unsigned int)v44,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v45,
          v44,
          v43,
          v7,
          *(_DWORD *)&v5->StateInfo.Bits >> 1);
      }
      if ( v7 <= 32 && v7 > 0 )
      {
        if ( v7 <= 2 )
        {
          LOBYTE(v12) = 1;
          this->PowerReleasePendingDeviceIrp(this, v12);
        }
        else if ( v7 == 8 || v7 == 16 || v7 == 32 )
        {
          FxPkgPnp::PowerCompletePendedWakeIrp(this);
        }
      }
    }
    else
    {
      v29 = 0LL;
      while ( OtherTargetStates[v29].PowerEvent != v7 )
      {
        v12 = (unsigned int)(v12 + 1);
        v29 = v12;
        if ( OtherTargetStates[v12].PowerEvent == PowerEventMaximum )
          goto LABEL_42;
      }
      _a3 = OtherTargetStates[v12].TargetState;
LABEL_11:
      if ( _a3 == WdfDevStatePowerNull )
        goto LABEL_42;
      v14 = this->m_DeviceBase;
      DeferredContext = 0LL;
      DeferredRoutine = 0LL;
      Period = 0;
      *(_QWORD *)&Timer.Header.Lock = 0LL;
      v53 = this;
      _a4 = HIDWORD(v14[1].FxNonPagedObject::FxObject::__vftable);
      do
      {
        v16 = this->m_DeviceBase;
        _a2 = v16->m_DeviceObject.m_DeviceObject;
        if ( v16->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x15u, 0xEu, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3, _a4);
        m_PowerStateCallbacks = this->m_PowerStateCallbacks;
        if ( m_PowerStateCallbacks )
        {
          v31 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          if ( v31->m_ObjectSize )
            v32 = (WDFDEVICE__ *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v32 = 0LL;
          FxPowerStateCallback::Invoke(m_PowerStateCallbacks, _a4, StateNotificationLeaveState, v32, &NotificationData);
        }
        m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
        v21 = m_HistoryIndex + 1;
        if ( this->m_PowerMachine.m_QueueDepth == 8 )
        {
          v22 = v21 & 0x80000007;
          if ( (int)v22 < 0 )
            v22 = ((unsigned __int8)(v22 - 1) | 0xFFFFFFF8) + 1;
        }
        else
        {
          v22 = (unsigned int)(v21 >> 31);
          LODWORD(v22) = __SPAIR64__(v22, (int)m_HistoryIndex + 1) % this->m_PowerMachine.m_QueueDepth;
        }
        this->m_PowerMachine.m_HistoryIndex = v22;
        this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
        v23 = this->m_PowerStateCallbacks;
        if ( v23 )
        {
          v33 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          if ( v33->m_ObjectSize )
            v34 = (WDFDEVICE__ *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v34 = 0LL;
          FxPowerStateCallback::Invoke(v23, _a3, StateNotificationEnterState, v34, &NotificationData);
        }
        _a4 = _a3;
        v24 = (_a3 & 0xFFFF7FFF) - 768;
        HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
        if ( FxPkgPnp::m_WdfPowerStates[v24].StateFunc )
        {
          v25 = _a3 & 0x8000;
          if ( (_a3 & 0x8000) != 0 )
          {
            Period = 0;
            DeferredContext = &Period;
            DeferredRoutine = FxWatchdog::_WatchdogDpc;
            KeInitializeTimerEx(&Timer, NotificationTimer);
            KeInitializeDpc(&Dpc, DeferredRoutine, DeferredContext);
            v48 = 0;
            v35.QuadPart = -6000000000LL;
            CurrentThread = KeGetCurrentThread();
            if ( v53->m_SharedPower.m_ExtendWatchDogTimer )
              v35.QuadPart = -864000000000LL;
            KeSetCoalescableTimer(&Timer, v35, Period, 0, &Dpc);
          }
          _a3 = FxPkgPnp::m_WdfPowerStates[v24].StateFunc(this);
          if ( v25 )
          {
            if ( v48 )
              ExCancelTimer(*(_QWORD *)&Timer.Header.Lock, 0LL);
            else
              KeCancelTimer(&Timer);
          }
        }
        else
        {
          _a3 = WdfDevStatePowerNull;
        }
        v26 = this->m_PowerStateCallbacks;
        if ( v26 )
        {
          v36 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          if ( v36->m_ObjectSize )
            v37 = (WDFDEVICE__ *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v37 = 0LL;
          FxPowerStateCallback::Invoke(v26, _a4, StateNotificationPostProcessState, v37, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePowerNull );
      p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
      v2 = Info;
      if ( v48 )
      {
        if ( *(_QWORD *)&Timer.Header.Lock )
        {
          LOBYTE(v22) = 1;
          ExDeleteTimer(*(_QWORD *)&Timer.Header.Lock, v22, 0LL, 0LL);
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
LABEL_30:
  KeReleaseSpinLock(p_m_Lock, v6);
}

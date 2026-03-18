/*
 * XREFs of ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0024450
 * Callers:
 *     ?PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00126B0 (-PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00130C0 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013A50 (-RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0013D10 (-PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0013D30 (-_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0013F10 (-PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0021490 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0025438 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002A58C (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002C380 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0035E60 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0038340 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?NotPowerPolOwnerStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0038990 (-NotPowerPolOwnerStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0062BEC (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C00953C0 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C0096118 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C00969EC (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099BA0 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099CA0 (-PowerPolRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099F10 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A010 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A1A0 (-PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A250 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A3E0 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009C990 (-NotPowerPolOwnerStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0025930 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0097B20 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerProcessEvent(
        FxPkgPnp *this,
        unsigned int Event,
        unsigned __int8 ProcessOnDifferentThread)
{
  KIRQL v6; // r14
  FxPowerMachine *p_m_PowerMachine; // rbx
  int m_QueueDepth; // r8d
  int v9; // ecx
  int v10; // ecx
  int m_QueueTail; // edx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edx
  unsigned __int8 v16; // dl
  NTSTATUS v17; // ecx
  int v18; // ecx
  int v19; // edx
  unsigned __int8 v20; // dl
  KIRQL v21; // r14
  unsigned __int8 m_QueueFlags; // al
  char v23; // bp
  FxPkgPnp *v24; // rcx
  int m_SingularEventsPresent; // eax
  FxDeviceBase *m_DeviceBase; // rsi
  unsigned int _a3; // eax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rsi
  FxDeviceBase *v30; // rsi
  unsigned int v31; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  const void *v33; // rsi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v35; // rax
  _DEVICE_OBJECT *v36; // rdx
  const void *v37; // rax
  FxPostProcessInfo info; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+B8h] [rbp+20h] BYREF

  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x100) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a3 = HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable);
      _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0xCu, 0xAu, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3, Event);
      KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
      return;
    }
    this->m_PowerMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  p_m_PowerMachine = &this->m_PowerMachine;
  m_QueueDepth = this->m_PowerMachine.m_QueueDepth;
  v9 = this->m_PowerMachine.m_QueueHead + m_QueueDepth - 1;
  if ( m_QueueDepth == 8 )
    v10 = v9 % 8;
  else
    v10 = v9 % m_QueueDepth;
  m_QueueTail = this->m_PowerMachine.m_QueueTail;
  if ( m_QueueDepth == 8 )
    v12 = m_QueueTail % 8;
  else
    v12 = m_QueueTail % m_QueueDepth;
  if ( v10 == v12 )
  {
LABEL_49:
    KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
    return;
  }
  if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    v30 = this->m_DeviceBase;
    v31 = HIDWORD(v30[1].FxNonPagedObject::FxObject::__vftable);
    m_DeviceObject = v30->m_DeviceObject.m_DeviceObject;
    if ( v30->m_ObjectSize )
      v33 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v33 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      v33,
      m_DeviceObject,
      v31,
      Event);
    goto LABEL_49;
  }
  if ( (Event & 0x3900) != 0 )
  {
    v18 = this->m_PowerMachine.m_QueueDepth;
    v19 = p_m_PowerMachine->m_QueueHead + v18 - 1;
    if ( v18 == 8 )
      v20 = v19 % 8;
    else
      v20 = v19 % v18;
    p_m_PowerMachine->m_QueueHead = v20;
    this->m_PowerMachine.m_Queue.Events[v20] = Event;
  }
  else
  {
    v13 = this->m_PowerMachine.m_QueueTail;
    v14 = this->m_PowerMachine.m_QueueDepth;
    v15 = v13 + 1;
    if ( v14 == 8 )
      v16 = v15 % 8;
    else
      v16 = v15 % v14;
    this->m_PowerMachine.m_QueueTail = v16;
    this->m_PowerMachine.m_Queue.Events[v13] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
  if ( !v6 && !ProcessOnDifferentThread )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v17 = KeWaitForSingleObject(&this->m_PowerMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v17 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PowerMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v17 >= 0 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxPkgPnp::PowerProcessEventInner(this, &info);
        this->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( info.m_SetRemovedEvent )
        {
          KeSetEvent(&this->m_DeviceRemoveProcessed->m_Event, 0, 0);
        }
        else
        {
          if ( info.m_FireAndForgetIrp )
          {
            m_FireAndForgetIrp = info.m_FireAndForgetIrp;
            this->FireAndForgetIrp(this, (FxIrp *)&m_FireAndForgetIrp);
          }
          if ( info.m_DeleteObject )
            FxPkgPnp::ProcessDelayedDeletion(this);
          if ( info.m_Event )
            KeSetEvent(&info.m_Event->m_Event.m_Event, 0, 0);
        }
        return;
      }
    }
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( p_m_PowerMachine->m_QueueHead == this->m_PowerMachine.m_QueueTail )
  {
    v23 = 0;
    m_PkgPnp = this->m_PowerMachine.m_PkgPnp;
    v35 = m_PkgPnp->m_DeviceBase;
    v36 = v35->m_DeviceObject.m_DeviceObject;
    if ( v35->m_ObjectSize )
      v37 = (const void *)((unsigned __int64)v35 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v37 = 0LL;
    WPP_IFR_SF_qq(m_PkgPnp->m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v37, v36);
  }
  else
  {
    m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      this->m_PowerMachine.m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v21);
  if ( v23 )
  {
    v24 = this->m_PowerMachine.m_PkgPnp;
    if ( v24->m_HasPowerThread )
      v24->m_PowerThreadInterface.PowerThreadEnqueue(
        v24->m_PowerThreadInterface.Interface.Context,
        &this->m_PowerMachine.m_EventWorkQueueItem);
    else
      IoQueueWorkItem(
        this->m_PowerMachine.m_WorkItem.m_WorkItem,
        FxThreadedEventQueue::_WorkItemCallback,
        DelayedWorkQueue,
        &this->m_PowerMachine);
  }
}

/*
 * XREFs of ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0013E20
 * Callers:
 *     ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000F450 (-RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000F7C0 (-PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000F8E0 (-PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000F9B0 (-_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000FC70 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010030 (-PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010980 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011FF8 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012500 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001491C (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0019258 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00260C0 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0033A60 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?NotPowerPolOwnerStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0033D40 (-NotPowerPolOwnerStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0055504 (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C0086D90 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C0087A38 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C008830C (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?PowerPolRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B050 (-PowerPolRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B340 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B440 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B600 (-PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B6B0 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B7F0 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008DC60 (-NotPowerPolOwnerStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0014E10 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C00893E4 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerProcessEvent(
        FxPkgPnp *this,
        unsigned int Event,
        unsigned __int8 ProcessOnDifferentThread)
{
  KIRQL v6; // r14
  int m_SingularEventsPresent; // ecx
  FxPowerMachine *p_m_PowerMachine; // rsi
  FxDeviceBase *v9; // rbx
  unsigned int v10; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  const void *v12; // rbx
  FxDeviceBase *m_DeviceBase; // rbx
  unsigned int _a3; // eax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rbx
  int m_QueueDepth; // ecx
  int v18; // edx
  __int64 m_QueueTail; // r8
  NTSTATUS v20; // ecx
  KIRQL v21; // r14
  char v22; // di
  FxPkgPnp *m_PkgPnp; // r10
  FxDeviceBase *v24; // rcx
  _DEVICE_OBJECT *v25; // rax
  const void *v26; // rcx
  unsigned __int8 m_QueueFlags; // al
  FxPkgPnp *v28; // rcx
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
  if ( (this->m_PowerMachine.m_QueueDepth + this->m_PowerMachine.m_QueueHead - 1) % this->m_PowerMachine.m_QueueDepth == this->m_PowerMachine.m_QueueTail % (int)this->m_PowerMachine.m_QueueDepth )
  {
LABEL_14:
    KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
    return;
  }
  if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    v9 = this->m_DeviceBase;
    v10 = HIDWORD(v9[1].FxNonPagedObject::FxObject::__vftable);
    m_DeviceObject = v9->m_DeviceObject.m_DeviceObject;
    if ( v9->m_ObjectSize )
      v12 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      v12,
      m_DeviceObject,
      v10,
      Event);
    goto LABEL_14;
  }
  m_QueueDepth = this->m_PowerMachine.m_QueueDepth;
  if ( (Event & 0x3900) != 0 )
  {
    v18 = (m_QueueDepth + p_m_PowerMachine->m_QueueHead - 1) % m_QueueDepth;
    p_m_PowerMachine->m_QueueHead = v18;
    this->m_PowerMachine.m_Queue.Events[(unsigned __int8)v18] = Event;
  }
  else
  {
    m_QueueTail = this->m_PowerMachine.m_QueueTail;
    this->m_PowerMachine.m_QueueTail = ((int)m_QueueTail + 1) % m_QueueDepth;
    this->m_PowerMachine.m_Queue.Events[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
  if ( v6 || ProcessOnDifferentThread )
    goto LABEL_22;
  Timeout.QuadPart = 0LL;
  KeEnterCriticalRegion();
  v20 = KeWaitForSingleObject(&this->m_PowerMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
  if ( v20 == 258 )
  {
    KeLeaveCriticalRegion();
LABEL_22:
    v21 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
    if ( p_m_PowerMachine->m_QueueHead == this->m_PowerMachine.m_QueueTail )
    {
      v22 = 0;
      m_PkgPnp = p_m_PowerMachine->m_PkgPnp;
      v24 = m_PkgPnp->m_DeviceBase;
      v25 = v24->m_DeviceObject.m_DeviceObject;
      if ( v24->m_ObjectSize )
        v26 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      WPP_IFR_SF_qq(m_PkgPnp->m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v26, v25);
    }
    else
    {
      m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
      if ( (m_QueueFlags & 1) != 0 )
      {
        v22 = 0;
      }
      else
      {
        v22 = 1;
        p_m_PowerMachine->m_QueueFlags = m_QueueFlags | 1;
      }
    }
    KeReleaseSpinLock(&p_m_PowerMachine->m_QueueLock.m_Lock, v21);
    if ( v22 )
    {
      v28 = p_m_PowerMachine->m_PkgPnp;
      if ( v28->m_HasPowerThread )
        v28->m_PowerThreadInterface.PowerThreadEnqueue(
          v28->m_PowerThreadInterface.Interface.Context,
          &p_m_PowerMachine->m_EventWorkQueueItem);
      else
        IoQueueWorkItem(
          p_m_PowerMachine->m_WorkItem.m_WorkItem,
          FxThreadedEventQueue::_WorkItemCallback,
          DelayedWorkQueue,
          p_m_PowerMachine);
    }
    return;
  }
  this->m_PowerMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
  if ( v20 < 0 )
    goto LABEL_22;
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
}

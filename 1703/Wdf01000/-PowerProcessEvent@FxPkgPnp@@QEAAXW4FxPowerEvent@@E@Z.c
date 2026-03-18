/*
 * XREFs of ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0
 * Callers:
 *     ?PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012830 (-PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0013380 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00147A0 (-RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0014C10 (-PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0014F10 (-PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0014FB0 (-_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0024A80 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0029CD8 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002B410 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002C680 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0039860 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003B850 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?NotPowerPolOwnerStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003BBB0 (-NotPowerPolOwnerStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0065D10 (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C00997F4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C009A6B4 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C009AD9C (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E470 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E570 (-PowerPolRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E860 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E950 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EAD0 (-PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EBF0 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EDA0 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1550 (-NotPowerPolOwnerStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0024F80 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009BF08 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerProcessEvent(
        FxPkgPnp *this,
        unsigned int Event,
        unsigned __int8 ProcessOnDifferentThread)
{
  KIRQL v6; // bp
  FxPowerMachine *p_m_PowerMachine; // rbx
  unsigned int m_QueueDepth; // r8d
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ecx
  __int64 m_QueueTail; // r8
  NTSTATUS v13; // ecx
  int v14; // edx
  unsigned __int8 v15; // dl
  KIRQL v16; // bp
  unsigned __int8 m_QueueFlags; // al
  char v18; // si
  FxPkgPnp *v19; // rcx
  int m_SingularEventsPresent; // eax
  FxDeviceBase *m_DeviceBase; // r10
  unsigned int _a3; // edx
  _DEVICE_OBJECT *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10
  FxDeviceBase *v26; // r8
  unsigned int v27; // ecx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  unsigned __int16 v29; // ax
  const void *v30; // r8
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v32; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *v34; // r8
  unsigned __int16 v35; // dx
  const void *v36; // r10
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
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
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
    v10 = v9 % (int)m_QueueDepth;
  if ( v10 == this->m_PowerMachine.m_QueueTail % m_QueueDepth )
  {
LABEL_41:
    KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
    return;
  }
  if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    v26 = this->m_DeviceBase;
    v27 = HIDWORD(v26[1].FxNonPagedObject::FxObject::__vftable);
    m_DeviceObject = v26->m_DeviceObject.m_DeviceObject;
    v29 = v26->m_ObjectSize;
    v30 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v29 )
      v30 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      v30,
      m_DeviceObject,
      v27,
      Event);
    goto LABEL_41;
  }
  v11 = this->m_PowerMachine.m_QueueDepth;
  if ( (Event & 0x3900) != 0 )
  {
    v14 = p_m_PowerMachine->m_QueueHead + v11 - 1;
    if ( v11 == 8 )
      v15 = v14 % 8;
    else
      v15 = v14 % (int)v11;
    p_m_PowerMachine->m_QueueHead = v15;
    this->m_PowerMachine.m_Queue.Events[v15] = Event;
  }
  else
  {
    m_QueueTail = this->m_PowerMachine.m_QueueTail;
    this->m_PowerMachine.m_QueueTail = ((int)m_QueueTail + 1) % v11;
    this->m_PowerMachine.m_Queue.Events[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
  if ( !v6 && !ProcessOnDifferentThread )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v13 = KeWaitForSingleObject(&this->m_PowerMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v13 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PowerMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v13 >= 0 )
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
  v16 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( p_m_PowerMachine->m_QueueHead == this->m_PowerMachine.m_QueueTail )
  {
    v18 = 0;
    m_PkgPnp = this->m_PowerMachine.m_PkgPnp;
    v32 = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    v34 = v32->m_DeviceObject.m_DeviceObject;
    v35 = v32->m_ObjectSize;
    v36 = (const void *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v35 )
      v36 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v36, v34);
  }
  else
  {
    m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v18 = 0;
    }
    else
    {
      v18 = 1;
      this->m_PowerMachine.m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v16);
  if ( v18 )
  {
    v19 = this->m_PowerMachine.m_PkgPnp;
    if ( v19->m_HasPowerThread )
      v19->m_PowerThreadInterface.PowerThreadEnqueue(
        v19->m_PowerThreadInterface.Interface.Context,
        &this->m_PowerMachine.m_EventWorkQueueItem);
    else
      IoQueueWorkItem(
        this->m_PowerMachine.m_WorkItem.m_WorkItem,
        FxThreadedEventQueue::_WorkItemCallback,
        DelayedWorkQueue,
        &this->m_PowerMachine);
  }
}

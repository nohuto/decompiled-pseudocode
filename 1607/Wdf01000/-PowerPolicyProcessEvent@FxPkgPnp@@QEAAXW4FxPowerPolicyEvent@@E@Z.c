/*
 * XREFs of ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0012F94 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?InDxIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00133D0 (-InDxIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0013450 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013530 (-_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001369C (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0013C00 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013C30 (-_SystemPowerSxCompletion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00141E0 (-_PowerPolDeviceWaitWakeComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_ST.c)
 *     ?PowerRequiredDx@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0014290 (-PowerRequiredDx@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C4E0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C00251DC (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0025438 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C00256B8 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C00258D0 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002C500 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C002EDD0 (-PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA-AW4FxDevicePwrRequirementStates@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0038060 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0038D00 (-TimingOut@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0062884 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00628AC (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0092970 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedIoStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00929E0 (-PnpEventFailedIoStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00934B0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00934E0 (-PnpEventFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0093500 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00935B0 (-PnpEventRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueriedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00935D0 (-PnpEventQueriedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0095840 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C00958BC (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?DisablingTimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0098A60 (-DisablingTimerExpired@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0098B40 (-TimedOutIoIncrement@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C009AD80 (-_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEA.c)
 *     ?Waking@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C009C4B0 (-Waking@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C009C8A0 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0024720 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0097B20 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEvent(FxPkgPnp *this, FxPowerPolicyEvent Event, unsigned __int8 a3)
{
  KIRQL v5; // bp
  FxPowerPolicyMachine *p_m_PowerPolicyMachine; // rbx
  int m_QueueDepth; // r8d
  int v8; // ecx
  int v9; // ecx
  int m_QueueTail; // edx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned __int8 v15; // dl
  NTSTATUS v16; // ecx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // edx
  unsigned __int8 v20; // dl
  KIRQL v21; // r14
  unsigned __int8 m_QueueFlags; // al
  char v23; // bp
  FxPkgPnp *v24; // rcx
  unsigned int m_SingularEventsPresent; // eax
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

  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x2002000) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a3 = *(_DWORD *)&m_DeviceBase[1].m_Type;
      _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0xCu,
        0x11u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        _a2,
        _a3,
        Event);
      KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
      return;
    }
    this->m_PowerPolicyMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
  m_QueueDepth = this->m_PowerPolicyMachine.m_QueueDepth;
  v8 = this->m_PowerPolicyMachine.m_QueueHead + m_QueueDepth - 1;
  if ( m_QueueDepth == 8 )
    v9 = v8 % 8;
  else
    v9 = v8 % m_QueueDepth;
  m_QueueTail = this->m_PowerPolicyMachine.m_QueueTail;
  if ( m_QueueDepth == 8 )
    v11 = m_QueueTail % 8;
  else
    v11 = m_QueueTail % m_QueueDepth;
  if ( v9 == v11 )
  {
LABEL_50:
    KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
    return;
  }
  if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
  {
    v30 = this->m_DeviceBase;
    v31 = *(_DWORD *)&v30[1].m_Type;
    m_DeviceObject = v30->m_DeviceObject.m_DeviceObject;
    if ( v30->m_ObjectSize )
      v33 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v33 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0x12u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      v33,
      m_DeviceObject,
      v31,
      Event);
    goto LABEL_50;
  }
  v12 = 393264;
  if ( this->m_PowerPolicyMachine.m_Owner )
    v12 = 37685232;
  if ( (v12 & Event) != 0 )
  {
    v13 = this->m_PowerPolicyMachine.m_QueueDepth;
    v14 = p_m_PowerPolicyMachine->m_QueueHead + v13 - 1;
    if ( v13 == 8 )
      v15 = v14 % 8;
    else
      v15 = v14 % v13;
    p_m_PowerPolicyMachine->m_QueueHead = v15;
    this->m_PowerPolicyMachine.m_Queue[v15] = Event;
  }
  else
  {
    v17 = this->m_PowerPolicyMachine.m_QueueTail;
    v18 = this->m_PowerPolicyMachine.m_QueueDepth;
    v19 = v17 + 1;
    if ( v18 == 8 )
      v20 = v19 % 8;
    else
      v20 = v19 % v18;
    this->m_PowerPolicyMachine.m_QueueTail = v20;
    this->m_PowerPolicyMachine.m_Queue[v17] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v5);
  if ( !v5 )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v16 = KeWaitForSingleObject(&this->m_PowerPolicyMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v16 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v16 >= 0 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxPkgPnp::PowerPolicyProcessEventInner(this, &info);
        this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
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
  v21 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( p_m_PowerPolicyMachine->m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail )
  {
    v23 = 0;
    m_PkgPnp = this->m_PowerPolicyMachine.m_PkgPnp;
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
    m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      this->m_PowerPolicyMachine.m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v21);
  if ( v23 )
  {
    v24 = this->m_PowerPolicyMachine.m_PkgPnp;
    if ( v24->m_HasPowerThread )
      v24->m_PowerThreadInterface.PowerThreadEnqueue(
        v24->m_PowerThreadInterface.Interface.Context,
        &this->m_PowerPolicyMachine.m_EventWorkQueueItem);
    else
      IoQueueWorkItem(
        this->m_PowerPolicyMachine.m_WorkItem.m_WorkItem,
        FxThreadedEventQueue::_WorkItemCallback,
        DelayedWorkQueue,
        &this->m_PowerPolicyMachine);
  }
}

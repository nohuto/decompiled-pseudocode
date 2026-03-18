/*
 * XREFs of ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0
 * Callers:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C000F138 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?PowerPolStartingSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0012570 (-PowerPolStartingSucceeded@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012820 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C00128A0 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0012D34 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C00168F0 (-FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0016D00 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0018C60 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0026490 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0026988 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00320C0 (-StartedPowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0033650 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?NotPowerPolOwnerStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0034040 (-NotPowerPolOwnerStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C005FDA0 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00847C0 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084D30 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00871B0 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C008722C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0088050 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00893B4 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0089870 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C00898A0 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C00898E0 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0089910 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0089940 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0089A90 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AEB0 (-PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B010 (-PowerPolRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRestartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B080 (-PowerPolRestartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B150 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B5B0 (-PowerPolStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B940 (-PowerPolStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008DC20 (-NotPowerPolOwnerRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008DC40 (-NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008DC80 (-NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008DCA0 (-NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0015E30 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C00893E4 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpProcessEvent(FxPkgPnp *this, FxPnpEvent Event, unsigned __int8 a3)
{
  KIRQL v5; // r14
  FxPnpMachine *p_m_PnpMachine; // rdi
  FxDeviceBase *m_DeviceBase; // rbx
  unsigned int _a3; // eax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rbx
  unsigned __int16 v11; // r9
  FxDeviceBase *v12; // rbx
  int m_QueueDepth; // ecx
  int v14; // edx
  __int64 m_QueueTail; // r8
  NTSTATUS v16; // ecx
  KIRQL v17; // r14
  char v18; // si
  FxPkgPnp *m_PkgPnp; // r10
  FxDeviceBase *v20; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rax
  const void *v22; // rcx
  unsigned __int8 m_QueueFlags; // al
  FxPostProcessInfo info; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+B8h] [rbp+20h] BYREF

  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
  p_m_PnpMachine = &this->m_PnpMachine;
  if ( (this->m_PnpMachine.m_QueueDepth + this->m_PnpMachine.m_QueueHead - 1) % this->m_PnpMachine.m_QueueDepth == this->m_PnpMachine.m_QueueTail % (int)this->m_PnpMachine.m_QueueDepth )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a3 = (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = 10;
LABEL_6:
    WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0xCu, v11, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, _a3, Event);
    KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
    return;
  }
  if ( (this->m_PnpMachine.m_QueueFlags & 2) != 0 )
  {
    v12 = this->m_DeviceBase;
    _a3 = (unsigned int)v12[1].FxNonPagedObject::FxObject::__vftable;
    _a2 = v12->m_DeviceObject.m_DeviceObject;
    if ( v12->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = 11;
    goto LABEL_6;
  }
  m_QueueDepth = this->m_PnpMachine.m_QueueDepth;
  if ( (Event & 0x3C3000) != 0 )
  {
    v14 = (m_QueueDepth + p_m_PnpMachine->m_QueueHead - 1) % m_QueueDepth;
    p_m_PnpMachine->m_QueueHead = v14;
    this->m_PnpMachine.m_Queue[(unsigned __int8)v14] = Event;
  }
  else
  {
    m_QueueTail = this->m_PnpMachine.m_QueueTail;
    this->m_PnpMachine.m_QueueTail = ((int)m_QueueTail + 1) % m_QueueDepth;
    this->m_PnpMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
  if ( v5 )
    goto LABEL_18;
  Timeout.QuadPart = 0LL;
  KeEnterCriticalRegion();
  v16 = KeWaitForSingleObject(&this->m_PnpMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
  if ( v16 == 258 )
  {
    KeLeaveCriticalRegion();
LABEL_18:
    v17 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
    if ( p_m_PnpMachine->m_QueueHead == this->m_PnpMachine.m_QueueTail )
    {
      v18 = 0;
      m_PkgPnp = p_m_PnpMachine->m_PkgPnp;
      v20 = m_PkgPnp->m_DeviceBase;
      m_DeviceObject = v20->m_DeviceObject.m_DeviceObject;
      if ( v20->m_ObjectSize )
        v22 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v22 = 0LL;
      WPP_IFR_SF_qq(m_PkgPnp->m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v22, m_DeviceObject);
    }
    else
    {
      m_QueueFlags = this->m_PnpMachine.m_QueueFlags;
      if ( (m_QueueFlags & 1) != 0 )
      {
        v18 = 0;
      }
      else
      {
        v18 = 1;
        p_m_PnpMachine->m_QueueFlags = m_QueueFlags | 1;
      }
    }
    KeReleaseSpinLock(&p_m_PnpMachine->m_QueueLock.m_Lock, v17);
    if ( v18 )
    {
      ObfReferenceObject(p_m_PnpMachine->m_PkgPnp->m_Globals->Driver->m_DriverObject.m_DriverObject);
      _InterlockedIncrement(&p_m_PnpMachine->m_PkgPnp->m_Globals->Refcnt);
      IoQueueWorkItem(
        p_m_PnpMachine->m_WorkItem.m_WorkItem,
        FxWorkItemEventQueue::_WorkItemCallback,
        DelayedWorkQueue,
        p_m_PnpMachine);
    }
    return;
  }
  this->m_PnpMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
  if ( v16 < 0 )
    goto LABEL_18;
  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  FxPkgPnp::PnpProcessEventInner(this, &info);
  this->m_PnpMachine.m_StateMachineLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_PnpMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
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

/*
 * XREFs of ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0024050
 * Callers:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C00137A8 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0021900 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021DF8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0023B00 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C0027210 (-FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027610 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0029810 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0035970 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0036460 (-StartedPowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0036E80 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0038060 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?PowerPolStartingSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0038180 (-PowerPolStartingSucceeded@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0038CE0 (-NotPowerPolOwnerStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C006DA20 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0092610 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0092B50 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0095840 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C00958BC (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0096730 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0097AA0 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0097FB0 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0097FE0 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0098020 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0098050 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0098080 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C00981D0 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099AD0 (-PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099C60 (-PowerPolRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRestartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099CD0 (-PowerPolRestartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099D20 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A150 (-PowerPolStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A4E0 (-PowerPolStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009C950 (-NotPowerPolOwnerRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009C970 (-NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009C9B0 (-NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009C9D0 (-NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00268C0 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0097B20 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpProcessEvent(FxPkgPnp *this, FxPnpEvent Event, unsigned __int8 a3)
{
  FxPnpMachine *p_m_PnpMachine; // rbx
  KIRQL v6; // si
  int m_QueueDepth; // ecx
  int v8; // r9d
  int v9; // r9d
  int m_QueueTail; // edx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // edx
  unsigned __int8 v15; // dl
  NTSTATUS v16; // ecx
  KIRQL v17; // r14
  unsigned __int8 m_QueueFlags; // al
  char v19; // si
  int v20; // ecx
  int v21; // edx
  unsigned __int8 v22; // dl
  FxDeviceBase *m_DeviceBase; // rbp
  unsigned int _a3; // eax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rbp
  unsigned __int16 v27; // r9
  FxDeviceBase *v28; // rbp
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v30; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v32; // rax
  FxPostProcessInfo info; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+B8h] [rbp+20h] BYREF

  p_m_PnpMachine = &this->m_PnpMachine;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
  m_QueueDepth = this->m_PnpMachine.m_QueueDepth;
  v8 = this->m_PnpMachine.m_QueueHead + m_QueueDepth - 1;
  if ( m_QueueDepth == 8 )
    v9 = v8 % 8;
  else
    v9 = v8 % m_QueueDepth;
  m_QueueTail = this->m_PnpMachine.m_QueueTail;
  if ( m_QueueDepth == 8 )
    v11 = m_QueueTail % 8;
  else
    v11 = m_QueueTail % m_QueueDepth;
  if ( v9 == v11 )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a3 = (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v27 = 10;
    goto LABEL_41;
  }
  if ( (this->m_PnpMachine.m_QueueFlags & 2) != 0 )
  {
    v28 = this->m_DeviceBase;
    _a3 = (unsigned int)v28[1].FxNonPagedObject::FxObject::__vftable;
    _a2 = v28->m_DeviceObject.m_DeviceObject;
    if ( v28->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v27 = 11;
LABEL_41:
    WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0xCu, v27, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, _a3, Event);
    KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v6);
    return;
  }
  if ( (Event & 0x3C3000) != 0 )
  {
    v20 = this->m_PnpMachine.m_QueueDepth;
    v21 = p_m_PnpMachine->m_QueueHead + v20 - 1;
    if ( v20 == 8 )
      v22 = v21 % 8;
    else
      v22 = v21 % v20;
    p_m_PnpMachine->m_QueueHead = v22;
    this->m_PnpMachine.m_Queue[v22] = Event;
  }
  else
  {
    v12 = this->m_PnpMachine.m_QueueTail;
    v13 = this->m_PnpMachine.m_QueueDepth;
    v14 = v12 + 1;
    if ( v13 == 8 )
      v15 = v14 % 8;
    else
      v15 = v14 % v13;
    this->m_PnpMachine.m_QueueTail = v15;
    this->m_PnpMachine.m_Queue[v12] = Event;
  }
  KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v6);
  if ( !v6 )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v16 = KeWaitForSingleObject(&this->m_PnpMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v16 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PnpMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v16 >= 0 )
      {
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
        return;
      }
    }
  }
  v17 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
  if ( p_m_PnpMachine->m_QueueHead == this->m_PnpMachine.m_QueueTail )
  {
    v19 = 0;
    m_PkgPnp = this->m_PnpMachine.m_PkgPnp;
    v30 = m_PkgPnp->m_DeviceBase;
    m_DeviceObject = v30->m_DeviceObject.m_DeviceObject;
    if ( v30->m_ObjectSize )
      v32 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v32 = 0LL;
    WPP_IFR_SF_qq(m_PkgPnp->m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v32, m_DeviceObject);
  }
  else
  {
    m_QueueFlags = this->m_PnpMachine.m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v19 = 1;
      this->m_PnpMachine.m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v17);
  if ( v19 )
  {
    ObfReferenceObject(this->m_PnpMachine.m_PkgPnp->m_Globals->Driver->m_DriverObject.m_DriverObject);
    _InterlockedIncrement(&this->m_PnpMachine.m_PkgPnp->m_Globals->Refcnt);
    IoQueueWorkItem(
      this->m_PnpMachine.m_WorkItem.m_WorkItem,
      FxWorkItemEventQueue::_WorkItemCallback,
      DelayedWorkQueue,
      &this->m_PnpMachine);
  }
}

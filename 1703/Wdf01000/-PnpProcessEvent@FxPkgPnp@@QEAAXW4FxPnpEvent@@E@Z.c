/*
 * XREFs of ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450
 * Callers:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C00144E0 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0022E58 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026670 (-FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027290 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0028FC0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002CE60 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3A0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0038F10 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0039410 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C003A010 (-StartedPowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C003B210 (-_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_S.c)
 *     ?PowerPolStartingSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003B360 (-PowerPolStartingSucceeded@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003BEE0 (-NotPowerPolOwnerStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C0071444 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0096840 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0096DD0 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C0099CD4 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C0099D68 (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C009AA64 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009BE80 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C3D0 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C410 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C460 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C4A0 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C4D0 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C630 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E380 (-PowerPolDeviceD0PowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E520 (-PowerPolRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolRestartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E5B0 (-PowerPolRestartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009E600 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EA80 (-PowerPolStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009EEB0 (-PowerPolStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1510 (-NotPowerPolOwnerRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1530 (-NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1580 (-NotPowerPolOwnerStoppingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A15A0 (-NotPowerPolOwnerStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0026220 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009BF08 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpProcessEvent(FxPkgPnp *this, FxPnpEvent Event, unsigned __int8 a3)
{
  unsigned __int64 *p_m_Lock; // rbp
  FxPnpMachine *p_m_PnpMachine; // rbx
  KIRQL v7; // si
  unsigned int m_QueueDepth; // ecx
  int v9; // r8d
  int v10; // r8d
  unsigned int v11; // ecx
  __int64 m_QueueTail; // r8
  NTSTATUS v13; // ecx
  KIRQL v14; // bp
  unsigned __int8 m_QueueFlags; // al
  char v16; // si
  int v17; // edx
  unsigned __int8 v18; // dl
  FxDeviceBase *m_DeviceBase; // r10
  unsigned int _a3; // edx
  _DEVICE_OBJECT *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10
  FxDeviceBase *v24; // r8
  unsigned int v25; // ecx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  unsigned __int16 v27; // ax
  const void *v28; // r8
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v30; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *v32; // r8
  unsigned __int16 v33; // dx
  const void *v34; // r10
  FxPostProcessInfo info; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+B8h] [rbp+20h] BYREF

  p_m_Lock = &this->m_PnpMachine.m_QueueLock.m_Lock;
  p_m_PnpMachine = &this->m_PnpMachine;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
  m_QueueDepth = this->m_PnpMachine.m_QueueDepth;
  v9 = m_QueueDepth + this->m_PnpMachine.m_QueueHead - 1;
  if ( m_QueueDepth == 8 )
    v10 = v9 % 8;
  else
    v10 = v9 % (int)m_QueueDepth;
  if ( v10 == this->m_PnpMachine.m_QueueTail % m_QueueDepth )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a3 = (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0xCu, 0xAu, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, _a3, Event);
    KeReleaseSpinLock(p_m_Lock, v7);
  }
  else if ( (this->m_PnpMachine.m_QueueFlags & 2) != 0 )
  {
    v24 = this->m_DeviceBase;
    v25 = (unsigned int)v24[1].FxNonPagedObject::FxObject::__vftable;
    m_DeviceObject = v24->m_DeviceObject.m_DeviceObject;
    v27 = v24->m_ObjectSize;
    v28 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v27 )
      v28 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PnpStateMachine_cpp_Traceguids,
      v28,
      m_DeviceObject,
      v25,
      Event);
    KeReleaseSpinLock(p_m_Lock, v7);
  }
  else
  {
    v11 = this->m_PnpMachine.m_QueueDepth;
    if ( (Event & 0x3C3000) != 0 )
    {
      v17 = p_m_PnpMachine->m_QueueHead + v11 - 1;
      if ( v11 == 8 )
        v18 = v17 % 8;
      else
        v18 = v17 % (int)v11;
      p_m_PnpMachine->m_QueueHead = v18;
      this->m_PnpMachine.m_Queue[v18] = Event;
    }
    else
    {
      m_QueueTail = this->m_PnpMachine.m_QueueTail;
      this->m_PnpMachine.m_QueueTail = ((int)m_QueueTail + 1) % v11;
      this->m_PnpMachine.m_Queue[m_QueueTail] = Event;
    }
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( !v7 )
    {
      Timeout.QuadPart = 0LL;
      KeEnterCriticalRegion();
      v13 = KeWaitForSingleObject(&this->m_PnpMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
      if ( v13 == 258 )
      {
        KeLeaveCriticalRegion();
      }
      else
      {
        this->m_PnpMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
        if ( v13 >= 0 )
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
    v14 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
    if ( p_m_PnpMachine->m_QueueHead == this->m_PnpMachine.m_QueueTail )
    {
      v16 = 0;
      m_PkgPnp = this->m_PnpMachine.m_PkgPnp;
      v30 = m_PkgPnp->m_DeviceBase;
      m_Globals = m_PkgPnp->m_Globals;
      v32 = v30->m_DeviceObject.m_DeviceObject;
      v33 = v30->m_ObjectSize;
      v34 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v33 )
        v34 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v34, v32);
    }
    else
    {
      m_QueueFlags = this->m_PnpMachine.m_QueueFlags;
      if ( (m_QueueFlags & 1) != 0 )
      {
        v16 = 0;
      }
      else
      {
        v16 = 1;
        this->m_PnpMachine.m_QueueFlags = m_QueueFlags | 1;
      }
    }
    KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v14);
    if ( v16 )
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
}

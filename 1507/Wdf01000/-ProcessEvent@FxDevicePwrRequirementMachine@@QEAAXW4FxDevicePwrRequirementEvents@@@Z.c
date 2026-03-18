/*
 * XREFs of ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C00A3F64
 * Callers:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0006898 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C001E67C (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001E8B0 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0BC0 (-PowerPolStoppedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C00A3D74 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C00A3DE8 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C00A3E44 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0030680 (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C005D02C (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009E6D0 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00A411C (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::ProcessEvent(
        FxDevicePwrRequirementMachine *this,
        FxDevicePwrRequirementEvents Event)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 m_QueueTail; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  _DEVICE_OBJECT *_a2; // r8
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v11; // rdx
  int v12; // eax
  _FX_DRIVER_GLOBALS *v13; // rdx
  FxPkgPnp *m_PkgPnp; // rbx
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxPostProcessInfo info; // [rsp+50h] [rbp-20h] BYREF
  __int64 timeout; // [rsp+90h] [rbp+20h] BYREF

  p_m_Lock = &this->m_QueueLock.m_Lock;
  timeout = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  v6 = v5;
  m_QueueTail = this->m_QueueTail;
  if ( (this->m_QueueDepth + this->m_QueueHead - 1) % this->m_QueueDepth == this->m_QueueTail % (int)this->m_QueueDepth )
  {
LABEL_2:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  if ( (this->m_QueueFlags & 2) != 0 )
  {
    m_DeviceBase = this->m_PoxInterface->m_PkgPnp->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_PkgPnp->m_Globals,
      4u,
      0xCu,
      0xAu,
      WPP_DevicePwrReqStateMachine_cpp_Traceguids,
      _a1,
      _a2,
      this->m_CurrentState,
      Event);
    goto LABEL_2;
  }
  this->m_QueueTail = ((int)m_QueueTail + 1) % this->m_QueueDepth;
  this->m_Queue[m_QueueTail] = Event;
  KeReleaseSpinLock(p_m_Lock, v5);
  if ( v6
    || (v12 = FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, v11, (_LARGE_INTEGER *)&timeout),
        !FxWaitLockInternal::IsLockAcquired(v12)) )
  {
    FxThreadedEventQueue::QueueToThread(this);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxDevicePwrRequirementMachine::ProcessEventInner(this, &info);
    FxWaitLockInternal::ReleaseLock(&this->m_StateMachineLock, v13);
    m_PkgPnp = this->m_PkgPnp;
    if ( info.m_SetRemovedEvent )
    {
      m_DeviceRemoveProcessed = (FxCREvent *)m_PkgPnp->m_DeviceRemoveProcessed;
LABEL_17:
      KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
      return;
    }
    if ( info.m_FireAndForgetIrp )
    {
      timeout = (__int64)info.m_FireAndForgetIrp;
      m_PkgPnp->FireAndForgetIrp(m_PkgPnp, (FxIrp *)&timeout);
    }
    if ( info.m_DeleteObject )
      FxPkgPnp::ProcessDelayedDeletion(m_PkgPnp);
    m_DeviceRemoveProcessed = info.m_Event;
    if ( info.m_Event )
      goto LABEL_17;
  }
}

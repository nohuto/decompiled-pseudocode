/*
 * XREFs of ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0003F04
 * Callers:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0010A0C (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0025D60 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C0027538 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B620 (-PowerPolStoppedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008E088 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C008E0FC (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C008E158 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C002C24C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0033FD8 (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0056BD4 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C0056E90 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
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
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  __int64 timeout; // [rsp+90h] [rbp+8h] BYREF

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
    || (v12 = FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, v11, &timeout),
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
    FxPostProcessInfo::Evaluate(&info, this->m_PkgPnp);
  }
}

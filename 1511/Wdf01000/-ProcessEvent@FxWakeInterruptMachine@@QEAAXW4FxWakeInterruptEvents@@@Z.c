/*
 * XREFs of ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008D674
 * Callers:
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C00564FC (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C0089590 (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C002C24C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0033FD8 (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C0056E90 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C008D7CC (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEvent(FxWakeInterruptMachine *this, FxWakeInterruptEvents Event)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 m_QueueTail; // rcx
  FxPkgPnp *m_PkgPnp; // r10
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rcx
  _FX_DRIVER_GLOBALS *v12; // rdx
  int v13; // eax
  _FX_DRIVER_GLOBALS *v14; // rdx
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
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      m_PkgPnp->m_Globals,
      4u,
      0xCu,
      0xAu,
      WPP_WakeInterruptStateMachine_cpp_Traceguids,
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
    || (v13 = FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, v12, (_LARGE_INTEGER *)&timeout),
        !FxWaitLockInternal::IsLockAcquired(v13)) )
  {
    FxThreadedEventQueue::QueueToThread(this);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxWakeInterruptMachine::ProcessEventInner(this, &info);
    FxWaitLockInternal::ReleaseLock(&this->m_StateMachineLock, v14);
    FxPostProcessInfo::Evaluate(&info, this->m_PkgPnp);
  }
}

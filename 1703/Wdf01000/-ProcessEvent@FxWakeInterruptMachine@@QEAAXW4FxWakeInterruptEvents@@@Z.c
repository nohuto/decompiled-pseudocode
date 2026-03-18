/*
 * XREFs of ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A0CA8
 * Callers:
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C0066CD0 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009C0EC (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0032054 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C00327DC (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0032B70 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0032C68 (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00A0E18 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEvent(FxWakeInterruptMachine *this, FxWakeInterruptEvents Event)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 m_QueueTail; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10
  _FX_DRIVER_GLOBALS *v14; // rdx
  int v15; // eax
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  __int64 timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_QueueLock.m_Lock;
  timeout = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  v6 = v5;
  m_QueueTail = this->m_QueueTail;
  if ( (this->m_QueueDepth + this->m_QueueHead - 1) % this->m_QueueDepth == this->m_QueueTail
                                                                          % (unsigned int)this->m_QueueDepth )
  {
LABEL_2:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  if ( (this->m_QueueFlags & 2) != 0 )
  {
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      m_Globals,
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
  this->m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_QueueDepth;
  this->m_Queue[m_QueueTail] = Event;
  KeReleaseSpinLock(p_m_Lock, v5);
  if ( v6
    || (v15 = FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, v14, (_LARGE_INTEGER *)&timeout),
        !FxWaitLockInternal::IsLockAcquired(v15)) )
  {
    FxThreadedEventQueue::QueueToThread(this);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxWakeInterruptMachine::ProcessEventInner(this, &info);
    this->m_StateMachineLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_StateMachineLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPostProcessInfo::Evaluate(&info, this->m_PkgPnp);
  }
}

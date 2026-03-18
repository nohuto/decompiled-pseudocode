/*
 * XREFs of ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00A0E18
 * Callers:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A0CA8 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C00A1030 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00326F0 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEventInner(FxWakeInterruptMachine *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v4; // al
  unsigned __int8 m_QueueHead; // dl
  FxWakeInterruptEvents _a4; // ebp
  int v7; // ecx
  __int64 v8; // rax
  unsigned int TargetStatesCount; // r8d
  const FxWakeInterruptTargetState *TargetStates; // rdx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10
  int _a3; // edi
  FxPkgPnp *v18; // rcx
  FxDeviceBase *v19; // r10
  _FX_DRIVER_GLOBALS *v20; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  unsigned __int16 v22; // ax
  const void *v23; // r10
  __int64 m_HistoryIndex; // r8
  FxWakeInterruptStates (__fastcall *StateFunc)(FxWakeInterruptMachine *); // rax
  KIRQL v26; // r9

  p_m_Lock = &this->m_QueueLock.m_Lock;
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( this->m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((unsigned int)m_QueueHead + 1) % this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v4);
    v7 = 0;
    v8 = this->m_CurrentState - 1;
    TargetStatesCount = FxWakeInterruptMachine::m_StateTable[v8].TargetStatesCount;
    if ( !TargetStatesCount )
      goto LABEL_7;
    TargetStates = FxWakeInterruptMachine::m_StateTable[v8].TargetStates;
    while ( TargetStates[v7].WakeInterruptEvent != _a4 )
    {
      if ( ++v7 >= TargetStatesCount )
        goto LABEL_7;
    }
    _a3 = TargetStates[v7].WakeInterruptState;
    if ( _a3 == 10 )
    {
LABEL_7:
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
        0xBu,
        WPP_WakeInterruptStateMachine_cpp_Traceguids,
        _a1,
        _a2,
        this->m_CurrentState,
        _a4);
    }
    else
    {
      do
      {
        v18 = this->m_PkgPnp;
        v19 = v18->m_DeviceBase;
        v20 = v18->m_Globals;
        m_DeviceObject = v19->m_DeviceObject.m_DeviceObject;
        v22 = v19->m_ObjectSize;
        v23 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v22 )
          v23 = 0LL;
        WPP_IFR_SF_qqLL(
          v20,
          4u,
          0x15u,
          0xCu,
          WPP_WakeInterruptStateMachine_cpp_Traceguids,
          v23,
          m_DeviceObject,
          _a3,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
        this->m_States.History[m_HistoryIndex] = _a3;
        this->m_CurrentState = _a3;
        StateFunc = FxWakeInterruptMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
        if ( StateFunc )
          _a3 = StateFunc(this);
        else
          _a3 = 10;
      }
      while ( _a3 != 10 );
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v26);
}

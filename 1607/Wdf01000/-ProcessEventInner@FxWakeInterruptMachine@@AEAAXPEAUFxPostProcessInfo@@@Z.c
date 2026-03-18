/*
 * XREFs of ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C009C2AC
 * Callers:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009C154 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C009C4D0 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002E654 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEventInner(FxWakeInterruptMachine *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  unsigned __int8 m_QueueHead; // dl
  FxWakeInterruptEvents _a4; // ebp
  int v8; // ecx
  __int64 v9; // rax
  unsigned int TargetStatesCount; // r8d
  const FxWakeInterruptTargetState *TargetStates; // rdx
  int _a3; // edi
  FxPkgPnp *v13; // r10
  FxDeviceBase *v14; // rcx
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rcx
  __int64 m_HistoryIndex; // r8
  FxWakeInterruptStates (__fastcall *StateFunc)(FxWakeInterruptMachine *); // rax
  FxPkgPnp *m_PkgPnp; // r10
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v22; // rcx
  KIRQL v23; // r9

  p_m_Lock = &this->m_QueueLock.m_Lock;
  while ( 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( this->m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = (m_QueueHead + 1) % this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v5);
    v8 = 0;
    v9 = this->m_CurrentState - 1;
    TargetStatesCount = FxWakeInterruptMachine::m_StateTable[v9].TargetStatesCount;
    if ( !TargetStatesCount )
      goto LABEL_17;
    TargetStates = FxWakeInterruptMachine::m_StateTable[v9].TargetStates;
    while ( TargetStates[v8].WakeInterruptEvent != _a4 )
    {
      if ( ++v8 >= TargetStatesCount )
        goto LABEL_17;
    }
    _a3 = TargetStates[v8].WakeInterruptState;
    if ( _a3 == 10 )
    {
LABEL_17:
      m_PkgPnp = this->m_PkgPnp;
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        v22 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v22 = 0LL;
      WPP_IFR_SF_qqLL(
        m_PkgPnp->m_Globals,
        4u,
        0xCu,
        0xBu,
        WPP_WakeInterruptStateMachine_cpp_Traceguids,
        v22,
        m_DeviceObject,
        this->m_CurrentState,
        _a4);
    }
    else
    {
      do
      {
        v13 = this->m_PkgPnp;
        v14 = v13->m_DeviceBase;
        _a2 = v14->m_DeviceObject.m_DeviceObject;
        if ( v14->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          v13->m_Globals,
          4u,
          0x15u,
          0xCu,
          WPP_WakeInterruptStateMachine_cpp_Traceguids,
          _a1,
          _a2,
          _a3,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % this->m_QueueDepth;
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
  KeReleaseSpinLock(p_m_Lock, v23);
}

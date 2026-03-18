/*
 * XREFs of ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00322E8
 * Callers:
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0032280 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0032494 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00326F0 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::ProcessEventInner(
        FxDevicePwrRequirementMachine *this,
        FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v4; // al
  unsigned __int8 m_QueueHead; // dl
  FxDevicePwrRequirementEvents _a4; // ebp
  int v7; // ecx
  __int64 v8; // rax
  unsigned int TargetStatesCount; // r8d
  const FxDevicePwrRequirementTargetState *TargetStates; // rdx
  int _a3; // edi
  FxPkgPnp *v12; // rcx
  FxDeviceBase *v13; // r10
  _FX_DRIVER_GLOBALS *v14; // rcx
  _DEVICE_OBJECT *_a2; // r8
  unsigned __int16 v16; // ax
  const void *_a1; // r10
  __int64 m_HistoryIndex; // r8
  FxDevicePwrRequirementStates (__fastcall *StateFunc)(FxDevicePwrRequirementMachine *); // rax
  KIRQL v20; // r9
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v26; // r10

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
    TargetStatesCount = FxDevicePwrRequirementMachine::m_StateTable[v8].TargetStatesCount;
    if ( !TargetStatesCount )
      goto LABEL_16;
    TargetStates = FxDevicePwrRequirementMachine::m_StateTable[v8].TargetStates;
    while ( TargetStates[v7].DprEvent != _a4 )
    {
      if ( ++v7 >= TargetStatesCount )
        goto LABEL_16;
    }
    _a3 = TargetStates[v7].DprState;
    if ( _a3 == 8 )
    {
LABEL_16:
      m_PkgPnp = this->m_PoxInterface->m_PkgPnp;
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      m_Globals = m_PkgPnp->m_Globals;
      m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      v26 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v26 = 0LL;
      WPP_IFR_SF_qqLL(
        m_Globals,
        4u,
        0xCu,
        0xBu,
        WPP_DevicePwrReqStateMachine_cpp_Traceguids,
        v26,
        m_DeviceObject,
        this->m_CurrentState,
        _a4);
    }
    else
    {
      do
      {
        v12 = this->m_PoxInterface->m_PkgPnp;
        v13 = v12->m_DeviceBase;
        v14 = v12->m_Globals;
        _a2 = v13->m_DeviceObject.m_DeviceObject;
        v16 = v13->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v16 )
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          v14,
          4u,
          0x15u,
          0xCu,
          WPP_DevicePwrReqStateMachine_cpp_Traceguids,
          _a1,
          _a2,
          _a3,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
        this->m_States.History[m_HistoryIndex] = _a3;
        this->m_CurrentState = _a3;
        StateFunc = FxDevicePwrRequirementMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
        if ( StateFunc )
          _a3 = StateFunc(this);
        else
          _a3 = 8;
      }
      while ( _a3 != 8 );
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v20);
}

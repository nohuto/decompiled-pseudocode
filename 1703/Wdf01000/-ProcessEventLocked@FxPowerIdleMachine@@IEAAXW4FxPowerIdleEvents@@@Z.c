/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0022C40
 * Callers:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0004560 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00140D0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0022DA4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0022E08 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0024CFC (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0038920 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00392D0 (-PowerPolStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0039860 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C003B570 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0067318 (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0067368 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C009CFAC (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  _SINGLE_LIST_ENTRY *Next; // rsi
  __int64 v5; // rax
  unsigned int TargetStatesCount; // r8d
  int v7; // ecx
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v10; // rax
  _SINGLE_LIST_ENTRY *_a2; // rdx
  const void *_a1; // rax
  char v13; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  _SINGLE_LIST_ENTRY *v15; // r8
  _SINGLE_LIST_ENTRY *v16; // rdx
  __int16 v17; // ax
  const void *v18; // r8

  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v5 = this->m_CurrentIdleState - 1;
  TargetStatesCount = FxPowerIdleMachine::m_StateTable[v5].TargetStatesCount;
  v7 = 0;
  if ( !TargetStatesCount )
    goto LABEL_13;
  TargetStates = FxPowerIdleMachine::m_StateTable[v5].TargetStates;
  while ( TargetStates[v7].PowerIdleEvent != Event )
  {
    if ( ++v7 >= TargetStatesCount )
      goto LABEL_13;
  }
  _a3 = TargetStates[v7].PowerIdleState;
  if ( _a3 == FxIdleMax )
  {
LABEL_13:
    if ( Event == PowerIdleEventEnabled )
    {
      if ( (this->m_Flags & 1) != 0 )
        return;
    }
    else if ( Event == PowerIdleEventIoDecrement || Event == PowerIdleEventIoIncrement )
    {
      return;
    }
    v15 = Next[12].Next;
    v16 = v15[18].Next;
    v17 = WORD1(v15[1].Next);
    v18 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v17 )
      v18 = 0LL;
    WPP_IFR_SF_qqLL(
      (_FX_DRIVER_GLOBALS *)Next[2].Next,
      4u,
      0xCu,
      0x10u,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      v18,
      v16,
      this->m_CurrentIdleState,
      Event);
  }
  else
  {
    do
    {
      v10 = Next[12].Next;
      _a2 = v10[18].Next;
      if ( WORD1(v10[1].Next) )
        _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        (_FX_DRIVER_GLOBALS *)Next[2].Next,
        4u,
        0x15u,
        0x11u,
        WPP_PowerIdleStateMachine_cpp_Traceguids,
        _a1,
        _a2,
        _a3,
        this->m_CurrentIdleState);
      this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
      v13 = this->m_StateHistoryIndex + 1;
      this->m_CurrentIdleState = _a3;
      this->m_StateHistoryIndex = v13 & 7;
      StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
      if ( !StateFunc )
        break;
      _a3 = StateFunc(this);
    }
    while ( _a3 != FxIdleMax );
  }
}

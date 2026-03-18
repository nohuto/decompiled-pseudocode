/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0023880
 * Callers:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C000E4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0013450 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C4E0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C00239D4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0023A30 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C00256B8 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerPolStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0035B00 (-PowerPolStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0035E60 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C00382D0 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0063F70 (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0063FB8 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0098AD4 (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  _SINGLE_LIST_ENTRY *Next; // rsi
  __int64 v5; // rax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v10; // rax
  _SINGLE_LIST_ENTRY *_a2; // rdx
  const void *_a1; // rax
  char v13; // al
  __int64 (__fastcall *v14)(FxPowerIdleMachine *); // rax
  _SINGLE_LIST_ENTRY *v15; // rcx
  _SINGLE_LIST_ENTRY *v16; // rdx
  const void *v17; // rcx

  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v5 = this->m_CurrentIdleState - 1;
  v6 = *((_DWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedHead.Blink + 6 * v5);
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_13;
  v8 = *((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedHead.Flink + 3 * v5);
  while ( *(_DWORD *)(v8 + 8 * v7) != Event )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      goto LABEL_13;
  }
  _a3 = *(_DWORD *)(v8 + 8 * v7 + 4);
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
    if ( WORD1(v15[1].Next) )
      v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    WPP_IFR_SF_qqLL(
      (_FX_DRIVER_GLOBALS *)Next[2].Next,
      4u,
      0xCu,
      0x10u,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      v17,
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
      v14 = (__int64 (__fastcall *)(FxPowerIdleMachine *))*((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock
                                                          + 3 * _a3);
      if ( !v14 )
        break;
      _a3 = (unsigned int)v14(this);
    }
    while ( _a3 != FxIdleMax );
  }
}

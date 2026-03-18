/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0004560
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000F1A0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0013D0C (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0019010 (imp_WdfDeviceStopIdleActual.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0023338 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     StopIdleWorker @ 0x1C0076B38 (StopIdleWorker.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009B474 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C009BE48 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0022C40 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  unsigned int v6; // edi
  void *v8; // r13
  char v9; // bp
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v12; // al
  unsigned __int8 m_Flags; // cl
  KIRQL v14; // r12
  _SINGLE_LIST_ENTRY *Next; // rsi
  int v16; // eax
  unsigned int TargetStatesCount; // r8d
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxTagTracker *m_TagTracker; // rcx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v22; // rcx
  _SINGLE_LIST_ENTRY *v23; // rdx
  const void *_a1; // rcx
  char v25; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  _SINGLE_LIST_ENTRY *v27; // rsi
  _FX_DRIVER_GLOBALS *v28; // rcx
  _SINGLE_LIST_ENTRY *v29; // r8
  __int16 v30; // ax
  const void *v31; // r8
  KIRQL v32; // al
  unsigned __int8 v33; // dl
  KIRQL v34; // bp
  _FX_DRIVER_GLOBALS *v35; // rcx
  _SINGLE_LIST_ENTRY *v36; // r10
  __int16 v37; // ax
  const void *v38; // r10
  _FX_DRIVER_GLOBALS *v39; // rcx
  _SINGLE_LIST_ENTRY *v40; // r8
  __int16 v41; // ax
  const void *v42; // r8
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-58h]
  unsigned int count; // [rsp+90h] [rbp+8h]

  v6 = 0;
  v8 = Tag;
  v9 = Flags;
  p_m_Lock = &this->m_Lock.m_Lock;
  count = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v14 = v12;
  if ( (m_Flags & 0x10) != 0 )
  {
    v6 = -1073741101;
  }
  else if ( (m_Flags & 0x20) != 0 )
  {
    ++this->m_IoCount;
    Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    count = this->m_IoCount;
    this->m_EventHistory[this->m_EventHistoryIndex] = PowerIdleEventIoIncrement;
    this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
    v16 = 0;
    TargetStatesCount = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount;
    if ( TargetStatesCount )
    {
      TargetStates = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStates;
      while ( TargetStates[v16].PowerIdleEvent != PowerIdleEventIoIncrement )
      {
        if ( ++v16 >= TargetStatesCount )
          goto LABEL_7;
      }
      _a3 = TargetStates[v16].PowerIdleState;
      if ( _a3 != FxIdleMax )
      {
        do
        {
          v22 = Next[12].Next;
          v23 = v22[18].Next;
          if ( WORD1(v22[1].Next) )
            _a1 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)Next[2].Next,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            _a1,
            v23,
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v25 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v25 & 7;
          StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
          if ( !StateFunc )
            break;
          _a3 = StateFunc(this);
        }
        while ( _a3 != FxIdleMax );
        v8 = Tag;
        p_m_Lock = &this->m_Lock.m_Lock;
      }
      v6 = 0;
    }
LABEL_7:
    if ( !KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
    {
      v6 = 259;
      if ( (v9 & 1) != 0 )
        this->m_Flags |= 0x80u;
    }
  }
  else
  {
    v6 = -1073741101;
  }
  KeReleaseSpinLock(p_m_Lock, v14);
  if ( v6 == 259 && WaitForD0 )
  {
    v27 = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    v28 = (_FX_DRIVER_GLOBALS *)v27[2].Next;
    if ( v28->FxVerboseOn )
    {
      v29 = v27[12].Next;
      _a2 = KeGetCurrentThread();
      v30 = WORD1(v29[1].Next);
      v31 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v30 )
        v31 = 0LL;
      WPP_IFR_SF_qq(v28, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v31, _a2);
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_D0NotificationEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    v32 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v33 = this->m_Flags;
    v34 = v32;
    if ( (v33 & 0x30) == 0x20 )
    {
      v6 = 0;
    }
    else
    {
      v6 = -1073741101;
      if ( (v33 & 0x10) != 0 )
      {
        v35 = (_FX_DRIVER_GLOBALS *)v27[2].Next;
        if ( v35->FxVerboseOn )
        {
          v36 = v27[12].Next;
          _a2a = KeGetCurrentThread();
          v37 = WORD1(v36[1].Next);
          v38 = (const void *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v37 )
            v38 = 0LL;
          WPP_IFR_SF_qid(v35, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v38, (__int64)_a2a, -1073741101);
        }
      }
      else
      {
        v39 = (_FX_DRIVER_GLOBALS *)v27[2].Next;
        if ( v39->FxVerboseOn )
        {
          v40 = v27[12].Next;
          _a2b = KeGetCurrentThread();
          v41 = WORD1(v40[1].Next);
          v42 = (const void *)((unsigned __int64)v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v41 )
            v42 = 0LL;
          WPP_IFR_SF_qid(v39, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v42, (__int64)_a2b, -1073741101);
        }
      }
      --this->m_IoCount;
      FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
    }
    KeReleaseSpinLock(p_m_Lock, v34);
  }
  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker && (!v6 || v6 == 259) )
    FxTagTracker::UpdateTagHistory(m_TagTracker, v8, Line, File, TagAddRef, count);
  return v6;
}

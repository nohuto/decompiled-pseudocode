/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000721C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C001CD8C (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0028290 (imp_WdfDeviceStopIdleActual.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0030B08 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     imp_WdfDeviceStopIdleNoTrack @ 0x1C0072100 (imp_WdfDeviceStopIdleNoTrack.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DC84 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C009E66C (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0017010 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  void *v6; // r13
  char v8; // bp
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v11; // al
  unsigned __int8 m_Flags; // cl
  KIRQL v13; // r12
  _SINGLE_LIST_ENTRY *Next; // rsi
  __int64 v15; // rax
  unsigned int TargetStatesCount; // r8d
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v19; // rcx
  _SINGLE_LIST_ENTRY *_a2; // rdx
  const void *_a1; // rcx
  char v22; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  unsigned int v24; // edi
  FxTagTracker *m_TagTracker; // rcx
  _SINGLE_LIST_ENTRY *v27; // rsi
  _FX_DRIVER_GLOBALS *v28; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  _SINGLE_LIST_ENTRY *v30; // rax
  const void *v31; // rax
  KIRQL v32; // al
  unsigned __int8 v33; // dl
  KIRQL v34; // bp
  _FX_DRIVER_GLOBALS *v35; // rcx
  struct _KTHREAD *v36; // rdx
  _SINGLE_LIST_ENTRY *v37; // rax
  const void *v38; // rax
  unsigned __int16 v39; // r9
  _SINGLE_LIST_ENTRY *v40; // rax
  unsigned int count; // [rsp+90h] [rbp+8h]

  v6 = Tag;
  v8 = Flags;
  p_m_Lock = &this->m_Lock.m_Lock;
  count = 0;
  v11 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v13 = v11;
  if ( (m_Flags & 0x10) != 0 )
  {
    v24 = -1073741101;
  }
  else if ( (m_Flags & 0x20) != 0 )
  {
    ++this->m_IoCount;
    Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    count = this->m_IoCount;
    this->m_EventHistory[this->m_EventHistoryIndex] = PowerIdleEventIoIncrement;
    this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
    v15 = 0LL;
    TargetStatesCount = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount;
    if ( TargetStatesCount )
    {
      TargetStates = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStates;
      while ( TargetStates[v15].PowerIdleEvent != PowerIdleEventIoIncrement )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= TargetStatesCount )
          goto LABEL_14;
      }
      _a3 = TargetStates[v15].PowerIdleState;
      if ( _a3 != FxIdleMax )
      {
        do
        {
          v19 = Next[12].Next;
          _a2 = v19[18].Next;
          if ( WORD1(v19[1].Next) )
            _a1 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
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
          v22 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v22 & 7;
          StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
          if ( !StateFunc )
            break;
          _a3 = StateFunc(this);
        }
        while ( _a3 != FxIdleMax );
        v6 = Tag;
        p_m_Lock = &this->m_Lock.m_Lock;
      }
    }
LABEL_14:
    if ( KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
    {
      v24 = 0;
    }
    else
    {
      v24 = 259;
      if ( (v8 & 1) != 0 )
        this->m_Flags |= 0x80u;
    }
  }
  else
  {
    v24 = -1073741101;
  }
  KeReleaseSpinLock(p_m_Lock, v13);
  if ( v24 == 259 && WaitForD0 )
  {
    v27 = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    v28 = (_FX_DRIVER_GLOBALS *)v27[2].Next;
    if ( v28->FxVerboseOn )
    {
      CurrentThread = KeGetCurrentThread();
      v30 = v27[12].Next;
      if ( WORD1(v30[1].Next) )
        v31 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v31 = 0LL;
      WPP_IFR_SF_qq(v28, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v31, CurrentThread);
    }
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_D0NotificationEvent);
    v32 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v33 = this->m_Flags;
    v34 = v32;
    if ( (v33 & 0x30) == 0x20 )
    {
      v24 = 0;
LABEL_45:
      KeReleaseSpinLock(p_m_Lock, v34);
      goto LABEL_19;
    }
    v24 = -1073741101;
    if ( (v33 & 0x10) != 0 )
    {
      v35 = (_FX_DRIVER_GLOBALS *)v27[2].Next;
      if ( v35->FxVerboseOn )
      {
        v36 = KeGetCurrentThread();
        v37 = v27[12].Next;
        if ( WORD1(v37[1].Next) )
          v38 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v38 = 0LL;
        v39 = 13;
LABEL_43:
        WPP_IFR_SF_qid(v35, 5u, 0xCu, v39, WPP_PowerIdleStateMachine_cpp_Traceguids, v38, (__int64)v36, -1073741101);
      }
    }
    else
    {
      v35 = (_FX_DRIVER_GLOBALS *)v27[2].Next;
      if ( v35->FxVerboseOn )
      {
        v36 = KeGetCurrentThread();
        v40 = v27[12].Next;
        if ( WORD1(v40[1].Next) )
          v38 = (const void *)((unsigned __int64)v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v38 = 0LL;
        v39 = 14;
        goto LABEL_43;
      }
    }
    --this->m_IoCount;
    FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
    goto LABEL_45;
  }
LABEL_19:
  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker && (!v24 || v24 == 259) )
    FxTagTracker::UpdateTagHistory(m_TagTracker, v6, Line, File, TagAddRef, count);
  return v24;
}

/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C000E4C0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000BD10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0012228 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0028CC0 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0033080 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x1C0072D5C (StopIdleWorker.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C0097A6C (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0023880 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
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
  unsigned int v16; // r8d
  __int64 v17; // rdx
  unsigned int v18; // edi
  FxTagTracker *m_TagTracker; // rcx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v22; // rcx
  _SINGLE_LIST_ENTRY *_a2; // rdx
  const void *_a1; // rcx
  char v25; // al
  __int64 (__fastcall *v26)(FxPowerIdleMachine *); // rax
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
    v18 = -1073741101;
  }
  else if ( (m_Flags & 0x20) != 0 )
  {
    ++this->m_IoCount;
    Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    count = this->m_IoCount;
    this->m_EventHistory[this->m_EventHistoryIndex] = PowerIdleEventIoIncrement;
    this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
    v15 = 0LL;
    v16 = *((_DWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Blink
          + 6 * this->m_CurrentIdleState);
    if ( v16 )
    {
      v17 = *((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Flink
            + 3 * this->m_CurrentIdleState);
      while ( *(_DWORD *)(v17 + 8 * v15) != 512 )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v16 )
          goto LABEL_7;
      }
      _a3 = *(_DWORD *)(v17 + 8 * v15 + 4);
      if ( _a3 != FxIdleMax )
      {
        do
        {
          v22 = Next[12].Next;
          _a2 = v22[18].Next;
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
            _a2,
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v25 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v25 & 7;
          v26 = (__int64 (__fastcall *)(FxPowerIdleMachine *))*((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock
                                                              + 3 * _a3);
          if ( !v26 )
            break;
          _a3 = (unsigned int)v26(this);
        }
        while ( _a3 != FxIdleMax );
        v6 = Tag;
        p_m_Lock = &this->m_Lock.m_Lock;
      }
    }
LABEL_7:
    if ( KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
    {
      v18 = 0;
    }
    else
    {
      v18 = 259;
      if ( (v8 & 1) != 0 )
        this->m_Flags |= 0x80u;
    }
  }
  else
  {
    v18 = -1073741101;
  }
  KeReleaseSpinLock(p_m_Lock, v13);
  if ( v18 == 259 && WaitForD0 )
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
      v18 = 0;
LABEL_44:
      KeReleaseSpinLock(p_m_Lock, v34);
      goto LABEL_12;
    }
    v18 = -1073741101;
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
LABEL_42:
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
        goto LABEL_42;
      }
    }
    --this->m_IoCount;
    FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
    goto LABEL_44;
  }
LABEL_12:
  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker && (!v18 || v18 == 259) )
    FxTagTracker::UpdateTagHistory(m_TagTracker, v6, Line, File, TagAddRef, count);
  return v18;
}

/*
 * XREFs of ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C000FD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C000FE94 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxTimer::_FxTimerDpcThunk(
        _KDPC *TimerDpc,
        FxTimer *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *_a1; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v7; // si
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxVerifierLock *Flink; // rcx
  FxVerifierLock *v12; // rcx
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  _a1 = DeferredContext->m_SystemWorkItem;
  if ( _a1 )
  {
    m_Globals = _a1->m_Globals;
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0
      && (Flink = (FxVerifierLock *)_a1[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    {
      FxVerifierLock::Lock(Flink, &NewIrql, (unsigned __int8)SystemArgument1);
      v7 = NewIrql;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&_a1->m_NPLock.m_Lock);
      NewIrql = v7;
    }
    if ( !_a1->m_Enqueued )
    {
      if ( !_a1->m_RunningDown )
      {
        KeClearEvent(&_a1->m_WorkItemCompleted.m_Event.m_Event);
        _a1->m_CallbackArg = DeferredContext;
        _a1->m_Callback = FxTimer::_FxTimerWorkItemCallback;
        _a1->m_Enqueued = 1;
        _InterlockedIncrement(&_a1->m_OutStandingWorkItem);
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0
          && (v12 = (FxVerifierLock *)_a1[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
        {
          FxVerifierLock::Unlock(v12, NewIrql, v9);
        }
        else
        {
          KeReleaseSpinLock(&_a1->m_NPLock.m_Lock, NewIrql);
        }
        IoQueueWorkItem(
          _a1->m_WorkItem.m_WorkItem,
          (PIO_WORKITEM_ROUTINE)FxSystemWorkItem::_WorkItemThunk,
          DelayedWorkQueue,
          _a1);
        return;
      }
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(_a1, v7, v8);
    return;
  }
  DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
  if ( DpcNotifyRoutine )
    DpcNotifyRoutine(&DeferredContext->m_Callback, 8u, 2164260864u, 3938u, 2u);
  FxTimer::TimerHandler(DeferredContext);
}

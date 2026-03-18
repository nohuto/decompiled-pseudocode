/*
 * XREFs of ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C00015B8 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
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
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxVerifierLock *v10; // rcx
  FxVerifierLock *v11; // rcx
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  _a1 = DeferredContext->m_SystemWorkItem;
  if ( _a1 )
  {
    m_Globals = _a1->m_Globals;
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 && (v10 = *(FxVerifierLock **)&_a1[-1].m_WorkItemRunningCount) != 0LL )
    {
      FxVerifierLock::Lock(v10, &NewIrql, (unsigned __int8)SystemArgument1);
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
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 && (v11 = *(FxVerifierLock **)&_a1[-1].m_WorkItemRunningCount) != 0LL )
          FxVerifierLock::Unlock(v11, NewIrql, v8);
        else
          KeReleaseSpinLock(&_a1->m_NPLock.m_Lock, NewIrql);
        IoQueueWorkItem(_a1->m_WorkItem.m_WorkItem, FxSystemWorkItem::_WorkItemThunk, DelayedWorkQueue, _a1);
        return;
      }
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(_a1, v7);
    return;
  }
  DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
  if ( DpcNotifyRoutine )
    DpcNotifyRoutine(&DeferredContext->m_Callback, 8u, 2164260864u, 3938u, 2u);
  FxTimer::TimerHandler(DeferredContext);
}

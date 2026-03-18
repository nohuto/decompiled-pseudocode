/*
 * XREFs of ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0038540
 * Callers:
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00047A0 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00049E0 (-_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035650 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0067590 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x1C0095CF0 (imp_WdfInterruptQueueWorkItemForIsr.c)
 *     ?AskParentToRemoveAndReenumerate@FxPkgFdo@@EEAAJXZ @ 0x1C00A1090 (-AskParentToRemoveAndReenumerate@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::EnqueueWorker(
        FxSystemWorkItem *this,
        void (__fastcall *Func)(void *),
        void *Parameter,
        unsigned __int8 AssertIfAlreadyQueued)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Parameter);
  if ( !this->m_Enqueued )
  {
    if ( !this->m_RunningDown )
    {
      KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
      this->m_Callback = Func;
      this->m_CallbackArg = Parameter;
      this->m_Enqueued = 1;
      _InterlockedIncrement(&this->m_OutStandingWorkItem);
      FxNonPagedObject::Unlock(this, irql, v10);
      IoQueueWorkItem(
        this->m_WorkItem.m_WorkItem,
        (PIO_WORKITEM_ROUTINE)FxSystemWorkItem::_WorkItemThunk,
        DelayedWorkQueue,
        this);
      return 1;
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, this);
    goto LABEL_7;
  }
  if ( AssertIfAlreadyQueued )
  {
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxSystemWorkitem_cpp_Traceguids, this, this->m_WorkItem.m_WorkItem);
LABEL_7:
    FxVerifierDbgBreakPoint(m_Globals);
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  return 0;
}

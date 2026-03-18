/*
 * XREFs of ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C000A1B8
 * Callers:
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0001AF0 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0026B80 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00779B0 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0077A28 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C009151C (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x1C0098720 (imp_WdfInterruptQueueWorkItemForIsr.c)
 *     ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A2A70 (-_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
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
  const char *v12; // rax
  const char *v13; // r8
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *Flink; // rcx
  int v16; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v17[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF

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
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (Flink = this[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
      {
        FxVerifierLock::Unlock((FxVerifierLock *)Flink, irql, v10);
      }
      else
      {
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      }
      IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxSystemWorkItem::_WorkItemThunk, DelayedWorkQueue, this);
      return 1;
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, this);
    v12 = (const char *)v17;
    v17[0] = 7567731;
    v13 = (const char *)v17;
    goto LABEL_9;
  }
  if ( AssertIfAlreadyQueued )
  {
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxSystemWorkitem_cpp_Traceguids, this, this->m_WorkItem.m_WorkItem);
    v12 = (const char *)&v16;
    v16 = 7567731;
    v13 = (const char *)&v16;
LABEL_9:
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      v13,
      m_Globals->Public.DriverName,
      v12);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v14 = this[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Unlock((FxVerifierLock *)v14, irql, v9);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  return 0;
}

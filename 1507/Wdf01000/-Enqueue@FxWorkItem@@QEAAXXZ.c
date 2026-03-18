/*
 * XREFs of ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x1C001F898
 * Callers:
 *     imp_WdfWorkItemEnqueue @ 0x1C0023270 (imp_WdfWorkItemEnqueue.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxWorkItem::Enqueue(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v5; // si
  unsigned __int8 v6; // r8
  unsigned int v7; // ecx
  _LIST_ENTRY *Flink; // rax
  const void *_a1; // rax
  const void *v10; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_Enqueued )
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0x12u, 0xEu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    }
  }
  else if ( this->m_RunningDown )
  {
    if ( this->m_ObjectSize )
      v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v10 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxWorkItem_cpp_Traceguids, v10);
    v13 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v13,
      m_Globals->Public.DriverName,
      (const char *)&v13);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
    this->m_Enqueued = 1;
    v7 = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      Flink = this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.WaitListHead.Flink;
    else
      Flink = 0LL;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Flink,
        FxWorkItem::WorkItemThunk,
        322,
        "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
        TagAddRef,
        v7);
    _InterlockedIncrement(&m_Globals->Refcnt);
    v5 = 1;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Blink = this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
  {
    FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v6);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( v5 )
    IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxWorkItem::WorkItemThunk, DelayedWorkQueue, this);
}

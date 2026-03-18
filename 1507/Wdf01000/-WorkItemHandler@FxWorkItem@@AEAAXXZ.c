/*
 * XREFs of ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C001F514
 * Callers:
 *     ?WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C002F610 (-WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxWorkItem::WorkItemHandler(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // r8
  char m_ObjectFlags; // al
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *v8)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  WDFWORKITEM__ *v9; // rcx
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  bool v12; // zf
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *WorkItemNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  WDFWORKITEM__ *v15; // rcx
  __int64 v16; // rdx
  _LIST_ENTRY *v17; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  FxNonPagedObject::Lock(this, &irql, a3);
  m_ObjectFlags = this->m_ObjectFlags;
  ++this->m_WorkItemRunningCount;
  this->m_Enqueued = 0;
  if ( m_ObjectFlags < 0 && (Blink = this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    WorkItemNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( WorkItemNotifyRoutine )
      WorkItemNotifyRoutine(&this->m_Callback, 8u, 1207959552u, 3943u, 2u);
    if ( this->m_ObjectSize )
      v15 = (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    this->m_Callback(v15);
    LOBYTE(v16) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v16);
  }
  else
  {
    v8 = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( v8 )
      v8(&this->m_Callback, 8u, 1207959552u, 3943u, 2u);
    if ( this->m_ObjectSize )
      v9 = (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v9 = 0LL;
    this->m_Callback(v9);
  }
  FxNonPagedObject::Lock(this, &irql, v10);
  v12 = this->m_WorkItemRunningCount-- == 1;
  if ( v12 && !this->m_Enqueued )
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v17 = this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
  {
    FxVerifierLock::Unlock((FxVerifierLock *)v17, irql, v11);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
}

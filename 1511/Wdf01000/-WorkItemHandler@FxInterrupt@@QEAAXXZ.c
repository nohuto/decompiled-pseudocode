/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008CE74
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C008C9F0 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0024D38 (FX_TRACK_DRIVER.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock *m_CallbackLock; // rcx
  WDFINTERRUPT__ *v3; // rbx
  void (__fastcall *WorkItemNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *m_DeviceBase; // rdx
  void *v6; // rdx
  __int64 v7; // rdx
  void (__fastcall *v8)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *v9; // rdx
  void *v10; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  m_CallbackLock = this->m_CallbackLock;
  v3 = 0LL;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    WorkItemNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( WorkItemNotifyRoutine )
      WorkItemNotifyRoutine(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v6 = (void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v6 = 0LL;
    if ( this->m_ObjectSize )
      v3 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_EvtInterruptWorkItem(v3, v6);
    LOBYTE(v7) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v7);
  }
  else
  {
    v8 = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( v8 )
      v8(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    v9 = this->m_DeviceBase;
    if ( v9->m_ObjectSize )
      v10 = (void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v10 = 0LL;
    if ( this->m_ObjectSize )
      v3 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_EvtInterruptWorkItem(v3, v10);
  }
}

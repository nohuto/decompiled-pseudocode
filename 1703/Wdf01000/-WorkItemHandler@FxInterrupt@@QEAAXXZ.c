/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00A0388
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C009FEC0 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0019508 (FX_TRACK_DRIVER.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *WorkItemNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  void *v6; // rdx
  WDFINTERRUPT__ *v7; // rcx
  __int64 v8; // rdx
  void (__fastcall *v9)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *v10; // rdx
  unsigned __int16 v11; // ax
  void *v12; // rdx
  WDFINTERRUPT__ *v13; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    WorkItemNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( WorkItemNotifyRoutine )
      WorkItemNotifyRoutine(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v6 = (void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v6 = 0LL;
    v7 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    this->m_EvtInterruptWorkItem(v7, v6);
    LOBYTE(v8) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v8);
  }
  else
  {
    v9 = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( v9 )
      v9(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    v10 = this->m_DeviceBase;
    v11 = v10->m_ObjectSize;
    v12 = (void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      v12 = 0LL;
    v13 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v13 = 0LL;
    this->m_EvtInterruptWorkItem(v13, v12);
  }
}

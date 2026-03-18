/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00A2910
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C00A2300 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ *v2; // rbx
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *WorkItemNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *m_DeviceBase; // rdx
  void *v7; // rdx
  __int64 v8; // rdx
  void (__fastcall *v9)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *v10; // rdx
  void *v11; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v2 = 0LL;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    WorkItemNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( WorkItemNotifyRoutine )
      WorkItemNotifyRoutine(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v7 = (void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v7 = 0LL;
    if ( this->m_ObjectSize )
      v2 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_EvtInterruptWorkItem(v2, v7);
    LOBYTE(v8) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v8);
  }
  else
  {
    v9 = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( v9 )
      v9(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    v10 = this->m_DeviceBase;
    if ( v10->m_ObjectSize )
      v11 = (void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v11 = 0LL;
    if ( this->m_ObjectSize )
      v2 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_EvtInterruptWorkItem(v2, v11);
  }
}

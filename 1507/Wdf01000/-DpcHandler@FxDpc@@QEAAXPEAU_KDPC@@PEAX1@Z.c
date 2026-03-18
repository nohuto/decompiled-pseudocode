/*
 * XREFs of ?DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z @ 0x1C00682C0
 * Callers:
 *     ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00683E0 (-FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxDpc::DpcHandler(FxDpc *this, _KDPC *Dpc, void *SystemArgument1, void *SystemArgument2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void (__fastcall **p_m_Callback)(WDFDPC__ *); // rdi
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxCallbackLock **p_m_CallbackLock; // rsi
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  void *irql; // [rsp+58h] [rbp+20h] OVERLAPPED BYREF

  irql = SystemArgument2;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + (unsigned int)((__int64 (__fastcall *)(_QWORD, _KDPC *, void *))PfnKeGetCurrentProcessorNumberEx)(
                                                      0LL,
                                                      Dpc,
                                                      SystemArgument1)
                                    * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  p_m_Callback = &this->m_Callback;
  if ( this->m_Callback )
  {
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine(&this->m_Callback, 8u, 2164260864u, 3938u, 2u);
    p_m_CallbackLock = &this->m_CallbackLock;
    m_CallbackLock = this->m_CallbackLock;
    if ( m_CallbackLock )
    {
      LOBYTE(irql) = 0;
      ((void (__fastcall *)(FxCallbackLock *, void **, void *))m_CallbackLock->Lock)(
        m_CallbackLock,
        &irql,
        SystemArgument1);
      if ( this->m_ObjectSize )
        v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v10 = 0LL;
      (*p_m_Callback)((WDFDPC__ *)v10);
      LOBYTE(v11) = (_BYTE)irql;
      (*p_m_CallbackLock)->Unlock(*p_m_CallbackLock, v11);
    }
    else
    {
      if ( this->m_ObjectSize )
        v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v12 = 0LL;
      ((void (__fastcall *)(unsigned __int64, _KDPC *, void *))*p_m_Callback)(v12, Dpc, SystemArgument1);
    }
  }
}

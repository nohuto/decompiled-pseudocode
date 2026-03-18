/*
 * XREFs of ?DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z @ 0x1C0004250
 * Callers:
 *     ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0035AC0 (-FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0024D38 (FX_TRACK_DRIVER.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxDpc::DpcHandler(FxDpc *this, _KDPC *Dpc, void *SystemArgument1, void *SystemArgument2)
{
  void (__fastcall **p_m_Callback)(WDFDPC__ *); // rdi
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxCallbackLock **p_m_CallbackLock; // rsi
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  void *irql; // [rsp+58h] [rbp+20h] OVERLAPPED BYREF

  irql = SystemArgument2;
  FX_TRACK_DRIVER(this->m_Globals);
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
      m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&irql);
      if ( this->m_ObjectSize )
        v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v9 = 0LL;
      (*p_m_Callback)((WDFDPC__ *)v9);
      LOBYTE(v10) = (_BYTE)irql;
      (*p_m_CallbackLock)->Unlock(*p_m_CallbackLock, v10);
    }
    else
    {
      if ( this->m_ObjectSize )
        v11 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v11 = 0LL;
      (*p_m_Callback)((WDFDPC__ *)v11);
    }
  }
}

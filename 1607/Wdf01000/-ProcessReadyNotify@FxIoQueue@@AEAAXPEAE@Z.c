/*
 * XREFs of ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C000B290
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C006437C (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessReadyNotify(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFQUEUE__ *_a1; // rbx
  void *m_ReadyNotifyContext; // rbp
  __m128i m_ReadyNotify; // xmm6
  unsigned __int8 v8; // dl
  FxIoQueueIoState callback; // [rsp+30h] [rbp-28h] BYREF

  m_Globals = this->m_Globals;
  _a1 = 0LL;
  m_ReadyNotifyContext = this->m_ReadyNotifyContext;
  callback.m_CallbackLock = 0LL;
  callback.Method = 0LL;
  m_ReadyNotify = (__m128i)this->m_ReadyNotify;
  this->m_TransitionFromEmpty = 0;
  v8 = *PreviousIrql;
  callback = (FxIoQueueIoState)m_ReadyNotify;
  FxNonPagedObject::Unlock(this, v8);
  if ( _mm_srli_si128(m_ReadyNotify, 8).m128i_u64[0] )
  {
    if ( this->m_ObjectSize )
      _a1 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    FxIoQueueIoResume::Invoke(&callback, _a1, m_ReadyNotifyContext);
  }
  else if ( m_Globals->FxVerifierOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x53u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  FxNonPagedObject::Lock(this, PreviousIrql);
}

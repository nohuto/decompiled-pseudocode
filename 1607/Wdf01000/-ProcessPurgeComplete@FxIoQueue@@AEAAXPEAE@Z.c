/*
 * XREFs of ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009068C
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C006437C (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessPurgeComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  FxIoQueueIoState m_PurgeComplete; // xmm0
  void *m_PurgeCompleteContext; // r14
  WDFQUEUE__ *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r8
  const void *_a1; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-18h] BYREF

  m_PurgeComplete = this->m_PurgeComplete;
  m_PurgeCompleteContext = this->m_PurgeCompleteContext;
  v5 = 0LL;
  m_Globals = this->m_Globals;
  this->m_PurgeComplete.Method = 0LL;
  this->m_PurgeCompleteContext = 0LL;
  v9 = *PreviousIrql;
  callback = m_PurgeComplete;
  FxNonPagedObject::Unlock(this, v9, a3);
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x52u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  if ( callback.Method )
  {
    if ( this->m_ObjectSize )
      v5 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    FxIoQueueIoResume::Invoke(&callback, v5, m_PurgeCompleteContext);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v10);
}

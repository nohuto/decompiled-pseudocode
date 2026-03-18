/*
 * XREFs of ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0095EBC
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00053C0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000B888 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009637C (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0096470 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0096564 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueueIoResume::Invoke(FxIoQueueIoState *this, WDFQUEUE__ *Queue, void *Context)
{
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v7; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Context);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v7) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v7);
    }
  }
}

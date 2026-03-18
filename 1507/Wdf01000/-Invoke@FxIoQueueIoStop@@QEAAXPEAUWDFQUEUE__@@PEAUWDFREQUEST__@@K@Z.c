/*
 * XREFs of ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00084C0
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000B888 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueueIoStop::Invoke(
        FxIoQueueIoStop *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int ActionFlags)
{
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v9; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Request, ActionFlags);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v9) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v9);
    }
  }
}

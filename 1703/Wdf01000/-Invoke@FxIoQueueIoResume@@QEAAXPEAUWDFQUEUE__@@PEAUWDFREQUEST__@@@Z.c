/*
 * XREFs of ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0067718
 * Callers:
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C000E714 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D990 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009466C (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009474C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C0014E48 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0014E6C (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 */

void __fastcall FxIoQueueIoResume::Invoke(FxIoQueueIoState *this, WDFQUEUE__ *Queue, void *Context)
{
  __int64 v6; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    irql = 0;
    FxLockedCallback::CallbackStart(this, &irql);
    this->Method(Queue, Context);
    LOBYTE(v6) = irql;
    FxLockedCallback::CallbackEnd(this, v6);
  }
}

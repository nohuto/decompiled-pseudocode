/*
 * XREFs of ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C00573F8
 * Callers:
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C000AB20 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E4F8 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0082644 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C008271C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 * Callees:
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C000F964 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C000F984 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
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

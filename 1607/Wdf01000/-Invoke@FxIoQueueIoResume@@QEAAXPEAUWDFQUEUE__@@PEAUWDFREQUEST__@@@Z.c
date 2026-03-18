/*
 * XREFs of ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C006437C
 * Callers:
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C000B290 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D3D4 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C00905B4 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009068C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C0013E8C (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0013EAC (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
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

/*
 * XREFs of ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C008246C
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000AC10 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C000F964 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C000F984 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 */

void __fastcall FxIoQueueIoWrite::Invoke(
        FxIoQueueIoWrite *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int Length)
{
  __int64 v8; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    irql = 0;
    FxLockedCallback::CallbackStart(this, &irql);
    this->Method(Queue, Request, Length);
    LOBYTE(v8) = irql;
    FxLockedCallback::CallbackEnd(this, v8);
  }
}

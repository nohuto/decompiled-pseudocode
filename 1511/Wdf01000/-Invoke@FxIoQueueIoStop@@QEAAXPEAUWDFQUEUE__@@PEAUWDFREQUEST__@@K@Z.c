/*
 * XREFs of ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C000F8FC
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E4F8 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C000F964 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C000F984 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 */

void __fastcall FxIoQueueIoStop::Invoke(
        FxIoQueueIoStop *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int ActionFlags)
{
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    irql = 0;
    FxLockedCallback::CallbackStart(this, &irql);
    this->Method(Queue, Request, ActionFlags);
    FxLockedCallback::CallbackEnd(this, irql);
  }
}

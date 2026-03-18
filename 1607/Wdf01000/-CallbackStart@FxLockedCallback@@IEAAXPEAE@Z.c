/*
 * XREFs of ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0013EAC
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C0013E24 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C006437C (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00903DC (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0090444 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxLockedCallback::CallbackStart(FxLockedCallback *this, unsigned __int8 *PreviousIrql)
{
  FxCallbackLock *m_CallbackLock; // rcx

  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
    m_CallbackLock->Lock(m_CallbackLock, PreviousIrql);
}

/*
 * XREFs of ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009637C
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0095EBC (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessIdleComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  void *m_IdleCompleteContext; // rbp
  WDFQUEUE__ *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  char m_ObjectFlags; // al
  KIRQL v9; // dl
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v11; // r8
  const void *_a1; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-18h] BYREF

  m_IdleCompleteContext = this->m_IdleCompleteContext;
  v4 = 0LL;
  m_Globals = this->m_Globals;
  callback = this->m_IdleComplete;
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_IdleComplete.Method = 0LL;
  this->m_IdleCompleteContext = 0LL;
  v9 = *PreviousIrql;
  if ( m_ObjectFlags < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)Blink, v9, a3);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v9);
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(
      m_Globals,
      5u,
      0xDu,
      0x4Fu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1);
  }
  if ( callback.Method )
  {
    if ( this->m_ObjectSize )
      v4 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    FxIoQueueIoResume::Invoke(&callback, v4, m_IdleCompleteContext);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v11);
}

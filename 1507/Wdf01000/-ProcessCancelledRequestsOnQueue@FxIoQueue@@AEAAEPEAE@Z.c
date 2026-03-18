/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0096184
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  FxIoQueuePowerState m_PowerState; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int v6; // ecx
  _LIST_ENTRY *p_m_CanceledOnQueueList; // r14
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v12; // rdi
  const void *_a2; // rax
  const void *_a1; // rcx
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  char v17; // al
  FxVerifierLock *v18; // rcx
  KIRQL v19; // dl
  _LIST_ENTRY *v20; // rcx
  unsigned __int8 v21; // r8
  WDFREQUEST__ *v22; // rdi
  WDFQUEUE__ *v23; // rsi
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v25; // rdx
  FxCallbackLock *v26; // rcx
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF
  char v28; // [rsp+80h] [rbp+18h] BYREF

  m_PowerState = this->m_PowerState;
  m_Globals = this->m_Globals;
  if ( (unsigned int)m_PowerState <= FxIoQueuePowerRestartingNotifyingDriver )
  {
    v6 = 2336;
    if ( _bittest(&v6, m_PowerState) )
      return 0;
  }
  p_m_CanceledOnQueueList = &this->m_CanceledOnQueueList;
  while ( p_m_CanceledOnQueueList->Flink != p_m_CanceledOnQueueList )
  {
    Flink = p_m_CanceledOnQueueList->Flink;
    v10 = p_m_CanceledOnQueueList->Flink->Flink;
    Blink = p_m_CanceledOnQueueList->Flink->Blink;
    if ( v10->Blink != p_m_CanceledOnQueueList->Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v10;
    v10->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v12 = Flink - 18;
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    if ( WORD1(v12->Blink) )
      _a1 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      4u,
      0xDu,
      0x53u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      _a2);
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)v12, &NewIrql, v15);
      v17 = (char)v12[1].Blink;
      WORD1(v12[13].Blink) |= 0x40u;
      if ( v17 < 0 && (v18 = (FxVerifierLock *)v12[-2].Blink) != 0LL )
        FxVerifierLock::Unlock(v18, NewIrql, v16);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)&v12[7], NewIrql);
    }
    v19 = *PreviousIrql;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v20, v19, v15);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v19);
    if ( WORD1(v12->Blink) )
      v22 = (WDFREQUEST__ *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    if ( this->m_ObjectSize )
      v23 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    if ( this->m_IoCanceledOnQueue.Method )
    {
      m_CallbackLock = this->m_IoCanceledOnQueue.m_CallbackLock;
      v28 = 0;
      if ( m_CallbackLock )
        m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&v28);
      this->m_IoCanceledOnQueue.Method(v23, v22);
      v26 = this->m_IoCanceledOnQueue.m_CallbackLock;
      if ( v26 )
      {
        LOBYTE(v25) = v28;
        v26->Unlock(v26, v25);
      }
    }
    FxNonPagedObject::Lock(this, PreviousIrql, v21);
  }
  return 1;
}

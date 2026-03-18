/*
 * XREFs of ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000BCC0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequests(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  FxIoQueuePowerState m_PowerState; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *p_m_Cancelled; // r14
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v8; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v10; // rbx
  const void *_a2; // rax
  const void *_a1; // rcx
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // dl
  unsigned __int64 v15; // rbp
  FxCallbackLock *m_IoCancelCallbackLockPtr; // rsi
  _LIST_ENTRY *v17; // rax
  __int64 v18; // rdx
  unsigned __int8 v19; // r8
  int v21; // ecx
  unsigned __int8 v22; // r8
  char v23; // al
  FxVerifierLock *v24; // rcx
  _LIST_ENTRY *v25; // rcx
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  char v27; // [rsp+90h] [rbp+18h] BYREF

  m_PowerState = this->m_PowerState;
  m_Globals = this->m_Globals;
  if ( (unsigned int)m_PowerState <= FxIoQueuePowerRestartingNotifyingDriver )
  {
    v21 = 2336;
    if ( _bittest(&v21, m_PowerState) )
      return 0;
  }
  p_m_Cancelled = &this->m_Cancelled;
  while ( p_m_Cancelled->Flink != p_m_Cancelled )
  {
    Flink = p_m_Cancelled->Flink;
    v8 = p_m_Cancelled->Flink->Flink;
    Blink = p_m_Cancelled->Flink->Blink;
    if ( v8->Blink != p_m_Cancelled->Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v8;
    v8->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v10 = Flink - 18;
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    if ( WORD1(v10->Blink) )
      _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      4u,
      0xDu,
      0x52u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      _a2);
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)v10, &NewIrql, v13);
      v23 = (char)v10[1].Blink;
      WORD1(v10[13].Blink) |= 0x40u;
      if ( v23 < 0 && (v24 = (FxVerifierLock *)v10[-2].Blink) != 0LL )
        FxVerifierLock::Unlock(v24, NewIrql, v22);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)&v10[7], NewIrql);
    }
    v14 = *PreviousIrql;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v25 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v25, v14, v13);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v14);
    if ( WORD1(v10->Blink) )
      v15 = (unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    m_IoCancelCallbackLockPtr = this->m_IoCancelCallbackLockPtr;
    if ( v10[11].Blink )
    {
      v27 = 0;
      if ( m_IoCancelCallbackLockPtr )
        m_IoCancelCallbackLockPtr->Lock(m_IoCancelCallbackLockPtr, (unsigned __int8 *)&v27);
      v17 = v10[11].Blink;
      v10[11].Blink = 0LL;
      ((void (__fastcall *)(unsigned __int64))v17)(v15);
      if ( m_IoCancelCallbackLockPtr )
      {
        LOBYTE(v18) = v27;
        m_IoCancelCallbackLockPtr->Unlock(m_IoCancelCallbackLockPtr, v18);
      }
    }
    ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v10->Flink[1].Flink)(
      v10,
      1969583441LL,
      4909LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v19);
  }
  return 1;
}

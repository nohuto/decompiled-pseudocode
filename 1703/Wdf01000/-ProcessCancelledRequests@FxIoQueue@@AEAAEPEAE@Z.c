/*
 * XREFs of ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001DDD0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C001E9CC (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequests(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *p_m_Cancelled; // r14
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxRequestBase *v9; // rdi
  const void *_a2; // rcx
  unsigned __int64 v11; // rbp
  const void *_a1; // rax
  unsigned __int8 v13; // r8
  FxCallbackLock *m_IoCancelCallbackLockPtr; // rsi
  void (__fastcall *m_Cancel)(WDFREQUEST__ *); // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // r8
  char v19; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_Cancelled = &this->m_Cancelled;
  while ( 1 )
  {
    Flink = p_m_Cancelled->Flink;
    if ( p_m_Cancelled->Flink == p_m_Cancelled )
      break;
    v7 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v7;
    v9 = (FxRequestBase *)&Flink[-18];
    v7->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v11 = (unsigned __int64)&Flink[-18] ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = (const void *)v11;
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    if ( !v9->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x54u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v9, 64);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v13);
    m_IoCancelCallbackLockPtr = this->m_IoCancelCallbackLockPtr;
    if ( !v9->m_ObjectSize )
      v11 = 0LL;
    if ( v9->m_CancelRoutine.m_Cancel )
    {
      v19 = 0;
      if ( m_IoCancelCallbackLockPtr )
        m_IoCancelCallbackLockPtr->Lock(m_IoCancelCallbackLockPtr, (unsigned __int8 *)&v19);
      m_Cancel = v9->m_CancelRoutine.m_Cancel;
      v9->m_CancelRoutine.m_Cancel = 0LL;
      m_Cancel((WDFREQUEST__ *)v11);
      if ( m_IoCancelCallbackLockPtr )
      {
        LOBYTE(v16) = v19;
        m_IoCancelCallbackLockPtr->Unlock(m_IoCancelCallbackLockPtr, v16);
      }
    }
    v9->Release(v9, (void *)1969583441, 4934, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v17);
  }
  return 1;
}

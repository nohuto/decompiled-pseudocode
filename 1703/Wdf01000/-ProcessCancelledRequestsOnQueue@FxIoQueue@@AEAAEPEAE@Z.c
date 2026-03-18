/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00944E4
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C0014E48 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0014E6C (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C001E9CC (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  _LIST_ENTRY *p_m_CanceledOnQueueList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxRequestBase *v10; // rsi
  WDFQUEUE__ *v11; // r15
  WDFREQUEST__ *v12; // rbp
  const void *_a2; // rcx
  WDFREQUEST__ *_a1; // rax
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  unsigned __int16 m_ObjectSize; // r12
  __int64 v18; // rdx
  unsigned __int8 v19; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_CanceledOnQueueList = &this->m_CanceledOnQueueList;
  while ( 1 )
  {
    Flink = p_m_CanceledOnQueueList->Flink;
    if ( p_m_CanceledOnQueueList->Flink == p_m_CanceledOnQueueList )
      break;
    v8 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v8;
    v10 = (FxRequestBase *)&Flink[-18];
    v8->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v11 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v12 = (WDFREQUEST__ *)((unsigned __int64)&Flink[-18] ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a1 = v12;
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    if ( !v10->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x55u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v10, 64, v15);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v15);
    if ( !v10->m_ObjectSize )
      v12 = 0LL;
    m_ObjectSize = this->m_ObjectSize;
    if ( this->m_IoCanceledOnQueue.Method )
    {
      v19 = 0;
      FxLockedCallback::CallbackStart(&this->m_IoCanceledOnQueue, &v19);
      if ( !m_ObjectSize )
        v11 = 0LL;
      this->m_IoCanceledOnQueue.Method(v11, v12);
      LOBYTE(v18) = v19;
      FxLockedCallback::CallbackEnd(&this->m_IoCanceledOnQueue, v18);
    }
    FxNonPagedObject::Lock(this, PreviousIrql, v16);
  }
  return 1;
}

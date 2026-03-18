/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00824D4
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C000F964 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C000F984 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C001F4F4 (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *p_m_CanceledOnQueueList; // rsi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxRequestBase *v10; // rbx
  WDFWORKITEM__ *_a2; // rax
  const void *_a1; // rdx
  unsigned __int8 v13; // r8
  WDFREQUEST__ *v14; // rbx
  unsigned __int8 v15; // r8
  WDFQUEUE__ *Handle; // r15
  __int64 v17; // rdx
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_CanceledOnQueueList = &this->m_CanceledOnQueueList;
  while ( p_m_CanceledOnQueueList->Flink != p_m_CanceledOnQueueList )
  {
    Flink = p_m_CanceledOnQueueList->Flink;
    v8 = p_m_CanceledOnQueueList->Flink->Flink;
    Blink = p_m_CanceledOnQueueList->Flink->Blink;
    if ( v8->Blink != p_m_CanceledOnQueueList->Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v8;
    v10 = (FxRequestBase *)&Flink[-18];
    v8->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    _a2 = FxWmiProvider::GetHandle((FxWorkItem *)this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x53u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v10, 64, v13);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v13);
    if ( v10->m_ObjectSize )
      v14 = (WDFREQUEST__ *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    Handle = (WDFQUEUE__ *)FxWmiProvider::GetHandle((FxWorkItem *)this);
    if ( this->m_IoCanceledOnQueue.Method )
    {
      v18 = 0;
      FxLockedCallback::CallbackStart(&this->m_IoCanceledOnQueue, &v18);
      this->m_IoCanceledOnQueue.Method(Handle, v14);
      LOBYTE(v17) = v18;
      FxLockedCallback::CallbackEnd(&this->m_IoCanceledOnQueue, v17);
    }
    FxNonPagedObject::Lock(this, PreviousIrql, v15);
  }
  return 1;
}

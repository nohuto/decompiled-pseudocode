/*
 * XREFs of ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D7FC
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C001E3D4 (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C003A700 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequests(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *p_m_Cancelled; // r14
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxRequestBase *v9; // rbx
  WDFWORKITEM__ *_a2; // rax
  const void *_a1; // rdx
  unsigned __int8 v12; // r8
  unsigned __int64 v13; // rbp
  FxCallbackLock *m_IoCancelCallbackLockPtr; // rsi
  void (__fastcall *m_Cancel)(WDFREQUEST__ *); // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // r8
  char v19; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_Cancelled = &this->m_Cancelled;
  while ( p_m_Cancelled->Flink != p_m_Cancelled )
  {
    Flink = p_m_Cancelled->Flink;
    v7 = p_m_Cancelled->Flink->Flink;
    Blink = p_m_Cancelled->Flink->Blink;
    if ( v7->Blink != p_m_Cancelled->Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v7;
    v9 = (FxRequestBase *)&Flink[-18];
    v7->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    _a2 = FxWmiProvider::GetHandle((FxWorkItem *)this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x54u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v9, 64);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v12);
    if ( v9->m_ObjectSize )
      v13 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v13 = 0LL;
    m_IoCancelCallbackLockPtr = this->m_IoCancelCallbackLockPtr;
    if ( v9->m_CancelRoutine.m_Cancel )
    {
      v19 = 0;
      if ( m_IoCancelCallbackLockPtr )
        m_IoCancelCallbackLockPtr->Lock(m_IoCancelCallbackLockPtr, (unsigned __int8 *)&v19);
      m_Cancel = v9->m_CancelRoutine.m_Cancel;
      v9->m_CancelRoutine.m_Cancel = 0LL;
      m_Cancel((WDFREQUEST__ *)v13);
      if ( m_IoCancelCallbackLockPtr )
      {
        LOBYTE(v16) = v19;
        m_IoCancelCallbackLockPtr->Unlock(m_IoCancelCallbackLockPtr, v16);
      }
    }
    v9->Release(v9, (void *)1969583441, 4931, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v17);
  }
  return 1;
}

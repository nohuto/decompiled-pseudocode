/*
 * XREFs of ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0084650
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00642E0 (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxIoTarget::WaitForDisposeEvent(FxIoTarget *this, unsigned __int8 a2)
{
  const void *_a1; // rax
  FxCREvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, a2);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_DisposeEvent = &eventOnStack;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0xBu, WPP_FxIoTarget_cpp_Traceguids, _a1, &eventOnStack);
  if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) > 1 )
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  this->m_DisposeEvent = 0LL;
}

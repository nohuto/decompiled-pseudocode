/*
 * XREFs of ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00966CC
 * Callers:
 *     imp_WdfIoQueueDrainSynchronously @ 0x1C00938F0 (imp_WdfIoQueueDrainSynchronously.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0021E38 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C005FB50 (WPP_IFR_SF_dq.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096EEC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueDrainSynchronously(FxIoQueue *this)
{
  int v2; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v5; // rcx
  void *v6; // rbx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v2 = FxIoQueue::QueuePurge(this, 0, 0, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v2 >= 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        m_Globals,
        5u,
        0xDu,
        0x4Au,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        this->m_Queue.m_RequestCount + this->m_DriverIoCount,
        _a2);
    }
    KeEnterCriticalRegion();
    v5 = this->m_Globals;
    if ( this->m_ObjectSize )
      v6 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v6 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      v5,
      &eventOnStack,
      "waiting for queue to drain, WDFQUEUE",
      v6,
      v5->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v2;
}

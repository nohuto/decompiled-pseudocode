/*
 * XREFs of ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0094E04
 * Callers:
 *     imp_WdfIoQueuePurgeSynchronously @ 0x1C0093540 (imp_WdfIoQueuePurgeSynchronously.c)
 * Callees:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0013D74 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C001ABDC (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0067EC4 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall FxIoQueue::QueuePurgeSynchronously(FxIoQueue *this)
{
  int v2; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *v6; // rcx
  void *v7; // rbx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v2 = FxIoQueue::QueuePurge(this, 1u, 1u, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v2 >= 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        m_Globals,
        5u,
        0xDu,
        0x4Bu,
        WPP_FxIoQueue_cpp_Traceguids,
        this->m_Queue.m_RequestCount + this->m_DriverIoCount,
        _a2);
    }
    KeEnterCriticalRegion();
    m_ObjectSize = this->m_ObjectSize;
    v6 = this->m_Globals;
    v7 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v7 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      v6,
      &eventOnStack,
      "waiting for queue to purge, WDFQUEUE",
      v7,
      v6->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v2;
}

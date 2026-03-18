/*
 * XREFs of ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0090C30
 * Callers:
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C008F730 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x1C008F790 (imp_WdfIoQueueStopSynchronously.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0018068 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0064AC8 (WPP_IFR_SF_dq.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00908B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdleSynchronously(FxIoQueue *this, unsigned __int8 CancelRequests)
{
  int v4; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  void *v8; // rdi
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v4 = FxIoQueue::QueueIdle(this, CancelRequests, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v4 >= 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_dq(m_Globals, 5u, 0xDu, 0x45u, WPP_FxIoQueue_cpp_Traceguids, this->m_DriverIoCount, _a2);
    }
    KeEnterCriticalRegion();
    v7 = this->m_Globals;
    if ( this->m_ObjectSize )
      v8 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v8 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      v7,
      &eventOnStack,
      "waiting for queue to stop, WDFQUEUE",
      v8,
      v7->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}

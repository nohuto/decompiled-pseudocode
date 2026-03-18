/*
 * XREFs of ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001EAB0
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0022564 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C001ABDC (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoQueue::StartPowerTransitionOff(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 v4; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *v7; // rcx
  MxEvent *p_m_PowerIdle; // rdx
  void *v9; // rbx
  const void *v10; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  if ( this->m_PowerManaged )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    this->m_PowerState = FxIoQueuePowerStartingTransition;
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v4) )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v10 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x66u, WPP_FxIoQueue_cpp_Traceguids, v10);
      }
      m_ObjectSize = this->m_ObjectSize;
      v7 = this->m_Globals;
      p_m_PowerIdle = &this->m_PowerIdle;
      v9 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v9 = 0LL;
      _FX_DRIVER_GLOBALS::WaitForSignal(
        v7,
        p_m_PowerIdle,
        "waiting for all threads to stop dispatching requests so that queue can be powered off, WDFQUEUE",
        v9,
        v7->FxVerifierDbgWaitForSignalTimeoutInSec,
        1);
    }
  }
}

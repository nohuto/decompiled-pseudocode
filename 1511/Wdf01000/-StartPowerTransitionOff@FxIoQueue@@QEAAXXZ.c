/*
 * XREFs of ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001F5CC
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001DCA0 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0020B88 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

void __fastcall FxIoQueue::StartPowerTransitionOff(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  MxEvent *p_m_PowerIdle; // rdi
  unsigned __int16 v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  void *v8; // rbx
  const void *v9; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  if ( this->m_PowerManaged )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    p_m_PowerIdle = &this->m_PowerIdle;
    this->m_PowerState = FxIoQueuePowerStartingTransition;
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v5) )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v9 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x64u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v9);
      }
      v7 = this->m_Globals;
      if ( this->m_ObjectSize )
        v8 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v8 = 0LL;
      _FX_DRIVER_GLOBALS::WaitForSignal(
        v7,
        p_m_PowerIdle,
        "waiting for all threads to stop dispatching requests so that queue can be powered off, WDFQUEUE",
        v8,
        v7->FxVerifierDbgWaitForSignalTimeoutInSec,
        1u);
    }
  }
}

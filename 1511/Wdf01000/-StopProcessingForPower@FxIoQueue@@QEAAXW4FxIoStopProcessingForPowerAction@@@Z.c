/*
 * XREFs of ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001F510
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001DCA0 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000EC1C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001EB28 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0020B88 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

void __fastcall FxIoQueue::StopProcessingForPower(
        FxIoQueue *this,
        FxIoStopProcessingForPowerAction Action,
        unsigned __int8 a3)
{
  int v4; // edx
  MxEvent *p_m_PowerIdle; // rsi
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  void *v9; // rbx
  int v10; // edx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  const void *v13; // rax
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  v4 = Action - 1;
  if ( v4 )
  {
    v10 = v4 - 1;
    if ( v10 )
    {
      if ( v10 != 1 || this->m_PowerManaged == 1 )
        return;
    }
    else if ( !this->m_PowerManaged )
    {
      return;
    }
    FxNonPagedObject::Lock(this, &irql, a3);
    FxIoQueue::SetState(this, FxIoQueueSetShutdown|0x2);
    FxNonPagedObject::Unlock(this, irql, v11);
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    FxNonPagedObject::Lock(this, &irql, v12);
    this->m_PowerState = FxIoQueuePowerPurge;
  }
  else
  {
    if ( !this->m_PowerManaged )
      return;
    FxNonPagedObject::Lock(this, &irql, a3);
    this->m_PowerState = FxIoQueuePowerStopping;
  }
  p_m_PowerIdle = &this->m_PowerIdle;
  KeClearEvent(&this->m_PowerIdle.m_Event);
  if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v6) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x65u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v13);
    }
    v8 = this->m_Globals;
    if ( this->m_ObjectSize )
      v9 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v9 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      v8,
      p_m_PowerIdle,
      "waiting for all inflight requests to be acknowledged on WDFQUEUE",
      v9,
      v8->FxVerifierDbgWaitForSignalTimeoutInSec,
      1u);
  }
}

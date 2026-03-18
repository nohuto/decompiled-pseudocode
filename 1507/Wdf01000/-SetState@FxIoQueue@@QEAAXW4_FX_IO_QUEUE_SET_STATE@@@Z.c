/*
 * XREFs of ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C000BEE0
 * Callers:
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C000AE00 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C000C1A4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000C874 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C00942D0 (imp_WdfIoQueueStart.c)
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C0095090 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096948 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096EEC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxIoQueue::SetState(FxIoQueue *this, _FX_IO_QUEUE_SET_STATE NewStatus)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int32 v4; // edi
  _FX_IO_QUEUE_STATE m_QueueState; // eax
  const void *_a1; // rbx
  const void *v7; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  if ( (NewStatus & 0x7FFCFFF0) != 0 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(
      m_Globals,
      2u,
      0xDu,
      0x14u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1);
    v8 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v8,
      m_Globals->Public.DriverName,
      (const char *)&v8);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    v4 = NewStatus & 0x7FFFFFFF;
    if ( (NewStatus & 0x20000) != 0 )
      this->m_QueueState &= ~0x10000u;
    if ( (NewStatus & 0x10000) != 0 )
      this->m_QueueState |= 0x10000u;
    if ( (NewStatus & 1) != 0 )
    {
      m_QueueState = this->m_QueueState;
      if ( (m_QueueState & 0x10000) != 0 )
      {
        if ( this->m_ObjectSize )
          v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v7 = 0LL;
        WPP_IFR_SF_q(
          m_Globals,
          4u,
          0xDu,
          0x15u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v7);
      }
      else
      {
        this->m_QueueState = m_QueueState | 1;
      }
    }
    if ( (v4 & 0x80000002) != 0 )
      this->m_QueueState &= ~1u;
    if ( (v4 & 0x80000004) != 0 )
    {
      this->m_QueueState |= 2u;
      this->m_CancelDispatchedRequests = 0;
    }
    if ( (v4 & 0x80000008) != 0 )
      this->m_QueueState &= ~2u;
  }
}

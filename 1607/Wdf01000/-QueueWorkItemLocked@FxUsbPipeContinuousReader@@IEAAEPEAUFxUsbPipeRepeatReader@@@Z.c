/*
 * XREFs of ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00641E4
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00013F8 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0039140 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C003039C (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     WPP_IFR_SF_qdL @ 0x1C008A1B8 (WPP_IFR_SF_qdL.c)
 */

unsigned __int8 __fastcall FxUsbPipeContinuousReader::QueueWorkItemLocked(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        __int64 a3,
        unsigned __int16 a4)
{
  FxUsbPipe *m_Pipe; // rax
  char v5; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  FxUsbPipe *v10; // rcx
  const void *v11; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  m_Pipe = this->m_Pipe;
  v5 = 0;
  m_Globals = m_Pipe->m_Globals;
  if ( m_Pipe->m_State == WdfIoTargetStarted && !this->m_WorkItemQueued )
  {
    if ( m_Pipe->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0xAu, WPP_FxUsbPipe_cpp_Traceguids, _a1);
    if ( FxSystemWorkItem::EnqueueWorker(
           this->m_WorkItem,
           FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk,
           Repeater,
           1u) )
    {
      this->m_WorkItemQueued = 1;
      return 1;
    }
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, WPP_FxUsbPipe_cpp_Traceguids);
  }
  v10 = this->m_Pipe;
  if ( v10->m_ObjectSize )
    v11 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v11 = 0LL;
  WPP_IFR_SF_qdL(
    m_Globals,
    v10->m_State,
    this->m_WorkItemQueued,
    a4,
    traceGuid,
    v11,
    this->m_WorkItemQueued,
    v10->m_State);
  return v5;
}

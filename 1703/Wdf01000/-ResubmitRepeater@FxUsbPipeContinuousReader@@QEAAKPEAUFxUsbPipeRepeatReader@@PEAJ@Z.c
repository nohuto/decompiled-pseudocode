/*
 * XREFs of ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00030EC
 * Callers:
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C003C7B0 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008D164 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C000332C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00100B0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdq @ 0x1C00399C8 (WPP_IFR_SF_qdq.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0067590 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C0082320 (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::ResubmitRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        int *Status)
{
  unsigned int v6; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  int v8; // esi
  FxUsbPipe *m_Pipe; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxUsbPipe *v13; // rcx
  unsigned __int16 v14; // ax
  const void *v15; // rcx
  FxUsbPipe *v16; // r8
  unsigned __int8 v17; // al
  unsigned __int8 m_NumReaders; // cl
  int v19; // ecx
  unsigned __int16 v20; // ax
  const void *v21; // r8
  unsigned __int16 v22; // ax
  const void *v23; // r8
  unsigned int v24; // eax
  int _a3; // [rsp+38h] [rbp-40h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  m_Globals = this->m_Pipe->m_Globals;
  v8 = FxUsbPipeContinuousReader::FormatRepeater(this, Repeater);
  FxNonPagedObject::Lock(this->m_Pipe, &irql);
  if ( this->m_WorkItemQueued )
  {
    v8 = -1073741536;
    m_Pipe = this->m_Pipe;
    m_ObjectSize = m_Pipe->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Globals,
      4u,
      0xEu,
      0xDu,
      WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      Repeater,
      Repeater->Request,
      Repeater->RequestIrp);
  }
  else if ( v8 < 0 )
  {
    Repeater->Request->m_Irp.m_Irp->IoStatus.Status = v8;
    v13 = this->m_Pipe;
    v14 = v13->m_ObjectSize;
    v15 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14 )
      v15 = 0LL;
    WPP_IFR_SF_qdq(m_Globals, 4u, 0xEu, 0xEu, WPP_FxUsbPipe_cpp_Traceguids, v15, v8, Repeater);
    v16 = this->m_Pipe;
    if ( v16->m_State == WdfIoTargetStarted )
    {
      v17 = ++this->m_NumFailedReaders;
      m_NumReaders = this->m_NumReaders;
      if ( v17 == m_NumReaders )
      {
        FxUsbPipeContinuousReader::QueueWorkItemLocked(this, Repeater);
      }
      else
      {
        _a3 = m_NumReaders;
        v19 = m_NumReaders - v17;
        v20 = v16->m_ObjectSize;
        v21 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v20 )
          v21 = 0LL;
        WPP_IFR_SF_qdd(m_Globals, 4u, 0xEu, 0xFu, WPP_FxUsbPipe_cpp_Traceguids, v21, v19, _a3);
      }
    }
    else
    {
      v22 = v16->m_ObjectSize;
      v23 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v22 )
        v23 = 0LL;
      WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x10u, WPP_FxUsbPipe_cpp_Traceguids, v23);
    }
  }
  else
  {
    v24 = FxIoTarget::SubmitLocked(this->m_Pipe, Repeater->Request, 0LL, 0x80000000);
    v6 = v24;
    if ( (v24 & 1) != 0 )
    {
      KeClearEvent(&Repeater->ReadCompletedEvent.m_Event);
    }
    else if ( (v24 & 2) != 0 )
    {
      v8 = -1073741536;
    }
    else
    {
      v8 = Repeater->Request->m_Irp.m_Irp->IoStatus.Status;
    }
  }
  FxNonPagedObject::Unlock(this->m_Pipe, irql);
  *Status = v8;
  return v6;
}

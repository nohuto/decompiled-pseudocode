/*
 * XREFs of ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00013F8
 * Callers:
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0039140 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0089414 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0001628 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000D9D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdq @ 0x1C0035ECC (WPP_IFR_SF_qdq.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00641E4 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C007DDE0 (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::ResubmitRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        int *Status)
{
  unsigned int v6; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  int v8; // edi
  FxUsbPipe *m_Pipe; // rcx
  const void *_a1; // rcx
  FxUsbPipe *v12; // rax
  const void *v13; // rax
  FxUsbPipe *v14; // r8
  unsigned __int8 v15; // al
  unsigned __int8 m_NumReaders; // cl
  const void *v17; // r8
  const void *v18; // r8
  unsigned int v19; // eax
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  m_Globals = this->m_Pipe->m_Globals;
  v8 = FxUsbPipeContinuousReader::FormatRepeater(this, Repeater);
  FxNonPagedObject::Lock(this->m_Pipe, &irql);
  if ( this->m_WorkItemQueued )
  {
    v8 = -1073741536;
    m_Pipe = this->m_Pipe;
    if ( m_Pipe->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
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
    v12 = this->m_Pipe;
    if ( v12->m_ObjectSize )
      v13 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    WPP_IFR_SF_qdq(m_Globals, 4u, 0xEu, 0xEu, WPP_FxUsbPipe_cpp_Traceguids, v13, v8, Repeater);
    v14 = this->m_Pipe;
    if ( v14->m_State == WdfIoTargetStarted )
    {
      v15 = ++this->m_NumFailedReaders;
      m_NumReaders = this->m_NumReaders;
      if ( v15 == m_NumReaders )
      {
        FxUsbPipeContinuousReader::QueueWorkItemLocked(this, Repeater);
      }
      else
      {
        if ( v14->m_ObjectSize )
          v17 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v17 = 0LL;
        WPP_IFR_SF_qdd(m_Globals, 4u, 0xEu, 0xFu, WPP_FxUsbPipe_cpp_Traceguids, v17, m_NumReaders - v15, m_NumReaders);
      }
    }
    else
    {
      if ( v14->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x10u, WPP_FxUsbPipe_cpp_Traceguids, v18);
    }
  }
  else
  {
    v19 = FxIoTarget::SubmitLocked(this->m_Pipe, Repeater->Request, 0LL, 0x80000000);
    v6 = v19;
    if ( (v19 & 1) != 0 )
    {
      KeClearEvent(&Repeater->ReadCompletedEvent.m_Event);
    }
    else if ( (v19 & 2) != 0 )
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

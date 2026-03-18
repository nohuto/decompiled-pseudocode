/*
 * XREFs of ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C009177C
 * Callers:
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0091D80 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C0091F90 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00144C0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C002D8B4 (WPP_IFR_SF_qdq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C007B820 (WPP_IFR_SF_qqqq.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C009151C (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::ResubmitRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        int *Status)
{
  unsigned int v6; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  int v8; // ebx
  unsigned __int8 v9; // r8
  FxUsbPipe *m_Pipe; // rcx
  const void *_a1; // rcx
  unsigned __int8 v12; // r8
  unsigned int v13; // eax
  FxUsbPipe *v14; // rax
  const void *v15; // rax
  unsigned __int16 v16; // r9
  __int64 v17; // r8
  unsigned __int8 v18; // al
  unsigned __int8 m_NumReaders; // cl
  const void *v20; // r8
  const void *v21; // r8
  FxUsbPipe *v22; // rcx
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  m_Globals = this->m_Pipe->m_Globals;
  v8 = FxUsbPipeContinuousReader::FormatRepeater(this, Repeater);
  FxNonPagedObject::Lock(this->m_Pipe, &irql, v9);
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
    v14 = this->m_Pipe;
    if ( v14->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    WPP_IFR_SF_qdq(m_Globals, 4u, 0xEu, 0xEu, WPP_FxUsbPipe_cpp_Traceguids, v15, v8, Repeater);
    v17 = (__int64)this->m_Pipe;
    if ( *(_DWORD *)(v17 + 328) == 1 )
    {
      v18 = ++this->m_NumFailedReaders;
      m_NumReaders = this->m_NumReaders;
      if ( v18 == m_NumReaders )
      {
        FxUsbPipeContinuousReader::QueueWorkItemLocked(this, Repeater, v17, v16);
      }
      else
      {
        if ( *(_WORD *)(v17 + 10) )
          v20 = (const void *)(v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        WPP_IFR_SF_qdd(m_Globals, 4u, 0xEu, 0xFu, WPP_FxUsbPipe_cpp_Traceguids, v20, m_NumReaders - v18, m_NumReaders);
      }
    }
    else
    {
      if ( *(_WORD *)(v17 + 10) )
        v21 = (const void *)(v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x10u, WPP_FxUsbPipe_cpp_Traceguids, v21);
    }
  }
  else
  {
    v13 = FxIoTarget::SubmitLocked(this->m_Pipe, Repeater->Request, 0LL, 0x80000000);
    v6 = v13;
    if ( (v13 & 1) != 0 )
    {
      KeClearEvent(&Repeater->ReadCompletedEvent.m_Event);
    }
    else if ( (v13 & 2) != 0 )
    {
      v8 = -1073741536;
    }
    else
    {
      v8 = Repeater->Request->m_Irp.m_Irp->IoStatus.Status;
    }
  }
  v22 = this->m_Pipe;
  if ( SLOBYTE(v22->m_ObjectFlags) < 0 && *(_QWORD *)&v22[-1].m_InterfaceNumber )
    FxVerifierLock::Unlock(*(FxVerifierLock **)&v22[-1].m_InterfaceNumber, irql, v12);
  else
    KeReleaseSpinLock(&v22->m_NPLock.m_Lock, irql);
  *Status = v8;
  return v6;
}

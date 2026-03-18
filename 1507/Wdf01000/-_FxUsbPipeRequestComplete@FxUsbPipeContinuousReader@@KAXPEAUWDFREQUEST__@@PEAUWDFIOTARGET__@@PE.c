/*
 * XREFs of ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0091D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1C007B820 (WPP_IFR_SF_qqqq.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C009151C (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C009177C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete(
        WDFREQUEST__ *Request,
        WDFUSBPIPE__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        FxUsbPipeRepeatReader *Context)
{
  _QWORD *_a2; // r10
  FxUsbPipeContinuousReader *Parent; // r14
  const void *v6; // rbx
  char v8; // r15
  char v9; // bp
  FxUsbPipe *m_Pipe; // rdi
  int _a4; // r8d
  const void *_a1; // rcx
  unsigned __int8 v13; // r8
  __int64 v14; // r8
  unsigned __int16 v15; // r9
  unsigned __int8 v16; // r8
  FxVerifierLock *v17; // rcx
  const void *v18; // rcx
  int irql; // [rsp+98h] [rbp+20h] BYREF

  _a2 = &Context->Request->__vftable;
  Parent = Context->Parent;
  v6 = 0LL;
  v8 = 0;
  v9 = 0;
  m_Pipe = Parent->m_Pipe;
  _a4 = Context->Request->m_Irp.m_Irp->IoStatus.Status;
  irql = _a4;
  if ( _a4 < 0 )
  {
    if ( _a4 == -1073741536 )
    {
      if ( m_Pipe->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_qqqq(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x12u,
        WPP_FxUsbPipe_cpp_Traceguids,
        v18,
        Context,
        _a2,
        Context->RequestIrp);
    }
    else
    {
      if ( m_Pipe->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x11u,
        WPP_FxUsbPipe_cpp_Traceguids,
        _a1,
        _a2,
        Context->RequestIrp,
        _a4);
      FxNonPagedObject::Lock(m_Pipe, (unsigned __int8 *)&irql, v13);
      KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
      v8 = 1;
      FxUsbPipeContinuousReader::QueueWorkItemLocked(Parent, Context, v14, v15);
      if ( SLOBYTE(m_Pipe->m_ObjectFlags) < 0 && (v17 = *(FxVerifierLock **)&m_Pipe[-1].m_InterfaceNumber) != 0LL )
        FxVerifierLock::Unlock(v17, irql, v16);
      else
        KeReleaseSpinLock(&m_Pipe->m_NPLock.m_Lock, irql);
    }
  }
  else
  {
    Parent->m_ReadCompleteCallback(
      Target,
      *(WDFMEMORY__ **)(*(_QWORD *)(_a2[21] + 32LL) + 8LL),
      *(_QWORD *)(*(_QWORD *)(_a2[21] + 32LL) + 16LL),
      Parent->m_ReadCompleteContext);
    v9 = FxUsbPipeContinuousReader::ResubmitRepeater(Parent, Context, &irql);
  }
  if ( (v9 & 1) != 0 )
  {
    KeInsertQueueDpc(&Context->Dpc, 0LL, 0LL);
  }
  else if ( (v9 & 2) != 0 )
  {
    if ( m_Pipe->m_ObjectSize )
      v6 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qqqq(
      m_Pipe->m_Globals,
      4u,
      0xEu,
      0x13u,
      WPP_FxUsbPipe_cpp_Traceguids,
      v6,
      Context,
      Context->Request,
      Context->RequestIrp);
  }
  else if ( !v8 )
  {
    KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
  }
}

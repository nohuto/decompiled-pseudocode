/*
 * XREFs of ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0039140
 * Callers:
 *     <none>
 * Callees:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00013F8 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00132CC (WPP_IFR_SF_qqqd.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00641E4 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1C007DDE0 (WPP_IFR_SF_qqqq.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete(
        WDFREQUEST__ *Request,
        WDFUSBPIPE__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        FxUsbPipeRepeatReader *Context)
{
  _QWORD *_a3; // r10
  FxUsbPipeContinuousReader *Parent; // r14
  const void *_a1; // rbx
  char v8; // r15
  char v9; // bp
  FxUsbPipe *m_Pipe; // rsi
  int _a4; // r8d
  const void *v12; // rcx
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r8
  const void *v15; // rcx
  int irql; // [rsp+98h] [rbp+20h] BYREF

  _a3 = &Context->Request->__vftable;
  Parent = Context->Parent;
  _a1 = 0LL;
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
        v15 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      WPP_IFR_SF_qqqq(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x12u,
        WPP_FxUsbPipe_cpp_Traceguids,
        v15,
        Context,
        _a3,
        Context->RequestIrp);
    }
    else
    {
      if ( m_Pipe->m_ObjectSize )
        v12 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v12 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x11u,
        WPP_FxUsbPipe_cpp_Traceguids,
        v12,
        _a3,
        Context->RequestIrp,
        _a4);
      FxNonPagedObject::Lock(m_Pipe, (unsigned __int8 *)&irql, v13);
      KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
      v8 = 1;
      FxUsbPipeContinuousReader::QueueWorkItemLocked(Parent, Context);
      FxNonPagedObject::Unlock(m_Pipe, irql, v14);
    }
  }
  else
  {
    Parent->m_ReadCompleteCallback(
      Target,
      *(WDFMEMORY__ **)(*(_QWORD *)(_a3[21] + 32LL) + 8LL),
      *(_QWORD *)(*(_QWORD *)(_a3[21] + 32LL) + 16LL),
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
      _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qqqq(
      m_Pipe->m_Globals,
      4u,
      0xEu,
      0x13u,
      WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      Context,
      Context->Request,
      Context->RequestIrp);
  }
  else if ( !v8 )
  {
    KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
  }
}

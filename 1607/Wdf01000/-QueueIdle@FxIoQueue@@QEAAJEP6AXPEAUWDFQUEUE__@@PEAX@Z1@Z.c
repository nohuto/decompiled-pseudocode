/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00908B0
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C008F670 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C008F6D0 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0090C30 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C0012448 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00125E0 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D160 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C001D284 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001D978 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001DA04 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C003A700 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C0074A90 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C007861C (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *_a1; // rdi
  unsigned int v10; // esi
  unsigned __int8 v11; // r8
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rax
  unsigned __int8 v14; // r8
  FxRequest *v15; // rsi
  FxRequest *v16; // rcx
  unsigned __int8 v17; // r8
  _IRP *NextRequest; // rax
  unsigned __int8 v19; // r8
  FxRequest *v20; // rsi
  FxRequest *v21; // rcx
  unsigned int *v22; // r8
  WDFWORKITEM__ *Handle; // rax
  const void *v24; // rdx
  const void *v25; // rax
  unsigned __int8 v26; // r8
  _IRP *v27; // rax
  unsigned __int8 v28; // r8
  FxRequest *v29; // rsi
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // r8
  const void *v32; // rax
  FxIoQueue *v33; // rcx
  unsigned __int16 v34; // r9
  FxRequest *request; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  fwrIrpList = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)IdleComplete);
  _a1 = 0LL;
  if ( this->m_Deleted )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v10 = -1073741738;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741738);
LABEL_10:
    FxNonPagedObject::Unlock(this, irql, v11);
    return v10;
  }
  if ( IdleComplete )
  {
    _a2 = this->m_IdleComplete.Method;
    if ( _a2 )
    {
      if ( this->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v10 = -1073741808;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, _a1, (__int64)_a2, -1073741808);
      goto LABEL_10;
    }
    this->m_IdleComplete.Method = IdleComplete;
    this->m_IdleCompleteContext = Context;
  }
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  if ( CancelRequests )
  {
    this->m_CancelDispatchedRequests = 1;
    v15 = 0LL;
    request = 0LL;
    while ( !(unsigned int)FxRequest::PeekRequest(&this->m_Queue, v15, 0LL, 0LL, &request) )
    {
      v15 = request;
      v16 = request;
      request->m_Canceled = 1;
      v16->Release(v16, 0LL, 3721, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v14);
  if ( CancelRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v17);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v20 = (FxRequest *)NextRequest;
      if ( !NextRequest )
        break;
      if ( !FxRequest::IsCancelled((FxRequest *)NextRequest)
        && FxRequest::InsertHeadIrpQueue(v21, &this->m_Queue, v22) >= 0 )
      {
        goto LABEL_28;
      }
      Handle = FxWmiProvider::GetHandle((FxWorkItem *)this);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v24, Handle);
      FxObject::AddRef(
        v20,
        (void *)0x75657551,
        3780,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v20, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v25);
    }
LABEL_28:
    FxNonPagedObject::Unlock(this, irql, v19);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v26);
      v27 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v29 = (FxRequest *)v27;
      if ( !v27 )
        break;
      v30 = irql;
      *((_BYTE *)&v27[1].Size + 5) = 1;
      FxNonPagedObject::Unlock(this, v30, v28);
      FxObject::AddRef(
        v29,
        (void *)0x75657551,
        3821,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v29, v31);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v32 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v32);
    }
    FxNonPagedObject::Unlock(this, irql, v28);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v33, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v17);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v34);
  return 0LL;
}

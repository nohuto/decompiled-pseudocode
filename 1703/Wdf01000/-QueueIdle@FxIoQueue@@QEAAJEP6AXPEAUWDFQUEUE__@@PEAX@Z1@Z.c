/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C009496C
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C00936B0 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0093710 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0094D0C (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C0013ED4 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0013FE4 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D6AC (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C001D834 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001DF54 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001DFE4 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C00788B4 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C007C46C (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rdx
  unsigned int v10; // edi
  unsigned __int8 v11; // r8
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  const void *v13; // rcx
  unsigned __int8 v15; // r8
  FxRequest *v16; // rdi
  FxRequest *v17; // rcx
  unsigned __int8 v18; // r8
  _IRP *NextRequest; // rax
  unsigned __int8 v20; // r8
  FxRequest *v21; // rdi
  FxRequest *v22; // rcx
  unsigned int *v23; // r8
  const void *v24; // rcx
  const void *v25; // rax
  const void *v26; // rcx
  unsigned __int8 v27; // r8
  _IRP *v28; // rax
  unsigned __int8 v29; // r8
  FxRequest *v30; // rdi
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // r8
  const void *v33; // rcx
  FxIoQueue *v34; // rcx
  unsigned __int16 v35; // r9
  FxRequest *request; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  fwrIrpList.Flink = 0LL;
  fwrIrpList.Blink = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)IdleComplete);
  if ( this->m_Deleted )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v10 = -1073741738;
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
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
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v10 = -1073741808;
      if ( !this->m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, v13, (__int64)_a2, -1073741808);
      goto LABEL_10;
    }
    this->m_IdleComplete.Method = IdleComplete;
    this->m_IdleCompleteContext = Context;
  }
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  if ( CancelRequests )
  {
    this->m_CancelDispatchedRequests = 1;
    v16 = 0LL;
    request = 0LL;
    while ( !(unsigned int)FxRequest::PeekRequest(&this->m_Queue, v16, 0LL, 0LL, &request) )
    {
      v16 = request;
      v17 = request;
      request->m_Canceled = 1;
      v17->Release(v17, 0LL, 3724, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v15);
  if ( CancelRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v18);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v21 = (FxRequest *)NextRequest;
      if ( !NextRequest )
        break;
      if ( !FxRequest::IsCancelled((FxRequest *)NextRequest)
        && FxRequest::InsertHeadIrpQueue(v22, &this->m_Queue, v23) >= 0 )
      {
        goto LABEL_32;
      }
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v24 = 0LL;
      if ( v21->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v25, v24);
      FxObject::AddRef(
        v21,
        (void *)0x75657551,
        3783,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v21, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v26 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v26);
    }
LABEL_32:
    FxNonPagedObject::Unlock(this, irql, v20);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v27);
      v28 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v30 = (FxRequest *)v28;
      if ( !v28 )
        break;
      v31 = irql;
      *((_BYTE *)&v28[1].Size + 5) = 1;
      FxNonPagedObject::Unlock(this, v31, v29);
      FxObject::AddRef(
        v30,
        (void *)0x75657551,
        3824,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v30, v32);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v33 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v33);
    }
    FxNonPagedObject::Unlock(this, irql, v29);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v34, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v18);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v35);
  return 0LL;
}

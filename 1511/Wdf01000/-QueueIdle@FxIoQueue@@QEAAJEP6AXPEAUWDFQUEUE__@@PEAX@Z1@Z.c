/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0082940
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C0081700 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0081760 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0082CC0 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C000ED74 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000EE78 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001E238 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C001E2C0 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001EA9C (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001EB28 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C0064BA0 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C0069E24 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
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
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Eu, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, -1073741738);
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
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        0x3Fu,
        (const _GUID *)&FxObject::`vftable'.DebugExtension,
        _a1,
        (__int64)_a2,
        -1073741808);
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
      v16->Release(v16, 0LL, 3699, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
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
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x41u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v24, Handle);
      FxObject::AddRef(
        v20,
        (void *)0x75657551,
        3758,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v20, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x40u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v25);
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
        3799,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v29, v31);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v32 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v32);
    }
    FxNonPagedObject::Unlock(this, irql, v28);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v33, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v17);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v34);
  return 0LL;
}

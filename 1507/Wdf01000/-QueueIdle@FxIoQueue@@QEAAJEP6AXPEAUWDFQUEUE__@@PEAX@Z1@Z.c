/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096948
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C0094390 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0094440 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0096DF8 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00074C4 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00086B8 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000B5E4 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C000B738 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000BE58 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C000BEE0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C0075088 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  const void *_a1; // rax
  unsigned int v10; // edi
  unsigned __int8 v11; // r8
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rcx
  const void *v15; // rax
  unsigned __int8 v16; // r8
  FxRequest *v17; // rdi
  FxRequest *v18; // rcx
  _LIST_ENTRY *v19; // rcx
  unsigned __int8 v20; // r8
  FxRequest *NextRequest; // rax
  unsigned int *v22; // r8
  FxRequest *v23; // rdi
  const void *v24; // rcx
  const void *v25; // rax
  signed __int32 v26; // edx
  FxRequest *v27; // rdi
  unsigned int v28; // edx
  _LIST_ENTRY *v29; // rcx
  const void *v30; // rax
  _LIST_ENTRY *v31; // rcx
  unsigned __int8 v32; // r8
  FxRequest *v33; // rax
  unsigned __int8 v34; // r8
  FxRequest *v35; // rdi
  _LIST_ENTRY *v36; // rcx
  unsigned __int8 v37; // r8
  signed __int32 v38; // ecx
  FxRequest *v39; // rdi
  unsigned int v40; // ecx
  _LIST_ENTRY *v41; // rax
  const void *v42; // rax
  _LIST_ENTRY *v43; // rcx
  FxIoQueue *v44; // rcx
  unsigned __int16 v45; // r9
  FxRequest *request; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  fwrIrpList = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)IdleComplete);
  if ( this->m_Deleted )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v10 = -1073741738;
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x3Eu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      -1073741738);
    goto LABEL_6;
  }
  if ( IdleComplete )
  {
    _a2 = this->m_IdleComplete.Method;
    if ( _a2 )
    {
      if ( this->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      v10 = -1073741808;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        0x3Fu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v15,
        (__int64)_a2,
        -1073741808);
LABEL_6:
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v11);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      return v10;
    }
    this->m_IdleComplete.Method = IdleComplete;
    this->m_IdleCompleteContext = Context;
  }
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  if ( CancelRequests )
  {
    this->m_CancelDispatchedRequests = 1;
    v17 = 0LL;
    request = 0LL;
    while ( !FxRequest::PeekRequest(&this->m_Queue, v17, 0LL, 0LL, &request) )
    {
      v17 = request;
      v18 = request;
      request->m_Canceled = 1;
      v18->Release(v18, 0LL, 3699, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v19, irql, v16);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( CancelRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v20);
      NextRequest = (FxRequest *)FxRequest::GetNextRequest(&this->m_Queue);
      request = NextRequest;
      v23 = NextRequest;
      if ( !NextRequest )
        break;
      if ( !NextRequest->m_Irp.m_Irp->Cancel
        && !NextRequest->m_Canceled
        && FxRequest::InsertHeadIrpQueue(NextRequest, &this->m_Queue, v22) >= 0 )
      {
        goto LABEL_50;
      }
      if ( this->m_ObjectSize )
        v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v24 = 0LL;
      if ( v23->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        4u,
        0xDu,
        0x41u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v25,
        v24);
      v26 = _InterlockedExchangeAdd(&v23->m_Refcnt, 1u);
      v27 = request;
      v28 = v26 + 1;
      if ( (request->m_ObjectFlags & 0x80) != 0 )
        v29 = request[-1].m_ForwardProgressList.Blink;
      else
        v29 = 0LL;
      if ( v29 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v29,
          (void *)0x75657551,
          3758,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v28);
      FxIoQueue::CancelForQueue(this, v27, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v30 = 0LL;
      WPP_IFR_SF_q(
        m_Globals,
        5u,
        0xDu,
        0x40u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v30);
    }
LABEL_50:
    if ( (this->m_ObjectFlags & 0x80) != 0 && (v31 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v31, irql, (unsigned __int8)v22);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v32);
      v33 = (FxRequest *)FxRequest::GetNextRequest(&this->m_DriverCancelable);
      request = v33;
      v35 = v33;
      if ( !v33 )
        break;
      v33->m_Canceled = 1;
      if ( (this->m_ObjectFlags & 0x80) != 0 && (v36 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)v36, irql, v34);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      v38 = _InterlockedExchangeAdd(&v35->m_Refcnt, 1u);
      v39 = request;
      v40 = v38 + 1;
      if ( (request->m_ObjectFlags & 0x80) != 0 )
        v41 = request[-1].m_ForwardProgressList.Blink;
      else
        v41 = 0LL;
      if ( v41 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v41,
          (void *)0x75657551,
          3799,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v40);
      FxIoQueue::CancelForDriver(this, v39, v37);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v42 = 0LL;
      WPP_IFR_SF_q(
        m_Globals,
        5u,
        0xDu,
        0x42u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v42);
    }
    if ( (this->m_ObjectFlags & 0x80) != 0 && (v43 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v43, irql, v34);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v44, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v20);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v45);
  return 0LL;
}

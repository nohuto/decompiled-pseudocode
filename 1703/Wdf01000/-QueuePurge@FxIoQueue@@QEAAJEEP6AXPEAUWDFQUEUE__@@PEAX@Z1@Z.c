/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0013D74
 * Callers:
 *     imp_WdfIoQueuePurge @ 0x1C0013B40 (imp_WdfIoQueuePurge.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001E9F0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueDrain @ 0x1C0093480 (imp_WdfIoQueueDrain.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0094160 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0094864 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0094E04 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C0013ED4 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D8A0 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001DF54 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001DFE4 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  FxRequest *NextRequest; // rax
  unsigned __int8 v14; // r8
  FxRequest *v15; // rbp
  FxRequest *v16; // rax
  unsigned __int8 v17; // r8
  FxRequest *v18; // rbp
  unsigned __int16 v19; // r9
  const void *_a1; // rdx
  unsigned int v22; // ebp
  unsigned __int8 v23; // r8
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  const void *v25; // rcx
  const void *v26; // r8
  const void *v27; // rdx
  const void *v28; // rcx
  unsigned __int8 v29; // dl
  const void *v30; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, CancelDriverRequests);
  if ( this->m_Deleted )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v22 = -1073741738;
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741738);
    goto LABEL_25;
  }
  if ( !PurgeComplete )
    goto LABEL_3;
  _a2 = this->m_PurgeComplete.Method;
  if ( _a2 )
  {
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v22 = -1073741808;
    if ( !this->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, v25, (__int64)_a2, -1073741808);
LABEL_25:
    FxNonPagedObject::Unlock(this, irql, v23);
    return v22;
  }
  this->m_PurgeCompleteContext = Context;
  this->m_PurgeComplete.Method = PurgeComplete;
LABEL_3:
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests
    && CancelDriverRequests
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v10, 0xBu) )
  {
    this->m_CancelDispatchedRequests = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( CancelQueueRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v12);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v15 = NextRequest;
      if ( !NextRequest )
        break;
      v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v26 = 0LL;
      v27 = (const void *)((unsigned __int64)NextRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !NextRequest->m_ObjectSize )
        v27 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, v27, v26);
      FxObject::AddRef(
        v15,
        (void *)0x75657551,
        4049,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v15, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v28);
    }
    FxNonPagedObject::Unlock(this, irql, v14);
  }
  if ( CancelDriverRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v12);
      v16 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v18 = v16;
      if ( !v16 )
        break;
      v29 = irql;
      v16->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v29, v17);
      FxObject::AddRef(
        v18,
        (void *)0x75657551,
        4094,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v18);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v30 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v30);
    }
    FxNonPagedObject::Unlock(this, irql, v17);
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  FxNonPagedObject::Lock(this, &irql, v12);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v19);
  return 0LL;
}

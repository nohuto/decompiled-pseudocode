/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0012284
 * Callers:
 *     imp_WdfIoQueuePurge @ 0x1C0011F70 (imp_WdfIoQueuePurge.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001E4F4 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueDrain @ 0x1C008F470 (imp_WdfIoQueueDrain.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C00900E0 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00907AC (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0090D24 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C0012448 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D2E8 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001D978 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001DA04 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C003A700 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *v10; // rdi
  unsigned int v11; // edx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r8
  FxRequest *NextRequest; // r14
  FxRequest *v16; // rax
  unsigned __int8 v17; // r8
  FxRequest *v18; // r14
  unsigned __int16 v19; // r9
  WDFWORKITEM__ *_a2; // rax
  const void *_a1; // rdx
  unsigned int v23; // r14d
  unsigned __int8 v24; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rax
  const void *v26; // rax
  unsigned __int8 v27; // dl
  const void *v28; // rax
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, CancelDriverRequests);
  v10 = 0LL;
  if ( this->m_Deleted )
  {
    if ( this->m_ObjectSize )
      v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v23 = -1073741738;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, v10, -1073741738);
    goto LABEL_26;
  }
  if ( !PurgeComplete )
    goto LABEL_3;
  Method = this->m_PurgeComplete.Method;
  if ( Method )
  {
    if ( this->m_ObjectSize )
      v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v23 = -1073741808;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, v10, (__int64)Method, -1073741808);
LABEL_26:
    FxNonPagedObject::Unlock(this, irql, v24);
    return v23;
  }
  this->m_PurgeCompleteContext = Context;
  this->m_PurgeComplete.Method = PurgeComplete;
LABEL_3:
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests
    && CancelDriverRequests
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v11, 0xBu) )
  {
    this->m_CancelDispatchedRequests = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v12);
  if ( CancelQueueRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v13);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      if ( !NextRequest )
        break;
      _a2 = FxWmiProvider::GetHandle((FxWorkItem *)this);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
      FxObject::AddRef(
        NextRequest,
        (void *)0x75657551,
        4046,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, NextRequest, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v26);
    }
    FxNonPagedObject::Unlock(this, irql, v14);
  }
  if ( CancelDriverRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v13);
      v16 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v18 = v16;
      if ( !v16 )
        break;
      v27 = irql;
      v16->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v27, v17);
      FxObject::AddRef(
        v18,
        (void *)0x75657551,
        4091,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v18);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v28);
    }
    FxNonPagedObject::Unlock(this, irql, v17);
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  FxNonPagedObject::Lock(this, &irql, v13);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v19);
  return 0LL;
}

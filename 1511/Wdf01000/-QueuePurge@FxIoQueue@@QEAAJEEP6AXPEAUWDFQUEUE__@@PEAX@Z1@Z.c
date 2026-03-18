/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000EC1C
 * Callers:
 *     imp_WdfIoQueuePurge @ 0x1C000EA00 (imp_WdfIoQueuePurge.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001F510 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueDrain @ 0x1C0081500 (imp_WdfIoQueueDrain.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0082170 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C008283C (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0082DB4 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C000ED74 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001E40C (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001EA9C (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001EB28 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rdi
  unsigned int v11; // edx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r8
  FxRequest *NextRequest; // r14
  FxRequest *v16; // rax
  unsigned __int8 v17; // r8
  FxRequest *v18; // r14
  unsigned __int16 v19; // r9
  unsigned int v21; // r14d
  unsigned __int8 v22; // r8
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rax
  WDFWORKITEM__ *Handle; // rax
  const void *v25; // rdx
  const void *v26; // rax
  unsigned __int8 v27; // dl
  const void *v28; // rax
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, CancelDriverRequests);
  _a1 = 0LL;
  if ( this->m_Deleted )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v21 = -1073741738;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x44u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, -1073741738);
    goto LABEL_25;
  }
  if ( !PurgeComplete )
    goto LABEL_3;
  _a2 = this->m_PurgeComplete.Method;
  if ( _a2 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v21 = -1073741808;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xDu,
      0x45u,
      (const _GUID *)&FxObject::`vftable'.DebugExtension,
      _a1,
      (__int64)_a2,
      -1073741808);
LABEL_25:
    FxNonPagedObject::Unlock(this, irql, v22);
    return v21;
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
      Handle = FxWmiProvider::GetHandle((FxWorkItem *)this);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x47u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v25, Handle);
      FxObject::AddRef(
        NextRequest,
        (void *)0x75657551,
        4024,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, NextRequest, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x46u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v26);
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
        4069,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v18);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v28);
    }
    FxNonPagedObject::Unlock(this, irql, v17);
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  FxNonPagedObject::Lock(this, &irql, v13);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v19);
  return 0LL;
}

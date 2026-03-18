/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096EEC
 * Callers:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000C874 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueDrain @ 0x1C0093830 (imp_WdfIoQueueDrain.c)
 *     imp_WdfIoQueuePurge @ 0x1C0093CF0 (imp_WdfIoQueuePurge.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0095930 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00966CC (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00972F0 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00086B8 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C000B79C (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000BE58 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C000BEE0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v8; // r13
  const void *_a1; // rax
  unsigned int v11; // esi
  unsigned __int8 v12; // r8
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rcx
  const void *v16; // rax
  unsigned int v17; // edx
  unsigned __int8 v18; // r8
  _LIST_ENTRY *v19; // rcx
  unsigned __int8 v20; // r8
  _IRP *NextRequest; // rax
  unsigned __int8 v22; // r8
  _IRP *v23; // rsi
  const void *v24; // rcx
  const void *v25; // rax
  unsigned int v26; // edx
  FxTagTracker *v27; // rcx
  const void *v28; // rax
  _LIST_ENTRY *v29; // rcx
  _IRP *v30; // rax
  unsigned __int8 v31; // r8
  _IRP *v32; // rsi
  _LIST_ENTRY *v33; // rcx
  unsigned __int8 v34; // r8
  unsigned int v35; // ecx
  FxTagTracker *v36; // rax
  const void *v37; // rax
  _LIST_ENTRY *v38; // rcx
  unsigned __int16 v39; // r9
  unsigned __int8 irql; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int8 v41; // [rsp+90h] [rbp+50h]

  v41 = CancelDriverRequests;
  m_Globals = this->m_Globals;
  v8 = CancelDriverRequests;
  FxNonPagedObject::Lock(this, &irql, CancelDriverRequests);
  if ( this->m_Deleted )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = -1073741738;
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x44u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      -1073741738);
    goto LABEL_6;
  }
  if ( PurgeComplete )
  {
    _a2 = this->m_PurgeComplete.Method;
    if ( _a2 )
    {
      if ( this->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      v11 = -1073741808;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        0x45u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v16,
        (__int64)_a2,
        -1073741808);
LABEL_6:
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v12);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      return v11;
    }
    this->m_PurgeCompleteContext = Context;
    this->m_PurgeComplete.Method = PurgeComplete;
  }
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests && v8 && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v17, 0xBu) )
    this->m_CancelDispatchedRequests = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v19, irql, v18);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( CancelQueueRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v20);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v23 = NextRequest;
      if ( !NextRequest )
        break;
      if ( this->m_ObjectSize )
        v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v24 = 0LL;
      if ( WORD1(NextRequest->MdlAddress) )
        v25 = (const void *)((unsigned __int64)NextRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        4u,
        0xDu,
        0x47u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v25,
        v24);
      v26 = _InterlockedIncrement((volatile signed __int32 *)&v23->MdlAddress + 1);
      if ( ((__int64)v23->AssociatedIrp.MasterIrp & 0x80) != 0 )
        v27 = (FxTagTracker *)v23[-1].Tail.Overlay.ListEntry.Blink;
      else
        v27 = 0LL;
      if ( v27 )
        FxTagTracker::UpdateTagHistory(
          v27,
          (void *)0x75657551,
          4024,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v26);
      FxIoQueue::CancelForQueue(this, (FxRequest *)v23, irql);
    }
    v8 = v41;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      WPP_IFR_SF_q(
        m_Globals,
        5u,
        0xDu,
        0x46u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v28);
    }
    if ( (this->m_ObjectFlags & 0x80) != 0 && (v29 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v29, irql, v22);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( v8 )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v20);
      v30 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v32 = v30;
      if ( !v30 )
        break;
      *((_BYTE *)&v30[1].Size + 5) = 1;
      if ( (this->m_ObjectFlags & 0x80) != 0 && (v33 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)v33, irql, v31);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      v35 = _InterlockedIncrement((volatile signed __int32 *)&v32->MdlAddress + 1);
      if ( ((__int64)v32->AssociatedIrp.MasterIrp & 0x80) != 0 )
        v36 = (FxTagTracker *)v32[-1].Tail.Overlay.ListEntry.Blink;
      else
        v36 = 0LL;
      if ( v36 )
        FxTagTracker::UpdateTagHistory(
          v36,
          (void *)0x75657551,
          4069,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v35);
      FxIoQueue::CancelForDriver(this, (FxRequest *)v32, v34);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v37 = 0LL;
      WPP_IFR_SF_q(
        m_Globals,
        5u,
        0xDu,
        0x48u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v37);
    }
    if ( (this->m_ObjectFlags & 0x80) != 0 && (v38 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v38, irql, v31);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  FxNonPagedObject::Lock(this, &irql, v20);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v39);
  return 0LL;
}

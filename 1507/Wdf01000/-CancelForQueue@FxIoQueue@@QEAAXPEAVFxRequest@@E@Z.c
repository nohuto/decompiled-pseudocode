/*
 * XREFs of ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003100 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000721C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096948 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096EEC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0097BF0 (-_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0007544 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxIoQueue::CancelForQueue(FxIoQueue *this, FxRequest *pRequest, KIRQL PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v7; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  const void *_a2; // rcx
  const void *_a1; // rax
  FxRequest_vtbl *v12; // rax
  unsigned __int8 v13; // r8
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  unsigned __int8 v16; // r8
  char v17; // al
  FxVerifierLock *v18; // rcx
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry; // rcx
  unsigned __int8 v21; // r8
  unsigned __int16 v22; // r9
  _LIST_ENTRY *v23; // rcx
  __int64 v24; // r8
  unsigned __int16 v25; // r9
  FxDeviceBase *m_DeviceBase; // rsi
  _FX_DRIVER_GLOBALS *v27; // rcx
  const void *v28; // rax
  unsigned __int8 v29; // r8
  _LIST_ENTRY *v30; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  KIRQL v33; // [rsp+88h] [rbp+10h] BYREF
  KIRQL v34; // [rsp+90h] [rbp+18h] BYREF

  v34 = PreviousIrql;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxNonPagedObject::Lock(pRequest, &NewIrql, PreviousIrql);
    m_ObjectFlags = pRequest->m_ObjectFlags;
    pRequest->m_VerifierFlags &= ~0x10u;
    if ( m_ObjectFlags < 0 && (m_ForwardProgressQueue = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
      FxVerifierLock::Unlock(m_ForwardProgressQueue, NewIrql, v7);
    else
      KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, NewIrql);
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    if ( pRequest->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      3u,
      0xDu,
      0x4Bu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      _a2);
  }
  v12 = pRequest->__vftable;
  pRequest->m_IrpQueue = 0LL;
  pRequest->m_Canceled = 1;
  v12->Release(pRequest, (void *)1969583441, 4369, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  if ( this->m_IoCanceledOnQueue.Method && pRequest->m_Presented )
  {
    FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateQueue);
    ++this->m_DriverIoCount;
    Blink = this->m_DriverOwned.Blink;
    p_m_OwnerListEntry2 = &pRequest->m_OwnerListEntry2;
    pRequest->m_OwnerListEntry2.Flink = &this->m_DriverOwned;
    pRequest->m_OwnerListEntry2.Blink = Blink;
    if ( Blink->Flink != &this->m_DriverOwned )
      __fastfail(3u);
    Blink->Flink = p_m_OwnerListEntry2;
    this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock(pRequest, &v33, (unsigned __int8)Blink);
      v17 = pRequest->m_ObjectFlags;
      pRequest->m_VerifierFlags |= 1u;
      if ( v17 < 0 && (v18 = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
        FxVerifierLock::Unlock(v18, v33, v16);
      else
        KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, v33);
    }
    v19 = this->m_CanceledOnQueueList.Blink;
    p_m_OwnerListEntry = &pRequest->m_OwnerListEntry;
    pRequest->m_OwnerListEntry.Flink = &this->m_CanceledOnQueueList;
    pRequest->m_OwnerListEntry.Blink = v19;
    if ( v19->Flink != &this->m_CanceledOnQueueList )
      __fastfail(3u);
    v19->Flink = p_m_OwnerListEntry;
    this->m_CanceledOnQueueList.Blink = p_m_OwnerListEntry;
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      4402,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  else
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v23 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v23, PreviousIrql, v13);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
    pRequest->m_Irp.m_Irp->IoStatus.Information = 0LL;
    m_DeviceBase = pRequest->m_DeviceBase;
    v27 = pRequest->m_Globals;
    if ( v27->FxVerboseOn )
    {
      if ( pRequest->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      WPP_IFR_SF_qqxd(
        v27,
        (unsigned __int8)pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        0xBu,
        traceGuid,
        v28,
        pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        -1073741536);
    }
    if ( m_DeviceBase )
      pRequest->m_PriorityBoost = HIBYTE(m_DeviceBase[1].m_Globals);
    else
      pRequest->m_PriorityBoost = 0;
    FxRequest::CompleteInternal(pRequest, (_FX_DRIVER_GLOBALS *)0xC0000120LL, v24, v25);
    pRequest->Release(
      pRequest,
      (void *)1886220099,
      4411,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v34, v29);
  }
  if ( this->m_Dispatching )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v30 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v30, v34, v21);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v34);
  }
  else
  {
    FxIoQueue::DispatchEvents(this, v34, 0LL, v22);
  }
}

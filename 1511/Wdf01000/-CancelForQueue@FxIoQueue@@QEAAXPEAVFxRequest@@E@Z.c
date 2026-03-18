/*
 * XREFs of ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000EA8C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000EC1C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0082940 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C008306C (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C00832D0 (-_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0008504 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0055F88 (-InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0069D34 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxIoQueue::CancelForQueue(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a2; // rcx
  const void *_a1; // rax
  FxRequest_vtbl *v9; // rax
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_m_OwnerListEntry; // rdx
  unsigned __int8 v14; // r8
  unsigned __int16 v15; // r9
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = PreviousIrql;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(pRequest, 16);
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    if ( pRequest->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 3u, 0xDu, 0x4Bu, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, _a2);
  }
  v9 = pRequest->__vftable;
  pRequest->m_Canceled = 1;
  pRequest->m_IrpQueue = 0LL;
  v9->Release(pRequest, (void *)1969583441, 4369, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  if ( this->m_IoCanceledOnQueue.Method && pRequest->m_Presented )
  {
    FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateQueue);
    FxIoQueue::InsertInDriverOwnedList(this, pRequest);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(pRequest, 1, v11);
    Blink = this->m_CanceledOnQueueList.Blink;
    p_m_OwnerListEntry = &pRequest->m_OwnerListEntry;
    pRequest->m_OwnerListEntry.Flink = &this->m_CanceledOnQueueList;
    pRequest->m_OwnerListEntry.Blink = Blink;
    if ( Blink->Flink != &this->m_CanceledOnQueueList )
      __fastfail(3u);
    Blink->Flink = p_m_OwnerListEntry;
    this->m_CanceledOnQueueList.Blink = p_m_OwnerListEntry;
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      4402,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  else
  {
    FxNonPagedObject::Unlock(this, PreviousIrql, v10);
    pRequest->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(pRequest, 0xC0000120, v16, v17);
    pRequest->Release(
      pRequest,
      (void *)1886220099,
      4411,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v19, v18);
  }
  if ( this->m_Dispatching )
    FxNonPagedObject::Unlock(this, v19, v14);
  else
    FxIoQueue::DispatchEvents(this, v19, 0LL, v15);
}

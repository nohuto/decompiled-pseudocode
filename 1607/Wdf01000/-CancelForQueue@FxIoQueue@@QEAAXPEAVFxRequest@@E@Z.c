/*
 * XREFs of ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0005F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000BD10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0011FFC (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0012284 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00908B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0090FDC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0091220 (-_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00077C8 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0063448 (-InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0078594 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxIoQueue::CancelForQueue(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequest_vtbl *v7; // rax
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned __int16 v11; // r9
  const void *_a2; // rcx
  const void *_a1; // rax
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_m_OwnerListEntry; // rdx
  unsigned __int8 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = PreviousIrql;
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
    WPP_IFR_SF_qq(m_Globals, 3u, 0xDu, 0x4Du, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
  }
  v7 = pRequest->__vftable;
  pRequest->m_Canceled = 1;
  pRequest->m_IrpQueue = 0LL;
  v7->Release(pRequest, (void *)1969583441, 4391, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  if ( this->m_IoCanceledOnQueue.Method && pRequest->m_Presented )
  {
    FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateQueue);
    FxIoQueue::InsertInDriverOwnedList(this, pRequest);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(pRequest, 1);
    Blink = this->m_CanceledOnQueueList.Blink;
    p_m_OwnerListEntry = &pRequest->m_OwnerListEntry;
    if ( Blink->Flink != &this->m_CanceledOnQueueList )
      __fastfail(3u);
    p_m_OwnerListEntry->Flink = &this->m_CanceledOnQueueList;
    pRequest->m_OwnerListEntry.Blink = Blink;
    Blink->Flink = p_m_OwnerListEntry;
    this->m_CanceledOnQueueList.Blink = p_m_OwnerListEntry;
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      4424,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  else
  {
    FxNonPagedObject::Unlock(this, PreviousIrql, v8);
    pRequest->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(pRequest, -1073741536);
    pRequest->Release(
      pRequest,
      (void *)1886220099,
      4433,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v16, v9);
  }
  if ( this->m_Dispatching )
    FxNonPagedObject::Unlock(this, v16, v10);
  else
    FxIoQueue::DispatchEvents(this, v16, 0LL, v11);
}

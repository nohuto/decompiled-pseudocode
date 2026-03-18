/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x1C00105C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00077C8 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000BD10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0063304 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00C8720 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C9880 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9BAC (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  __int16 updated; // r15
  FxIoQueue *v5; // rsi
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 v8; // rcx
  FxRequest *v9; // rdi
  FxIoQueue *m_IoQueue; // rbx
  _FX_DRIVER_GLOBALS *v11; // rdx
  _FX_DRIVER_GLOBALS *v12; // r12
  unsigned int RefCount; // edx
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxIoQueue *v15; // rcx
  unsigned __int8 v16; // r8
  FxRequestCompletionState v17; // r13d
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v22; // rax
  unsigned __int8 v23; // r8
  int v24; // ebp
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // r8
  unsigned __int16 v27; // r9
  FxTagTracker *Blink; // rcx
  FxVerifierLock *v30; // rcx
  FxVerifierLock *v31; // rcx
  unsigned __int8 v32; // r8
  unsigned __int8 v33; // r8
  _LIST_ENTRY *v34; // rcx
  unsigned __int8 v35; // dl
  FxVerifierLock *v36; // rcx
  FxVerifierLock *v37; // rcx
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF
  FxIoQueue *queue; // [rsp+80h] [rbp+18h] BYREF
  FxRequest *v40; // [rsp+88h] [rbp+20h] BYREF

  if ( !DestinationQueue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  updated = 0;
  v5 = (FxIoQueue *)(~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DestinationQueue & 1) != 0 )
  {
    Offset = LOWORD(v5->FxNonPagedObject::FxObject::__vftable);
    v5 = (FxIoQueue *)((char *)v5 - Offset);
  }
  if ( v5->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&queue, (void *)DestinationQueue, 0x1003u, Offset);
    v5 = queue;
  }
  m_Globals = v5->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v8) = 0;
  v9 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v8 = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - v8);
  }
  if ( v9->m_Type == 4104 )
  {
    v40 = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&v40, (void *)Request, 0x1008u, v8);
    v5 = queue;
    v9 = v40;
  }
  if ( v9->m_Completed || (m_IoQueue = v9->m_IoQueue) == 0LL )
  {
    if ( m_Globals->FxVerifierOn )
    {
      v24 = Vf_VerifyWdfRequestForwardToIoQueue(m_Globals, v9);
      if ( v24 < 0 )
        return (unsigned int)v24;
      v5 = queue;
      v9 = v40;
    }
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(v5, v9, 0);
  }
  v11 = m_IoQueue->m_Globals;
  if ( !v11->FxVerifierOn || (v24 = FxIoQueue::Vf_VerifyForwardRequest(v9->m_IoQueue, v11, v5, v9), v24 >= 0) )
  {
    v12 = m_IoQueue->m_Globals;
    RefCount = _InterlockedIncrement(&v9->m_Refcnt);
    if ( SLOBYTE(v9->m_ObjectFlags) < 0 )
    {
      Blink = (FxTagTracker *)v9[-1].m_ForwardProgressList.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          Blink,
          (void *)0x74617453,
          1396,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          RefCount);
    }
    v17 = (unsigned int)FxRequest::SetCompletionState(v9, FxRequestCompletionStateNone);
    if ( v12->FxVerifierOn )
      updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(v15, v14, v9);
    if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
      && (v30 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    {
      FxVerifierLock::Lock(v30, &PreviousIrql, v16);
      v18 = PreviousIrql;
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      PreviousIrql = v18;
    }
    p_m_OwnerListEntry2 = &v9->m_OwnerListEntry2;
    Flink = v9->m_OwnerListEntry2.Flink;
    v22 = v9->m_OwnerListEntry2.Blink;
    if ( Flink->Blink != &v9->m_OwnerListEntry2 || v22->Flink != p_m_OwnerListEntry2 )
      __fastfail(3u);
    v22->Flink = Flink;
    Flink->Blink = v22;
    v9->m_OwnerListEntry2.Blink = &v9->m_OwnerListEntry2;
    p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
    if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
      && (v31 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    {
      FxVerifierLock::Unlock(v31, v18, v19);
    }
    else
    {
      KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, v18);
    }
    v24 = FxIoQueue::QueueRequestFromForward(v5, v9, v23);
    if ( v24 < 0 )
    {
      FxRequest::SetCompletionState(v9, v17);
      if ( v12->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(v9, updated);
      v9->Release(v9, (void *)1952543827, 1458, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql, v32);
      v34 = m_IoQueue->m_DriverOwned.Blink;
      if ( v34->Flink != &m_IoQueue->m_DriverOwned )
        __fastfail(3u);
      v35 = PreviousIrql;
      v9->m_OwnerListEntry2.Blink = v34;
      p_m_OwnerListEntry2->Flink = &m_IoQueue->m_DriverOwned;
      v34->Flink = p_m_OwnerListEntry2;
      m_IoQueue->m_DriverOwned.Blink = p_m_OwnerListEntry2;
      FxNonPagedObject::Unlock(m_IoQueue, v35, v33);
    }
    else
    {
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v36 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      {
        FxVerifierLock::Lock(v36, &PreviousIrql, v25);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      --m_IoQueue->m_DriverIoCount;
      if ( m_IoQueue->m_Dispatching )
      {
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v37 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(v37, PreviousIrql, v26);
        }
        else
        {
          KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
        }
      }
      else
      {
        FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL, v27);
      }
    }
  }
  return (unsigned int)v24;
}

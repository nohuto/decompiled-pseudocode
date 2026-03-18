/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0008504 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0055C6C (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00B94B0 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00BA860 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAB8C (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
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
  FxRequest *v9; // rbx
  FxIoQueue *m_IoQueue; // rdi
  _FX_DRIVER_GLOBALS *v11; // rdx
  int v12; // ebp
  _FX_DRIVER_GLOBALS *v13; // r12
  unsigned int RefCount; // edx
  FxTagTracker *Blink; // rcx
  _FX_DRIVER_GLOBALS *v16; // rdx
  FxIoQueue *v17; // rcx
  unsigned __int8 v18; // r8
  FxRequestCompletionState v19; // r13d
  FxVerifierLock *v20; // rcx
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // dl
  _LIST_ENTRY *p_m_OwnerListEntry2; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v25; // rax
  FxVerifierLock *v26; // rcx
  unsigned __int8 v27; // r8
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // r8
  unsigned __int8 v30; // r8
  _LIST_ENTRY *v31; // rcx
  unsigned __int8 v32; // dl
  FxVerifierLock *v33; // rcx
  unsigned __int8 v34; // r8
  unsigned __int16 v35; // r9
  FxVerifierLock *v36; // rcx
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF
  FxIoQueue *queue; // [rsp+80h] [rbp+18h] BYREF
  void *PPObject; // [rsp+88h] [rbp+20h] BYREF

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
    PPObject = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, &PPObject, (void *)Request, 0x1008u, v8);
    v5 = queue;
    v9 = (FxRequest *)PPObject;
  }
  if ( v9->m_Completed || (m_IoQueue = v9->m_IoQueue) == 0LL )
  {
    if ( m_Globals->FxVerifierOn )
    {
      v12 = Vf_VerifyWdfRequestForwardToIoQueue(m_Globals, v9);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v5 = queue;
      v9 = (FxRequest *)PPObject;
    }
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(v5, v9, 0);
  }
  v11 = m_IoQueue->m_Globals;
  if ( !v11->FxVerifierOn || (v12 = FxIoQueue::Vf_VerifyForwardRequest(v9->m_IoQueue, v11, v5, v9), v12 >= 0) )
  {
    v13 = m_IoQueue->m_Globals;
    RefCount = _InterlockedIncrement(&v9->m_Refcnt);
    if ( SLOBYTE(v9->m_ObjectFlags) < 0 )
    {
      Blink = (FxTagTracker *)v9[-1].m_ForwardProgressList.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          Blink,
          (void *)0x74617453,
          1374,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          RefCount);
    }
    v19 = (unsigned int)FxRequest::SetCompletionState(v9, FxRequestCompletionStateNone);
    if ( v13->FxVerifierOn )
      updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(v17, v16, v9);
    if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
      && (v20 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    {
      FxVerifierLock::Lock(v20, &PreviousIrql, v18);
      v22 = PreviousIrql;
    }
    else
    {
      v22 = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      PreviousIrql = v22;
    }
    p_m_OwnerListEntry2 = &v9->m_OwnerListEntry2;
    Flink = v9->m_OwnerListEntry2.Flink;
    v25 = v9->m_OwnerListEntry2.Blink;
    if ( Flink->Blink != &v9->m_OwnerListEntry2 || v25->Flink != p_m_OwnerListEntry2 )
      __fastfail(3u);
    v25->Flink = Flink;
    Flink->Blink = v25;
    v9->m_OwnerListEntry2.Blink = &v9->m_OwnerListEntry2;
    p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
    if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
      && (v26 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    {
      FxVerifierLock::Unlock(v26, v22, v21);
    }
    else
    {
      KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, v22);
    }
    v12 = FxIoQueue::QueueRequestFromForward(v5, v9, v27);
    if ( v12 >= 0 )
    {
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v33 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      {
        FxVerifierLock::Lock(v33, &PreviousIrql, v28);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      --m_IoQueue->m_DriverIoCount;
      if ( m_IoQueue->m_Dispatching )
      {
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v36 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(v36, PreviousIrql, v34);
        }
        else
        {
          KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
        }
      }
      else
      {
        FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL, v35);
      }
    }
    else
    {
      FxRequest::SetCompletionState(v9, v19);
      if ( v13->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(v9, updated);
      v9->Release(v9, (void *)1952543827, 1436, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql, v29);
      v31 = m_IoQueue->m_DriverOwned.Blink;
      p_m_OwnerListEntry2->Flink = &m_IoQueue->m_DriverOwned;
      v9->m_OwnerListEntry2.Blink = v31;
      if ( v31->Flink != &m_IoQueue->m_DriverOwned )
        __fastfail(3u);
      v32 = PreviousIrql;
      v31->Flink = p_m_OwnerListEntry2;
      m_IoQueue->m_DriverOwned.Blink = p_m_OwnerListEntry2;
      FxNonPagedObject::Unlock(m_IoQueue, v32, v30);
    }
  }
  return (unsigned int)v12;
}

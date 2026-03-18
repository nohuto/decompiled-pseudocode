/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0070DE0 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0007544 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000C9E8 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C002052C (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C005C318 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00D19FC (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00D1A58 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  const void *_a1; // rax
  int result; // eax
  FxIoQueue *m_InternalContext; // rdi
  int v10; // ebp
  unsigned __int64 _a2; // rax
  const void *v12; // rsi
  FxRequestContext *m_RequestContext; // rax
  unsigned __int64 v14; // rsi
  const void *v15; // rax
  _FX_DRIVER_GLOBALS *v16; // rdx
  FxPkgIo *v17; // rcx
  unsigned int v18; // ecx
  FxTagTracker *Flink; // rax
  unsigned int v20; // ecx
  _LIST_ENTRY *Blink; // rax
  __int16 origVerifierFlags; // [rsp+80h] [rbp+8h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  m_Globals = this->m_Globals;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    if ( pRequest->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock, _a1);
  }
  if ( m_Globals->FxVerifierOn )
    result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, pRequest, &origVerifierFlags);
  else
    result = 0;
  if ( result >= 0 )
  {
    m_InternalContext = (FxIoQueue *)pRequest->m_InternalContext;
    pRequest->m_InternalContext = 0LL;
    if ( m_InternalContext
      || (m_InternalContext = this->m_DispatchTable[pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction]) != 0LL )
    {
      if ( !this->m_Filter
        || m_InternalContext != this->m_DefaultQueue
        || FxIoQueue::IsIoEventHandlerRegistered(
             m_InternalContext,
             (_WDF_REQUEST_TYPE)pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
      {
        v18 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) >= 0 )
          Flink = 0LL;
        else
          Flink = (FxTagTracker *)m_InternalContext[-1].m_IoPkgListNode.m_ListEntry.Flink;
        if ( Flink )
          FxTagTracker::UpdateTagHistory(Flink, 0LL, 0, 0LL, TagAddRef, v18);
        v20 = _InterlockedIncrement(&pRequest->m_Refcnt);
        if ( SLOBYTE(pRequest->m_ObjectFlags) >= 0 )
          Blink = 0LL;
        else
          Blink = pRequest[-1].m_ForwardProgressList.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            690,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
            TagAddRef,
            v20);
        FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateNone);
        v10 = FxIoQueue::QueueRequestFromForward(m_InternalContext, pRequest);
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v10 >= 0 )
          return v10;
        FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateIoPkg);
        pRequest->Release(
          pRequest,
          (void *)1952543827,
          722,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
$Error_0:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v17, v16, pRequest, origVerifierFlags);
        return v10;
      }
    }
    else if ( !this->m_Filter )
    {
      v10 = -1073741808;
      if ( pRequest->m_ObjectSize )
        _a2 = (unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      if ( *(_WORD *)(Device + 10) )
        v12 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v12 = 0LL;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        0x13u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
        v12,
        _a2,
        -1073741808);
      v23 = 7567731;
LABEL_32:
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      goto $Error_0;
    }
    m_RequestContext = pRequest->m_RequestContext;
    if ( !m_RequestContext || !m_RequestContext->m_RequestType )
    {
      FxRequest::PreProcessSendAndForget(pRequest);
      IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), pRequest->m_Irp.m_Irp);
      FxRequest::PostProcessSendAndForget(pRequest);
      return 0;
    }
    v10 = -1073741808;
    if ( *(_WORD *)(Device + 10) )
      v14 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v14 = 0LL;
    if ( pRequest->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xDu,
      0x14u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      v15,
      v14,
      -1073741808);
    v24 = 7567731;
    goto LABEL_32;
  }
  return result;
}

/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0005F40
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0002700 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00077C8 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C001B6E0 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001E3F0 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0034BDC (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0062EDC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00912B4 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C8B48 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00C96C8 (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C9704 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, unsigned __int64 pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v4; // rbp
  FxRequest *v5; // rdi
  FxIoQueue *m_InternalContext; // rbx
  unsigned int v9; // edx
  unsigned int v10; // edx
  int m_CompletionState; // eax
  unsigned int v12; // r8d
  unsigned int m_QueueState; // eax
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v16; // edx
  _IRP *m_Irp; // r9
  $8B26BD50DADCE63D5F5F71A785E147C5 *v18; // r10
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int inserted; // r14d
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v23; // r15d
  __int64 v24; // rsi
  unsigned __int64 *v25; // r12
  KIRQL v26; // al
  char v27; // cl
  KIRQL v28; // r13
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // r8
  int v33; // r14d
  FxTagTracker *v34; // rcx
  int v35; // esi
  int result; // eax
  FxRequestContext *m_RequestContext; // rax
  unsigned int _a3; // r14d
  __int64 v39; // r12
  __int64 v40; // rcx
  const void *_a2; // rdx
  const void *_a1; // rcx
  char v43; // al
  __int64 (__fastcall *v44)(__int64); // rax
  const void *v45; // rax
  unsigned __int64 v46; // rax
  const void *v47; // r14
  unsigned __int64 v48; // r14
  _FX_DRIVER_GLOBALS *v49; // rdx
  FxPkgIo *v50; // rcx
  FxTagTracker *Flink; // rcx
  FxTagTracker *Blink; // rcx
  const void *v53; // rax
  FxVerifierLock *v54; // rcx
  const char *v55; // rdx
  const void *v56; // rcx
  FxTagTracker *v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r10
  FxRequest_vtbl *v60; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-98h]
  KIRQL v62; // [rsp+50h] [rbp-68h]
  __int16 origVerifierFlags; // [rsp+54h] [rbp-64h] BYREF
  unsigned int v64; // [rsp+58h] [rbp-60h]
  _FX_DRIVER_GLOBALS *v65; // [rsp+60h] [rbp-58h]
  FxIrp Irp; // [rsp+68h] [rbp-50h] BYREF
  __int64 v67; // [rsp+70h] [rbp-48h]
  unsigned __int8 PreviousIrql; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v69; // [rsp+D0h] [rbp+18h]
  bool v70; // [rsp+D8h] [rbp+20h]

  v69 = pRequest;
  m_Globals = this->m_Globals;
  v4 = 0LL;
  v65 = m_Globals;
  v5 = (FxRequest *)pRequest;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    if ( *(_WORD *)(pRequest + 10) )
      v45 = (const void *)(pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v45 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, v45);
  }
  if ( !m_Globals->FxVerifierOn
    || (result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, v5, &origVerifierFlags), result >= 0) )
  {
    m_InternalContext = (FxIoQueue *)v5->m_InternalContext;
    v5->m_InternalContext = 0LL;
    if ( m_InternalContext
      || (m_InternalContext = this->m_DispatchTable[v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction]) != 0LL )
    {
      if ( !this->m_Filter
        || m_InternalContext != this->m_DefaultQueue
        || FxIoQueue::IsIoEventHandlerRegistered(
             m_InternalContext,
             (_WDF_REQUEST_TYPE)v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
      {
        v9 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
        {
          Flink = (FxTagTracker *)m_InternalContext[-1].m_IoPkgListNode.m_ListEntry.Flink;
          if ( Flink )
            FxTagTracker::UpdateTagHistory(Flink, 0LL, 0, 0LL, TagAddRef, v9);
        }
        v10 = _InterlockedIncrement(&v5->m_Refcnt);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)v5[-1].m_ForwardProgressList.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x74617453,
              690,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v10);
        }
        if ( v5->m_Completed )
        {
          if ( v5->m_ObjectSize )
            v53 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v53 = 0LL;
          WPP_IFR_SF_q(v5->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v53);
          FxVerifierDbgBreakPoint(v5->m_Globals);
        }
        else
        {
          m_CompletionState = v5->m_CompletionState;
          v5->m_CompletionState = 0;
          if ( m_CompletionState )
            v5->Release(v5, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
          && (v54 = (FxVerifierLock *)m_InternalContext[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Lock(v54, &PreviousIrql, pRequest);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
        }
        m_QueueState = m_InternalContext->m_QueueState;
        if ( (m_QueueState & 1) != 0 )
        {
          v70 = v5->m_IrpAllocation == 0;
          v14 = v5->m_Globals;
          p_m_Queue = &m_InternalContext->m_Queue;
          if ( !v14->FxVerifierOn
            || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(v5, v14, &m_InternalContext->m_Queue), inserted >= 0) )
          {
            v16 = _InterlockedIncrement(&v5->m_Refcnt);
            if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
            {
              v57 = (FxTagTracker *)v5[-1].m_ForwardProgressList.Blink;
              if ( v57 )
                FxTagTracker::UpdateTagHistory(
                  v57,
                  (void *)0x75657551,
                  1900,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                  TagAddRef,
                  v16);
            }
            m_Irp = v5->m_Irp.m_Irp;
            v18 = &v5->120;
            v5->m_IrpQueue = p_m_Queue;
            Irp.m_Irp = m_Irp;
            if ( v5 == (FxRequest *)-120LL )
            {
              m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
            }
            else
            {
              m_Irp->Tail.Overlay.DriverContext[3] = v18;
              v5->m_CsqContext.Irp = m_Irp;
              v5->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
              v18->m_CsqContext.Type = 1;
            }
            v19 = m_InternalContext->m_Queue.m_Queue.Blink;
            p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
            if ( (FxIrpQueue *)v19->Flink != p_m_Queue )
              __fastfail(3u);
            p_ListEntry->Flink = &p_m_Queue->m_Queue;
            m_Irp->Tail.Overlay.ListEntry.Blink = v19;
            v19->Flink = p_ListEntry;
            m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
            ++m_InternalContext->m_Queue.m_RequestCount;
            m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&m_Irp->CancelRoutine,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
            {
              FxIrpQueue::RemoveIrpFromListEntry(&m_InternalContext->m_Queue, &Irp);
              if ( v59 )
                *(_QWORD *)(v59 + 8) = 0LL;
              *(_QWORD *)(v58 + 144) = 0LL;
              v60 = v5->__vftable;
              v5->m_IrpQueue = 0LL;
              inserted = -1073741536;
              v60->Release(v5, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            }
            else
            {
              inserted = 0;
            }
          }
          v5->m_IoQueue = m_InternalContext;
          if ( inserted < 0 )
          {
            FxObject::AddRef(
              v5,
              (void *)0x75657551,
              2456,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue(m_InternalContext, v5, PreviousIrql);
            FxNonPagedObject::Lock(m_InternalContext, &PreviousIrql);
          }
          else if ( m_InternalContext->m_Queue.m_RequestCount == 1
                 || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          {
            m_InternalContext->m_TransitionFromEmpty = 1;
            m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
            if ( m_InternalContext->m_IsDevicePowerPolicyOwner )
            {
              if ( m_InternalContext->m_PowerManaged && !m_InternalContext->m_PowerReferenced )
              {
                m_DeviceBase = m_InternalContext->m_DeviceBase;
                v23 = 0;
                v64 = 0;
                v24 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
                v25 = (unsigned __int64 *)(v24 + 16);
                v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 16));
                v27 = *(_BYTE *)(v24 + 224);
                v28 = v26;
                v62 = v26;
                if ( (v27 & 0x10) != 0 )
                {
                  v33 = -1073741101;
                }
                else if ( (v27 & 0x20) != 0 )
                {
                  v23 = ++*(_DWORD *)(v24 + 24);
                  v67 = *(_QWORD *)(v24 + 424);
                  v29 = *(unsigned __int8 *)(v24 + 225);
                  v64 = v23;
                  *(_DWORD *)(v24 + 4 * v29 + 232) = 512;
                  *(_BYTE *)(v24 + 225) = (*(_BYTE *)(v24 + 225) + 1) & 7;
                  v30 = 0;
                  v31 = *((_DWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Blink
                        + 6 * *(_DWORD *)(v24 + 228));
                  if ( v31 )
                  {
                    v32 = *((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Flink
                          + 3 * *(_DWORD *)(v24 + 228));
                    while ( *(_DWORD *)(v32 + 8LL * v30) != 512 )
                    {
                      if ( ++v30 >= v31 )
                        goto LABEL_31;
                    }
                    _a3 = *(_DWORD *)(v32 + 8LL * v30 + 4);
                    if ( _a3 != 35 )
                    {
                      v39 = v67;
                      do
                      {
                        v40 = *(_QWORD *)(v39 + 96);
                        _a2 = *(const void **)(v40 + 144);
                        if ( *(_WORD *)(v40 + 10) )
                          _a1 = (const void *)(v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          _a1 = 0LL;
                        WPP_IFR_SF_qqLL(
                          *(_FX_DRIVER_GLOBALS **)(v39 + 16),
                          4u,
                          0x15u,
                          0x11u,
                          WPP_PowerIdleStateMachine_cpp_Traceguids,
                          _a1,
                          _a2,
                          _a3,
                          *(_DWORD *)(v24 + 228));
                        *(_DWORD *)(v24 + 4LL * *(unsigned __int8 *)(v24 + 226) + 264) = _a3;
                        v43 = *(_BYTE *)(v24 + 226) + 1;
                        *(_DWORD *)(v24 + 228) = _a3;
                        *(_BYTE *)(v24 + 226) = v43 & 7;
                        v44 = (__int64 (__fastcall *)(__int64))*((_QWORD *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.OldIrql
                                                               + 3 * (int)(_a3 - 1));
                        if ( !v44 )
                          break;
                        _a3 = v44(v24);
                      }
                      while ( _a3 != 35 );
                      v5 = (FxRequest *)v69;
                      v25 = (unsigned __int64 *)(v24 + 16);
                      v28 = v62;
                    }
                  }
LABEL_31:
                  if ( KeReadStateEvent((PRKEVENT)(v24 + 192)) )
                    v33 = 0;
                  else
                    v33 = 259;
                }
                else
                {
                  v33 = -1073741101;
                }
                KeReleaseSpinLock(v25, v28);
                v34 = *(FxTagTracker **)(v24 + 32);
                if ( v34 && (!v33 || v33 == 259) )
                  FxTagTracker::UpdateTagHistory(v34, 0LL, 0, 0LL, TagAddRef, v23);
                m_Globals = v65;
                if ( v33 >= 0 )
                  m_InternalContext->m_PowerReferenced = 1;
              }
            }
          }
          if ( v70 || !m_InternalContext->m_Dispatching )
            FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
          else
            FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
          v35 = 0;
        }
        else
        {
          v55 = "power stopping (Drain) in progress,";
          if ( (m_QueueState & 0x10000) == 0 )
            v55 = &a5;
          if ( v5->m_ObjectSize )
            v56 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v56 = 0LL;
          if ( m_InternalContext->m_ObjectSize )
            v4 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
          v35 = -1071644156;
          WPP_IFR_SF_qLsqd(
            m_InternalContext->m_Globals,
            3u,
            v12,
            0x2Bu,
            traceGuid,
            v4,
            m_QueueState,
            v55,
            v56,
            -1071644156);
          FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
        }
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v35 >= 0 )
          return v35;
        FxRequest::SetCompletionState(v5, FxRequestCompletionStateIoPkg);
        v5->Release(v5, (void *)1952543827, 722, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
$Error:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v50, v49, v5, origVerifierFlags);
        return v35;
      }
    }
    else if ( !this->m_Filter )
    {
      v35 = -1073741808;
      if ( v5->m_ObjectSize )
        v46 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v46 = 0LL;
      if ( *(_WORD *)(Device + 10) )
        v47 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v47 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v47, v46, -1073741808);
LABEL_71:
      FxVerifierDbgBreakPoint(m_Globals);
      goto $Error;
    }
    m_RequestContext = v5->m_RequestContext;
    if ( !m_RequestContext || !m_RequestContext->m_RequestType )
    {
      FxRequest::PreProcessSendAndForget(v5);
      IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), v5->m_Irp.m_Irp);
      FxRequest::PostProcessSendAndForget(v5);
      return 0;
    }
    v35 = -1073741808;
    if ( *(_WORD *)(Device + 10) )
      v48 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v48 = 0LL;
    if ( v5->m_ObjectSize )
      v4 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v4, v48, -1073741808);
    goto LABEL_71;
  }
  return result;
}

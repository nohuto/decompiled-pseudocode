/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00096E0
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0005C00 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014060 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0016C94 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001D7E4 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0065FB0 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0065FEC (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00953C8 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D40BC (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00D4DEC (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00D4E30 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, unsigned __int64 pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v4; // rbp
  FxRequest *v5; // rdi
  FxIoQueue *m_InternalContext; // rbx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned __int8 m_CompletionState; // al
  unsigned int m_QueueState; // r10d
  _FX_DRIVER_GLOBALS *v13; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v15; // edx
  _IRP *m_Irp; // r9
  $4F60D2EEAF443BADC51864A01D9AEC36 *v17; // r10
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int inserted; // r14d
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v22; // r15d
  __int64 v23; // rsi
  unsigned __int64 *v24; // r12
  KIRQL v25; // al
  char v26; // cl
  KIRQL v27; // r13
  __int64 v28; // rax
  int v29; // eax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  int v32; // r14d
  FxTagTracker *v33; // rcx
  int v34; // esi
  int result; // eax
  FxRequestContext *m_RequestContext; // rax
  unsigned int _a3; // r14d
  __int64 v38; // r12
  __int64 v39; // rcx
  const void *_a2; // rdx
  const void *_a1; // rcx
  char v42; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *v44; // rax
  unsigned __int64 v45; // rax
  const void *v46; // r14
  unsigned __int64 v47; // r14
  _FX_DRIVER_GLOBALS *v48; // rdx
  FxPkgIo *v49; // rcx
  FxTagTracker *Blink; // rcx
  FxTagTracker *v51; // rcx
  const void *v52; // rcx
  FxVerifierLock *v53; // rcx
  const char *v54; // rdx
  const void *v55; // r8
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
      v44 = (const void *)(pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v44 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, v44);
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
          Blink = (FxTagTracker *)m_InternalContext[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(Blink, 0LL, 0, 0LL, TagAddRef, v9);
        }
        v10 = _InterlockedIncrement(&v5->m_Refcnt);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
        {
          v51 = (FxTagTracker *)v5[-1].m_OwnerListEntry2.Blink;
          if ( v51 )
            FxTagTracker::UpdateTagHistory(
              v51,
              (void *)0x74617453,
              690,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v10);
        }
        if ( v5->m_Completed )
        {
          v52 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v5->m_ObjectSize )
            v52 = 0LL;
          WPP_IFR_SF_q(v5->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v52);
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
          && (v53 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v53, &PreviousIrql, pRequest);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
        }
        m_QueueState = m_InternalContext->m_QueueState;
        if ( (m_QueueState & 1) != 0 )
        {
          v70 = v5->m_IrpAllocation == 0;
          v13 = v5->m_Globals;
          p_m_Queue = &m_InternalContext->m_Queue;
          if ( !v13->FxVerifierOn
            || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(v5, v13, &m_InternalContext->m_Queue), inserted >= 0) )
          {
            v15 = _InterlockedIncrement(&v5->m_Refcnt);
            if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
            {
              v57 = (FxTagTracker *)v5[-1].m_OwnerListEntry2.Blink;
              if ( v57 )
                FxTagTracker::UpdateTagHistory(
                  v57,
                  (void *)0x75657551,
                  1900,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                  TagAddRef,
                  v15);
            }
            m_Irp = v5->m_Irp.m_Irp;
            v17 = &v5->120;
            v5->m_IrpQueue = p_m_Queue;
            Irp.m_Irp = m_Irp;
            if ( v5 == (FxRequest *)-120LL )
            {
              m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
            }
            else
            {
              m_Irp->Tail.Overlay.DriverContext[3] = v17;
              v5->m_CsqContext.Irp = m_Irp;
              v5->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
              v17->m_CsqContext.Type = 1;
            }
            v18 = m_InternalContext->m_Queue.m_Queue.Blink;
            p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
            if ( (FxIrpQueue *)v18->Flink != p_m_Queue )
              __fastfail(3u);
            p_ListEntry->Flink = &p_m_Queue->m_Queue;
            m_Irp->Tail.Overlay.ListEntry.Blink = v18;
            v18->Flink = p_ListEntry;
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
              2459,
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
                v22 = 0;
                v64 = 0;
                v23 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
                v24 = (unsigned __int64 *)(v23 + 16);
                v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 16));
                v26 = *(_BYTE *)(v23 + 224);
                v27 = v25;
                v62 = v25;
                if ( (v26 & 0x10) != 0 )
                {
                  v32 = -1073741101;
                }
                else if ( (v26 & 0x20) != 0 )
                {
                  v22 = ++*(_DWORD *)(v23 + 24);
                  v67 = *(_QWORD *)(v23 + 424);
                  v28 = *(unsigned __int8 *)(v23 + 225);
                  v64 = v22;
                  *(_DWORD *)(v23 + 4 * v28 + 232) = 512;
                  *(_BYTE *)(v23 + 225) = (*(_BYTE *)(v23 + 225) + 1) & 7;
                  v29 = 0;
                  TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v23 + 228) - 1].TargetStatesCount;
                  if ( TargetStatesCount )
                  {
                    TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v23 + 228) - 1].TargetStates;
                    while ( TargetStates[v29].PowerIdleEvent != PowerIdleEventIoIncrement )
                    {
                      if ( ++v29 >= TargetStatesCount )
                        goto LABEL_31;
                    }
                    _a3 = TargetStates[v29].PowerIdleState;
                    if ( _a3 != 35 )
                    {
                      v38 = v67;
                      do
                      {
                        v39 = *(_QWORD *)(v38 + 96);
                        _a2 = *(const void **)(v39 + 144);
                        if ( *(_WORD *)(v39 + 10) )
                          _a1 = (const void *)(v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          _a1 = 0LL;
                        WPP_IFR_SF_qqLL(
                          *(_FX_DRIVER_GLOBALS **)(v38 + 16),
                          4u,
                          0x15u,
                          0x11u,
                          WPP_PowerIdleStateMachine_cpp_Traceguids,
                          _a1,
                          _a2,
                          _a3,
                          *(_DWORD *)(v23 + 228));
                        *(_DWORD *)(v23 + 4LL * *(unsigned __int8 *)(v23 + 226) + 264) = _a3;
                        v42 = *(_BYTE *)(v23 + 226) + 1;
                        *(_DWORD *)(v23 + 228) = _a3;
                        *(_BYTE *)(v23 + 226) = v42 & 7;
                        StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
                        if ( !StateFunc )
                          break;
                        _a3 = StateFunc((FxPowerIdleMachine *)v23);
                      }
                      while ( _a3 != 35 );
                      v5 = (FxRequest *)v69;
                      v24 = (unsigned __int64 *)(v23 + 16);
                      v27 = v62;
                    }
                  }
LABEL_31:
                  if ( KeReadStateEvent((PRKEVENT)(v23 + 192)) )
                    v32 = 0;
                  else
                    v32 = 259;
                }
                else
                {
                  v32 = -1073741101;
                }
                KeReleaseSpinLock(v24, v27);
                v33 = *(FxTagTracker **)(v23 + 32);
                if ( v33 && (!v32 || v32 == 259) )
                  FxTagTracker::UpdateTagHistory(v33, 0LL, 0, 0LL, TagAddRef, v22);
                m_Globals = v65;
                if ( v32 >= 0 )
                  m_InternalContext->m_PowerReferenced = 1;
              }
            }
          }
          if ( v70 || !m_InternalContext->m_Dispatching )
            FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
          else
            FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
          v34 = 0;
        }
        else
        {
          v54 = "power stopping (Drain) in progress,";
          v55 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v34 = -1071644156;
          if ( !v5->m_ObjectSize )
            v55 = 0LL;
          if ( (m_QueueState & 0x10000) == 0 )
            v54 = a5;
          v56 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_InternalContext->m_ObjectSize )
            v56 = 0LL;
          WPP_IFR_SF_qLsqd(
            m_InternalContext->m_Globals,
            3u,
            (unsigned int)v55,
            0x2Bu,
            traceGuid,
            v56,
            m_QueueState,
            v54,
            v55,
            -1071644156);
          FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
        }
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v34 >= 0 )
          return v34;
        FxRequest::SetCompletionState(v5, FxRequestCompletionStateIoPkg);
        v5->Release(v5, (void *)1952543827, 722, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
$Error:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v49, v48, v5, origVerifierFlags);
        return v34;
      }
    }
    else if ( !this->m_Filter )
    {
      v34 = -1073741808;
      if ( v5->m_ObjectSize )
        v45 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v45 = 0LL;
      if ( *(_WORD *)(Device + 10) )
        v46 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v46 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v46, v45, -1073741808);
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
    v34 = -1073741808;
    if ( *(_WORD *)(Device + 10) )
      v47 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v47 = 0LL;
    if ( v5->m_ObjectSize )
      v4 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v4, v47, -1073741808);
    goto LABEL_71;
  }
  return result;
}

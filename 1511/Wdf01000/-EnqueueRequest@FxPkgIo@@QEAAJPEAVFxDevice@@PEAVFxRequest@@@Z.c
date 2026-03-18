/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0002CE0 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0008504 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001E254 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0022948 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00289E4 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00557FC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0083350 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00B9B28 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00BA6A8 (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00BA6E4 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, unsigned __int64 pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v4; // rsi
  FxRequest *v5; // rbx
  const void *_a1; // rax
  int result; // eax
  FxIoQueue *m_InternalContext; // rdi
  int v11; // r14d
  unsigned __int64 _a2; // rax
  const void *v13; // rbp
  FxRequestContext *m_RequestContext; // rax
  unsigned __int64 v15; // rbp
  _FX_DRIVER_GLOBALS *v16; // rdx
  FxPkgIo *v17; // rcx
  unsigned int v18; // edx
  FxTagTracker *Flink; // rcx
  unsigned int v20; // edx
  FxTagTracker *Blink; // rcx
  const void *v22; // rax
  int m_CompletionState; // eax
  FxVerifierLock *v24; // rcx
  unsigned __int8 v25; // r8
  unsigned int m_QueueState; // edx
  const char *v27; // rcx
  const void *globals; // rax
  unsigned __int8 v29; // r8
  FxIrpQueue *p_m_Queue; // rbp
  _FX_DRIVER_GLOBALS *v31; // rdx
  bool v32; // r13
  int inserted; // r14d
  unsigned int v34; // edx
  FxTagTracker *v35; // rcx
  _IRP *m_Irp; // r9
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v37; // r10
  _LIST_ENTRY *v38; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  __int64 v40; // r9
  __int64 v41; // r10
  FxRequest_vtbl *v42; // rax
  unsigned __int8 v43; // r8
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v45; // r12d
  __int64 v46; // rbp
  KIRQL v47; // al
  char v48; // cl
  int v49; // r14d
  __int64 v50; // rax
  __int64 v51; // r13
  unsigned int TargetStatesCount; // r8d
  int v53; // ecx
  const FxPowerIdleTargetState *TargetStates; // rdx
  unsigned int _a3; // r14d
  __int64 v56; // rcx
  const void *v57; // rdx
  const void *v58; // rcx
  char v59; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  bool v61; // zf
  FxTagTracker *v62; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  bool v64; // [rsp+50h] [rbp-58h]
  __int16 origVerifierFlags; // [rsp+54h] [rbp-54h] BYREF
  unsigned int v66; // [rsp+58h] [rbp-50h]
  FxIrp Irp; // [rsp+60h] [rbp-48h] BYREF
  _FX_DRIVER_GLOBALS *v68; // [rsp+68h] [rbp-40h]
  unsigned __int8 PreviousIrql; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v70; // [rsp+C0h] [rbp+18h]
  KIRQL v71; // [rsp+C8h] [rbp+20h]

  v70 = pRequest;
  m_Globals = this->m_Globals;
  v4 = 0LL;
  v68 = m_Globals;
  v5 = (FxRequest *)pRequest;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    if ( *(_WORD *)(pRequest + 10) )
      _a1 = (const void *)(pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, _a1);
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
        v18 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
        {
          Flink = (FxTagTracker *)m_InternalContext[-1].m_IoPkgListNode.m_ListEntry.Flink;
          if ( Flink )
            FxTagTracker::UpdateTagHistory(Flink, 0LL, 0, 0LL, TagAddRef, v18);
        }
        v20 = _InterlockedIncrement(&v5->m_Refcnt);
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
              v20);
        }
        if ( v5->m_Completed )
        {
          if ( v5->m_ObjectSize )
            v22 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v22 = 0LL;
          WPP_IFR_SF_q(v5->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v22);
          FxVerifierDbgBreakPoint(v5->m_Globals);
        }
        else
        {
          m_CompletionState = v5->m_CompletionState;
          v5->m_CompletionState = 0;
          if ( m_CompletionState )
            v5->Release(v5, (void *)1952543827, 1805, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
          && (v24 = (FxVerifierLock *)m_InternalContext[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Lock(v24, &PreviousIrql, pRequest);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
        }
        m_QueueState = m_InternalContext->m_QueueState;
        if ( (m_QueueState & 1) != 0 )
        {
          p_m_Queue = &m_InternalContext->m_Queue;
          v31 = v5->m_Globals;
          v32 = v5->m_IrpAllocation == 0;
          v64 = v32;
          if ( !v31->FxVerifierOn
            || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(v5, v31, &m_InternalContext->m_Queue), inserted >= 0) )
          {
            v34 = _InterlockedIncrement(&v5->m_Refcnt);
            if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
            {
              v35 = (FxTagTracker *)v5[-1].m_ForwardProgressList.Blink;
              if ( v35 )
                FxTagTracker::UpdateTagHistory(
                  v35,
                  (void *)0x75657551,
                  1892,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                  TagAddRef,
                  v34);
            }
            m_Irp = v5->m_Irp.m_Irp;
            v37 = &v5->120;
            v5->m_IrpQueue = p_m_Queue;
            Irp.m_Irp = m_Irp;
            if ( v5 == (FxRequest *)-120LL )
            {
              m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
            }
            else
            {
              m_Irp->Tail.Overlay.DriverContext[3] = v37;
              v5->m_CsqContext.Irp = m_Irp;
              v5->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
              v37->m_CsqContext.Type = 1;
            }
            v38 = m_InternalContext->m_Queue.m_Queue.Blink;
            p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
            m_Irp->Tail.Overlay.ListEntry.Flink = &p_m_Queue->m_Queue;
            m_Irp->Tail.Overlay.ListEntry.Blink = v38;
            if ( (FxIrpQueue *)v38->Flink != p_m_Queue )
              __fastfail(3u);
            v38->Flink = p_ListEntry;
            m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
            ++m_InternalContext->m_Queue.m_RequestCount;
            m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&m_Irp->CancelRoutine,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
            {
              FxIrpQueue::RemoveIrpFromListEntry(&m_InternalContext->m_Queue, &Irp);
              if ( v41 )
                *(_QWORD *)(v41 + 8) = 0LL;
              *(_QWORD *)(v40 + 144) = 0LL;
              v42 = v5->__vftable;
              v5->m_IrpQueue = 0LL;
              inserted = -1073741536;
              v42->Release(v5, (void *)1969583441, 1908, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            }
            else
            {
              inserted = 0;
            }
          }
          v5->m_IoQueue = m_InternalContext;
          if ( inserted >= 0 )
          {
            if ( m_InternalContext->m_Queue.m_RequestCount == 1
              || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
            {
              m_InternalContext->m_TransitionFromEmpty = 1;
              m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
              if ( m_InternalContext->m_IsDevicePowerPolicyOwner )
              {
                if ( m_InternalContext->m_PowerManaged && !m_InternalContext->m_PowerReferenced )
                {
                  m_DeviceBase = m_InternalContext->m_DeviceBase;
                  v45 = 0;
                  v66 = 0;
                  v46 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
                  v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v46 + 16));
                  v48 = *(_BYTE *)(v46 + 224);
                  v71 = v47;
                  if ( (v48 & 0x10) != 0 )
                  {
                    v49 = -1073741101;
                  }
                  else if ( (v48 & 0x20) != 0 )
                  {
                    v50 = *(unsigned __int8 *)(v46 + 225);
                    v45 = ++*(_DWORD *)(v46 + 24);
                    v51 = *(_QWORD *)(v46 + 424);
                    *(_DWORD *)(v46 + 4 * v50 + 232) = 512;
                    LOBYTE(v50) = *(_BYTE *)(v46 + 225) + 1;
                    v66 = v45;
                    *(_BYTE *)(v46 + 225) = v50 & 7;
                    TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v46 + 228) - 1].TargetStatesCount;
                    v53 = 0;
                    if ( TargetStatesCount )
                    {
                      TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v46 + 228) - 1].TargetStates;
                      while ( TargetStates[v53].PowerIdleEvent != PowerIdleEventIoIncrement )
                      {
                        if ( ++v53 >= TargetStatesCount )
                          goto LABEL_96;
                      }
                      _a3 = TargetStates[v53].PowerIdleState;
                      if ( _a3 != 35 )
                      {
                        do
                        {
                          v56 = *(_QWORD *)(v51 + 96);
                          v57 = *(const void **)(v56 + 144);
                          if ( *(_WORD *)(v56 + 10) )
                            v58 = (const void *)(v56 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v58 = 0LL;
                          WPP_IFR_SF_qqLL(
                            *(_FX_DRIVER_GLOBALS **)(v51 + 16),
                            4u,
                            0x15u,
                            0x11u,
                            WPP_PowerIdleStateMachine_cpp_Traceguids,
                            v58,
                            v57,
                            _a3,
                            *(_DWORD *)(v46 + 228));
                          *(_DWORD *)(v46 + 4LL * *(unsigned __int8 *)(v46 + 226) + 264) = _a3;
                          v59 = *(_BYTE *)(v46 + 226) + 1;
                          *(_DWORD *)(v46 + 228) = _a3;
                          *(_BYTE *)(v46 + 226) = v59 & 7;
                          StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
                          if ( !StateFunc )
                            break;
                          _a3 = StateFunc((FxPowerIdleMachine *)v46);
                        }
                        while ( _a3 != 35 );
                        v5 = (FxRequest *)v70;
                        m_Globals = v68;
                      }
                    }
LABEL_96:
                    v32 = v64;
                    v49 = 259;
                    v61 = KeReadStateEvent((PRKEVENT)(v46 + 192)) == 0;
                    v47 = v71;
                    if ( !v61 )
                      v49 = 0;
                  }
                  else
                  {
                    v49 = -1073741101;
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v46 + 16), v47);
                  v62 = *(FxTagTracker **)(v46 + 32);
                  if ( v62 && (!v49 || v49 == 259) )
                    FxTagTracker::UpdateTagHistory(v62, 0LL, 0, 0LL, TagAddRef, v45);
                  if ( v49 >= 0 )
                    m_InternalContext->m_PowerReferenced = 1;
                }
              }
            }
          }
          else
          {
            FxObject::AddRef(
              v5,
              (void *)0x75657551,
              2434,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue(m_InternalContext, v5, PreviousIrql);
            FxNonPagedObject::Lock(m_InternalContext, &PreviousIrql, v43);
          }
          if ( v32 || !m_InternalContext->m_Dispatching )
            FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
          else
            FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql, v25);
          v11 = 0;
        }
        else
        {
          v27 = "power stopping (Drain) in progress,";
          if ( (m_QueueState & 0x10000) == 0 )
            v27 = &id;
          if ( v5->m_ObjectSize )
            globals = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            globals = 0LL;
          if ( m_InternalContext->m_ObjectSize )
            v4 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
          v11 = -1071644156;
          WPP_IFR_SF_qLsqd(
            m_InternalContext->m_Globals,
            3u,
            (unsigned int)&id,
            0x29u,
            traceGuid,
            v4,
            m_QueueState,
            v27,
            globals,
            -1071644156);
          FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql, v29);
        }
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v11 >= 0 )
          return v11;
        FxRequest::SetCompletionState(v5, FxRequestCompletionStateIoPkg);
        v5->Release(v5, (void *)1952543827, 722, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
$Error:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v17, v16, v5, origVerifierFlags);
        return v11;
      }
    }
    else if ( !this->m_Filter )
    {
      v11 = -1073741808;
      if ( v5->m_ObjectSize )
        _a2 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      if ( *(_WORD *)(Device + 10) )
        v13 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v13, _a2, -1073741808);
LABEL_29:
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
    v11 = -1073741808;
    if ( *(_WORD *)(Device + 10) )
      v15 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    if ( v5->m_ObjectSize )
      v4 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v4, v15, -1073741808);
    goto LABEL_29;
  }
  return result;
}

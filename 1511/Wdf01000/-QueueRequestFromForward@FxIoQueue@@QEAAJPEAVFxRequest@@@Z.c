/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000B170
 * Callers:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000AFE0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0055C6C (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00289E4 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0083350 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00B9B28 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  FxIoQueue *v4; // rbx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v6; // r8
  unsigned int _a4; // ecx
  const char *_a5; // rdx
  const void *_a3; // rsi
  const void *globals; // rdi
  unsigned __int8 v11; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIrpQueue *p_m_Queue; // rbp
  _IRP *m_Irp; // r9
  int inserted; // r14d
  unsigned int v17; // edx
  _LIST_ENTRY *v18; // rcx
  $62629F1B78C8AA6D0A69F9052F9E18D0 *v19; // r10
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  __int64 v22; // r9
  __int64 v23; // r10
  FxRequest_vtbl *v24; // rax
  unsigned __int8 v25; // r8
  unsigned int v26; // r15d
  __int64 v27; // rdi
  unsigned __int64 *v28; // r12
  KIRQL v29; // al
  char v30; // cl
  KIRQL v31; // r13
  int v32; // ebp
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned int TargetStatesCount; // r8d
  int v36; // ecx
  const FxPowerIdleTargetState *TargetStates; // rdx
  unsigned int PowerIdleState; // ebp
  __int64 v39; // rcx
  const void *v40; // rdx
  const void *v41; // rcx
  char v42; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *v44; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-78h]
  FxIrp Irp; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int8 irql; // [rsp+B0h] [rbp+18h] BYREF
  bool v49; // [rsp+B8h] [rbp+20h]

  v4 = this;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&v4->m_NPLock.m_Lock);
  _a4 = v4->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    m_Globals = pRequest->m_Globals;
    v49 = pRequest->m_IrpAllocation == 0;
    p_m_Queue = &v4->m_Queue;
    if ( !m_Globals->FxVerifierOn
      || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, m_Globals, &v4->m_Queue), inserted >= 0) )
    {
      v17 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        v18 = pRequest[-1].m_ForwardProgressList.Blink;
        if ( v18 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v18,
            (void *)0x75657551,
            1892,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v17);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v19 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_Queue;
      Irp.m_Irp = m_Irp;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v19;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
        v19->m_CsqContext.Type = 1;
      }
      v20 = v4->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      m_Irp->Tail.Overlay.ListEntry.Flink = &p_m_Queue->m_Queue;
      m_Irp->Tail.Overlay.ListEntry.Blink = v20;
      if ( (FxIrpQueue *)v20->Flink != p_m_Queue )
        __fastfail(3u);
      v20->Flink = p_ListEntry;
      v4->m_Queue.m_Queue.Blink = p_ListEntry;
      ++v4->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&v4->m_Queue, &Irp);
        if ( v23 )
          *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v22 + 144) = 0LL;
        v24 = pRequest->__vftable;
        pRequest->m_IrpQueue = 0LL;
        inserted = -1073741536;
        v24->Release(pRequest, (void *)1969583441, 1908, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        inserted = 0;
      }
    }
    pRequest->m_IoQueue = v4;
    if ( inserted >= 0 )
    {
      if ( v4->m_Queue.m_RequestCount == 1 || v4->m_ForceTransitionFromEmptyWhenAddingNewRequest )
      {
        v4->m_TransitionFromEmpty = 1;
        v4->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
        if ( v4->m_IsDevicePowerPolicyOwner )
        {
          if ( v4->m_PowerManaged && !v4->m_PowerReferenced )
          {
            v26 = 0;
            v27 = *(_QWORD *)(*(_QWORD *)&v4->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
            v28 = (unsigned __int64 *)(v27 + 16);
            v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v27 + 16));
            v30 = *(_BYTE *)(v27 + 224);
            v31 = v29;
            if ( (v30 & 0x10) != 0 )
            {
              v32 = -1073741101;
            }
            else if ( (v30 & 0x20) != 0 )
            {
              v33 = *(unsigned __int8 *)(v27 + 225);
              v26 = ++*(_DWORD *)(v27 + 24);
              v34 = *(_QWORD *)(v27 + 424);
              *(_DWORD *)(v27 + 4 * v33 + 232) = 512;
              *(_BYTE *)(v27 + 225) = (*(_BYTE *)(v27 + 225) + 1) & 7;
              TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v27 + 228) - 1].TargetStatesCount;
              v36 = 0;
              if ( TargetStatesCount )
              {
                TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v27 + 228) - 1].TargetStates;
                while ( TargetStates[v36].PowerIdleEvent != PowerIdleEventIoIncrement )
                {
                  if ( ++v36 >= TargetStatesCount )
                    goto LABEL_53;
                }
                PowerIdleState = TargetStates[v36].PowerIdleState;
                if ( PowerIdleState != 35 )
                {
                  do
                  {
                    v39 = *(_QWORD *)(v34 + 96);
                    v40 = *(const void **)(v39 + 144);
                    if ( *(_WORD *)(v39 + 10) )
                      v41 = (const void *)(v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v41 = 0LL;
                    WPP_IFR_SF_qqLL(
                      *(_FX_DRIVER_GLOBALS **)(v34 + 16),
                      4u,
                      0x15u,
                      0x11u,
                      WPP_PowerIdleStateMachine_cpp_Traceguids,
                      v41,
                      v40,
                      PowerIdleState,
                      *(_DWORD *)(v27 + 228));
                    *(_DWORD *)(v27 + 4LL * *(unsigned __int8 *)(v27 + 226) + 264) = PowerIdleState;
                    v42 = *(_BYTE *)(v27 + 226) + 1;
                    *(_DWORD *)(v27 + 228) = PowerIdleState;
                    *(_BYTE *)(v27 + 226) = v42 & 7;
                    StateFunc = FxPowerIdleMachine::m_StateTable[PowerIdleState - 1].StateFunc;
                    if ( !StateFunc )
                      break;
                    PowerIdleState = StateFunc((FxPowerIdleMachine *)v27);
                  }
                  while ( PowerIdleState != 35 );
                  v4 = this;
                  v28 = (unsigned __int64 *)(v27 + 16);
                }
              }
LABEL_53:
              v32 = 259;
              if ( KeReadStateEvent((PRKEVENT)(v27 + 192)) )
                v32 = 0;
            }
            else
            {
              v32 = -1073741101;
            }
            KeReleaseSpinLock(v28, v31);
            v44 = *(FxTagTracker **)(v27 + 32);
            if ( v44 && (!v32 || v32 == 259) )
              FxTagTracker::UpdateTagHistory(v44, 0LL, 0, 0LL, TagAddRef, v26);
            if ( v32 >= 0 )
              v4->m_PowerReferenced = 1;
          }
        }
      }
    }
    else
    {
      FxObject::AddRef(
        pRequest,
        (void *)0x75657551,
        2434,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(v4, pRequest, irql);
      FxNonPagedObject::Lock(v4, &irql, v25);
    }
    if ( v49 || !v4->m_Dispatching )
      FxIoQueue::DispatchEvents(v4, irql, 0LL, (unsigned __int16)m_Irp);
    else
      FxNonPagedObject::Unlock(v4, irql, v6);
    return 0LL;
  }
  else
  {
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = &id;
    _a3 = 0LL;
    if ( pRequest->m_ObjectSize )
      globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    if ( v4->m_ObjectSize )
      _a3 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qLsqd(v4->m_Globals, 3u, (unsigned int)&id, 0x29u, RefType, _a3, _a4, _a5, globals, -1071644156);
    FxNonPagedObject::Unlock(v4, irql, v11);
    return 3223323140LL;
  }
}

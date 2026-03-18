/*
 * XREFs of imp_WdfRequestSend @ 0x1C0003AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00100B0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C001D0BC (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001D140 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C003E068 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0075C18 (WPP_IFR_SF_qDd.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007C4B8 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D3EAC (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4148 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D56DC (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

char __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        FxObject *Request,
        unsigned __int64 Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  char v5; // si
  unsigned __int64 v6; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v8; // r10
  __int64 v9; // rcx
  FxIoTarget *v10; // rdi
  unsigned int v11; // r12d
  unsigned __int8 v12; // r15
  char v13; // bl
  unsigned __int8 v14; // r8
  _IRP *v15; // rdx
  void (__fastcall *v16)(FxIoTarget *, _IRP *); // rax
  unsigned int Flags; // edx
  unsigned int v19; // eax
  __int64 v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  _FX_DRIVER_GLOBALS **v22; // r15
  FxRequest *v23; // r14
  _IRP *m_Irp; // rax
  _LIST_ENTRY *p_m_ChildListHead; // r14
  unsigned __int8 v26; // r8
  FxRequest *v27; // rdi
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v31; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v33; // rdx
  _LIST_ENTRY *Blink; // rcx
  const void *v35; // rax
  const void *v36; // rax
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v38; // rcx
  FxObject *p_Blink; // r15
  KIRQL v40; // al
  int m_ObjectState; // edx
  KIRQL v42; // bl
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // edx
  FxVerifierLock *v47; // rcx
  FxVerifierLock *v48; // rcx
  const void *v49; // rax
  FxVerifierLock *m_TargetDevice; // rcx
  FxVerifierLock *v51; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 v53[15]; // [rsp+41h] [rbp-37h] BYREF
  _WDF_DRIVER_GLOBALS *Action; // [rsp+90h] [rbp+18h] BYREF
  FxObject *v55; // [rsp+98h] [rbp+20h] BYREF
  void *PPObject; // [rsp+A0h] [rbp+28h] BYREF

  PPObject = (void *)Target;
  v55 = Request;
  Action = DriverGlobals;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v5 = 0;
  v6 = ~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( ((unsigned __int8)Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v6;
    v6 -= Offset;
  }
  if ( *(_WORD *)(v6 + 8) == 4104 )
  {
    v55 = (FxObject *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&v55, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v6 = (unsigned __int64)v55;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( Options )
  {
    if ( Options->Size == 16 )
    {
      Flags = Options->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(v8, Flags, 6u, 0xBu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, Flags, 0xFu);
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_7;
        WPP_IFR_SF_qDd(v8, Flags, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 8u, Flags);
      }
    }
    else
    {
      WPP_IFR_SF_qdd(v8, 2u, 6u, 0xAu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 16, Options->Size);
    }
    *(_DWORD *)(*(_QWORD *)&v55[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741811;
    FxVerifierDbgBreakPoint(v55->m_Globals);
    return 0;
  }
LABEL_7:
  if ( !Target )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v9) = 0;
  v10 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Target & 1) != 0 )
  {
    v9 = LOWORD(v10->__vftable);
    v10 = (FxIoTarget *)((char *)v10 - v9);
  }
  if ( v10->m_Type == 4608 )
  {
    PPObject = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, &PPObject, (void *)Target, 0x1200u, v9);
    v10 = (FxIoTarget *)PPObject;
    v6 = (unsigned __int64)v55;
  }
  if ( !Options || (v19 = Options->Flags, (v19 & 0xA) == 0) )
  {
    if ( *(_QWORD *)(v6 + 192) || *(_BYTE *)(v6 + 213) )
    {
      if ( Options )
        v11 = Options->Flags;
      else
        v11 = 0;
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (m_TargetDevice = (FxVerifierLock *)v10[-1].m_TargetDevice) != 0LL )
      {
        FxVerifierLock::Lock(m_TargetDevice, v53, Target);
        v12 = v53[0];
      }
      else
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&v10->m_NPLock.m_Lock);
      }
      v13 = FxIoTarget::SubmitLocked(v10, (FxRequestBase *)v6, Options, v11);
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (v51 = (FxVerifierLock *)v10[-1].m_TargetDevice) != 0LL )
        FxVerifierLock::Unlock(v51, v12, v14);
      else
        KeReleaseSpinLock(&v10->m_NPLock.m_Lock, v12);
      if ( (v13 & 1) != 0 )
      {
        v13 |= 4u;
        v15 = *(_IRP **)&v55[1].m_SpinLock.m_DbgFlagIsInitialized;
        v16 = *(void (__fastcall **)(FxIoTarget *, _IRP *))(*(_QWORD *)PPObject + 104LL);
        if ( v16 == FxIoTarget::Send )
          IofCallDriver(*((PDEVICE_OBJECT *)PPObject + 38), v15);
        else
          v16((FxIoTarget *)PPObject, v15);
      }
      else if ( (v13 & 2) != 0 )
      {
        v13 |= 4u;
      }
    }
    else
    {
      if ( *(_WORD *)(v6 + 10) )
        v49 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v49 = 0LL;
      WPP_IFR_SF_qd(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        2u,
        0xEu,
        0x2Eu,
        WPP_FxRequestApi_cpp_Traceguids,
        v49,
        -1073741808);
      v13 = 0;
      *(_DWORD *)(*(_QWORD *)&v55[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741808;
      FxVerifierDbgBreakPoint(v55->m_Globals);
    }
    goto LABEL_23;
  }
  if ( (v19 & 2) != 0 )
  {
    LODWORD(Action) = 32;
    FxIoTarget::SubmitSync(v10, (FxRequestBase *)v6, Options, (unsigned int *)&Action);
LABEL_33:
    v13 = (char)Action;
LABEL_23:
    if ( (v13 & 4) != 0 )
      return 1;
    return v5;
  }
  if ( (v19 & 8) == 0 )
    goto LABEL_33;
  if ( *(_BYTE *)(v6 + 213) )
  {
    if ( *(_WORD *)(v6 + 10) )
      v35 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v35 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v35);
    v13 = 0;
    *(_DWORD *)(*(_QWORD *)&v55[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741436;
    goto LABEL_23;
  }
  v20 = *(_QWORD *)(v6 + 168);
  if ( v20 && *(_BYTE *)(v20 + 88) )
  {
    if ( *(_WORD *)(v6 + 10) )
      v36 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v36 = 0LL;
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Du, WPP_FxRequestApi_cpp_Traceguids, v36, -1073741808);
    v13 = 0;
    *(_DWORD *)(*(_QWORD *)&v55[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741808;
    FxVerifierDbgBreakPoint(v55->m_Globals);
    goto LABEL_23;
  }
  v21 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  v22 = (_FX_DRIVER_GLOBALS **)(v6 + 16);
  v23 = (FxRequest *)v6;
  if ( v21->FxVerifierOn )
  {
    FxRequest::Vf_VerifyPreProcessSendAndForget((FxRequest *)v6, v21);
    v10 = (FxIoTarget *)PPObject;
    v6 = (unsigned __int64)v55;
  }
  if ( !v23->m_NextStackLocationFormatted )
  {
    m_Irp = v23->m_Irp.m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    v10 = (FxIoTarget *)PPObject;
    v6 = (unsigned __int64)v55;
  }
  if ( !v23->m_Reserved )
  {
    if ( !FxObject::EarlyDispose(v23) && (*v22)->FxVerifierOn )
      FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(v23, *v22);
    p_m_ChildListHead = &v23->m_ChildListHead;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
          {
            v10 = (FxIoTarget *)PPObject;
            v6 = (unsigned __int64)v55;
            goto LABEL_46;
          }
          Flink = p_m_ChildListHead->Flink;
          v38 = p_m_ChildListHead->Flink->Flink;
          if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v38->Blink != Flink )
            __fastfail(3u);
          p_m_ChildListHead->Flink = v38;
          p_Blink = (FxObject *)&Flink[-5].Blink;
          v38->Blink = p_m_ChildListHead;
          Flink->Blink = Flink;
          Flink->Flink = Flink;
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
          m_ObjectState = p_Blink->m_ObjectState;
          v42 = v40;
          p_Blink->m_ParentObject = 0LL;
          v43 = m_ObjectState - 2;
          if ( v43 )
          {
            v44 = v43 - 2;
            if ( !v44 )
              goto LABEL_88;
            v45 = v44 - 4;
            if ( v45 )
              break;
          }
          FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v40, 1u);
        }
        v46 = v45 - 1;
        if ( v46 )
          break;
        FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
LABEL_88:
        KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v42);
      }
      if ( v46 == 1 )
        goto LABEL_88;
      KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v40);
    }
  }
LABEL_46:
  v10->Send(v10, *(_IRP **)(v6 + 152));
  v27 = (FxRequest *)v55;
  *(_QWORD *)&v55[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
  m_CompletionState = v27->m_CompletionState;
  m_IoQueue = v27->m_IoQueue;
  v27->m_CompletionState = 0;
  if ( v27->m_Reserved )
  {
    v27->m_Completed = 1;
    FxRequest::PostProcessCompletionForReserved(v27, m_CompletionState, m_IoQueue);
  }
  else if ( m_CompletionState )
  {
    if ( (m_CompletionState & 0x80u) == 0 )
    {
      m_Globals = m_IoQueue->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, m_Globals, v27);
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v47 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v47, &PreviousIrql, v26);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      p_m_OwnerListEntry2 = &v27->m_OwnerListEntry2;
      v33 = v27->m_OwnerListEntry2.Flink;
      Blink = v27->m_OwnerListEntry2.Blink;
      if ( v33->Blink != &v27->m_OwnerListEntry2 || Blink->Flink != p_m_OwnerListEntry2 )
        __fastfail(3u);
      Blink->Flink = v33;
      v33->Blink = Blink;
      v27->m_OwnerListEntry2.Blink = &v27->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --m_IoQueue->m_DriverIoCount;
      if ( m_IoQueue->m_Dispatching )
      {
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v48 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v48, PreviousIrql, v31);
        }
        else
        {
          KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
        }
      }
      else
      {
        FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
      }
    }
    FxObject::DeleteEarlyDisposedObject(v27);
  }
  else
  {
    FxObject::AddRef(v27, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    v27->DeleteObject(v27);
  }
  return 1;
}

/*
 * XREFs of imp_WdfRequestSend @ 0x1C000EAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000D9D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C001B6E0 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C001C46C (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00700CC (WPP_IFR_SF_qDd.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0078664 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9F8C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
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
  FxRequestContext *v20; // rax
  unsigned __int8 v21; // r8
  FxRequest *v22; // rdi
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v26; // r8
  unsigned __int16 v27; // r9
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v30; // rcx
  const void *v31; // rax
  const void *v32; // rax
  FxVerifierLock *Blink; // rcx
  const void *v34; // rax
  FxVerifierLock *m_TargetFileObject; // rcx
  FxVerifierLock *v36; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 v38[15]; // [rsp+41h] [rbp-37h] BYREF
  _WDF_DRIVER_GLOBALS *Action; // [rsp+90h] [rbp+18h] BYREF
  FxObject *v40; // [rsp+98h] [rbp+20h] BYREF
  void *PPObject; // [rsp+A0h] [rbp+28h] BYREF

  PPObject = (void *)Target;
  v40 = Request;
  Action = DriverGlobals;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
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
    v40 = (FxObject *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&v40, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v6 = (unsigned __int64)v40;
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
    *(_DWORD *)(*(_QWORD *)&v40[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741811;
    FxVerifierDbgBreakPoint(v40->m_Globals);
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
    v6 = (unsigned __int64)v40;
  }
  if ( !Options || (v19 = Options->Flags, (v19 & 0xA) == 0) )
  {
    if ( *(_QWORD *)(v6 + 192) || *(_BYTE *)(v6 + 213) )
    {
      if ( Options )
        v11 = Options->Flags;
      else
        v11 = 0;
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (m_TargetFileObject = (FxVerifierLock *)v10[-1].m_TargetFileObject) != 0LL )
      {
        FxVerifierLock::Lock(m_TargetFileObject, v38, Target);
        v12 = v38[0];
      }
      else
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&v10->m_NPLock.m_Lock);
      }
      v13 = FxIoTarget::SubmitLocked(v10, (FxRequestBase *)v6, Options, v11);
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (v36 = (FxVerifierLock *)v10[-1].m_TargetFileObject) != 0LL )
        FxVerifierLock::Unlock(v36, v12, v14);
      else
        KeReleaseSpinLock(&v10->m_NPLock.m_Lock, v12);
      if ( (v13 & 1) != 0 )
      {
        v13 |= 4u;
        v15 = *(_IRP **)&v40[1].m_SpinLock.m_DbgFlagIsInitialized;
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
        v34 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v34 = 0LL;
      WPP_IFR_SF_qd(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        2u,
        0xEu,
        0x2Eu,
        WPP_FxRequestApi_cpp_Traceguids,
        v34,
        -1073741808);
      v13 = 0;
      *(_DWORD *)(*(_QWORD *)&v40[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741808;
      FxVerifierDbgBreakPoint(v40->m_Globals);
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
      v31 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v31 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v31);
    v13 = 0;
    *(_DWORD *)(*(_QWORD *)&v40[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741436;
    goto LABEL_23;
  }
  v20 = *(FxRequestContext **)(v6 + 168);
  if ( v20 && v20->m_RequestType )
  {
    if ( *(_WORD *)(v6 + 10) )
      v32 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v32 = 0LL;
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Du, WPP_FxRequestApi_cpp_Traceguids, v32, -1073741808);
    v13 = 0;
    *(_DWORD *)(*(_QWORD *)&v40[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741808;
    FxVerifierDbgBreakPoint(v40->m_Globals);
    goto LABEL_23;
  }
  FxRequest::PreProcessSendAndForget((FxRequest *)v6);
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)PPObject + 104LL))(
    PPObject,
    *(_QWORD *)&v40[1].m_SpinLock.m_DbgFlagIsInitialized);
  v22 = (FxRequest *)v40;
  *(_QWORD *)&v40[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
  m_CompletionState = v22->m_CompletionState;
  m_IoQueue = v22->m_IoQueue;
  v22->m_CompletionState = 0;
  if ( v22->m_Reserved )
  {
    v22->m_Completed = 1;
    FxRequest::PostProcessCompletionForReserved(v22, m_CompletionState, m_IoQueue);
  }
  else if ( m_CompletionState )
  {
    if ( (m_CompletionState & 0x80u) == 0 )
    {
      m_Globals = m_IoQueue->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, m_Globals, v22);
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (Blink = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      {
        FxVerifierLock::Lock(Blink, &PreviousIrql, v21);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      p_m_OwnerListEntry2 = &v22->m_OwnerListEntry2;
      Flink = v22->m_OwnerListEntry2.Flink;
      v30 = v22->m_OwnerListEntry2.Blink;
      if ( Flink->Blink != &v22->m_OwnerListEntry2 || v30->Flink != p_m_OwnerListEntry2 )
        __fastfail(3u);
      v30->Flink = Flink;
      Flink->Blink = v30;
      v22->m_OwnerListEntry2.Blink = &v22->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --m_IoQueue->m_DriverIoCount;
      if ( m_IoQueue->m_Dispatching )
        FxNonPagedObject::Unlock(m_IoQueue, PreviousIrql, v26);
      else
        FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL, v27);
    }
    FxObject::DeleteEarlyDisposedObject(v22);
  }
  else
  {
    FxObject::AddRef(v22, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    v22->DeleteObject(v22);
  }
  return 1;
}

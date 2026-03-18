/*
 * XREFs of imp_WdfRequestSend @ 0x1C0004AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005E40 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0022948 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0022B88 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00635D8 (WPP_IFR_SF_qDd.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0069EB8 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

char __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        FxRequest *Request,
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
  KIRQL v12; // r15
  char v13; // bl
  unsigned __int8 v14; // r8
  unsigned int Flags; // edx
  unsigned int v17; // eax
  FxRequestContext *v18; // rax
  FxRequest *v19; // rcx
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // r8
  const void *v22; // rax
  const void *v23; // rax
  const void *v24; // rax
  FxVerifierLock *m_TargetFileObject; // rcx
  FxVerifierLock *v26; // rcx
  _WDF_DRIVER_GLOBALS *Action; // [rsp+80h] [rbp+18h] BYREF
  FxRequest *v28; // [rsp+88h] [rbp+20h] BYREF
  void *PPObject; // [rsp+90h] [rbp+28h] BYREF

  PPObject = (void *)Target;
  v28 = Request;
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
    v28 = (FxRequest *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&v28, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v6 = (unsigned __int64)v28;
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
    v28->m_Irp.m_Irp->IoStatus.Status = -1073741811;
    FxVerifierDbgBreakPoint(v28->m_Globals);
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
    v6 = (unsigned __int64)v28;
  }
  if ( !Options || (v17 = Options->Flags, (v17 & 0xA) == 0) )
  {
    if ( *(_QWORD *)(v6 + 192) || *(_BYTE *)(v6 + 213) )
    {
      if ( Options )
        v11 = Options->Flags;
      else
        v11 = 0;
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (m_TargetFileObject = (FxVerifierLock *)v10[-1].m_TargetFileObject) != 0LL )
      {
        FxVerifierLock::Lock(m_TargetFileObject, (unsigned __int8 *)&Action, Target);
        v12 = (unsigned __int8)Action;
      }
      else
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&v10->m_NPLock.m_Lock);
      }
      v13 = FxIoTarget::SubmitLocked(v10, (FxRequestBase *)v6, Options, v11);
      if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (v26 = (FxVerifierLock *)v10[-1].m_TargetFileObject) != 0LL )
        FxVerifierLock::Unlock(v26, v12, v14);
      else
        KeReleaseSpinLock(&v10->m_NPLock.m_Lock, v12);
      if ( (v13 & 1) != 0 )
      {
        v13 |= 4u;
        (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v28->m_Irp.m_Irp);
      }
      else if ( (v13 & 2) != 0 )
      {
        v13 |= 4u;
      }
    }
    else
    {
      if ( *(_WORD *)(v6 + 10) )
        v24 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v24 = 0LL;
      WPP_IFR_SF_qd(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        2u,
        0xEu,
        0x2Eu,
        WPP_FxRequestApi_cpp_Traceguids,
        v24,
        -1073741808);
      v13 = 0;
      v28->m_Irp.m_Irp->IoStatus.Status = -1073741808;
      FxVerifierDbgBreakPoint(v28->m_Globals);
    }
    goto LABEL_22;
  }
  if ( (v17 & 2) != 0 )
  {
    LODWORD(Action) = 32;
    FxIoTarget::SubmitSync(v10, (FxRequestBase *)v6, Options, (unsigned int *)&Action);
LABEL_33:
    v13 = (char)Action;
LABEL_22:
    if ( (v13 & 4) != 0 )
      return 1;
    return v5;
  }
  if ( (v17 & 8) == 0 )
    goto LABEL_33;
  if ( *(_BYTE *)(v6 + 213) )
  {
    if ( *(_WORD *)(v6 + 10) )
      v22 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v22 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v22);
    v13 = 0;
    v28->m_Irp.m_Irp->IoStatus.Status = -1073741436;
    goto LABEL_22;
  }
  v18 = *(FxRequestContext **)(v6 + 168);
  if ( v18 && v18->m_RequestType )
  {
    if ( *(_WORD *)(v6 + 10) )
      v23 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Du, WPP_FxRequestApi_cpp_Traceguids, v23, -1073741808);
    v13 = 0;
    v28->m_Irp.m_Irp->IoStatus.Status = -1073741808;
    FxVerifierDbgBreakPoint(v28->m_Globals);
    goto LABEL_22;
  }
  FxRequest::PreProcessSendAndForget((FxRequest *)v6);
  (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v28->m_Irp.m_Irp);
  v19 = v28;
  v28->m_Irp.m_Irp = 0LL;
  m_CompletionState = v19->m_CompletionState;
  m_IoQueue = v19->m_IoQueue;
  v19->m_CompletionState = 0;
  if ( v19->m_Reserved )
  {
    v19->m_Completed = 1;
    FxRequest::PostProcessCompletionForReserved(v19, m_CompletionState, m_IoQueue);
  }
  else
  {
    FxRequest::PostProcessCompletion(v19, m_CompletionState, m_IoQueue);
  }
  return 1;
}

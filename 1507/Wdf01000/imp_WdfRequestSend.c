/*
 * XREFs of imp_WdfRequestSend @ 0x1C0012AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00144C0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C002052C (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0020744 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0075140 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
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
  unsigned int Flags; // edx
  __int64 v10; // rcx
  FxIoTarget *v11; // rdi
  unsigned int v12; // r12d
  KIRQL v13; // r15
  char v14; // bl
  unsigned __int8 v15; // r8
  unsigned int v17; // eax
  FxRequestContext *v18; // rax
  FxRequest *v19; // rcx
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // r8
  __int64 v22; // r10
  const void *v23; // rax
  const void *v24; // rax
  __int64 v25; // r10
  const void *v26; // rax
  __int64 v27; // r10
  FxVerifierLock *m_TargetFileObject; // rcx
  FxVerifierLock *v29; // rcx
  _WDF_DRIVER_GLOBALS *Action; // [rsp+80h] [rbp+18h] BYREF
  FxRequest *v31; // [rsp+88h] [rbp+20h] BYREF
  void *PPObject; // [rsp+90h] [rbp+28h] BYREF

  PPObject = (void *)Target;
  v31 = Request;
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
    v31 = (FxRequest *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&v31, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v6 = (unsigned __int64)v31;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( !Options )
    goto LABEL_10;
  if ( Options->Size != 16 )
  {
    WPP_IFR_SF_qdd(v8, 2u, 6u, 0xAu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 16, Options->Size);
LABEL_43:
    LODWORD(Action) = 7567731;
    v31->m_Irp.m_Irp->IoStatus.Status = -1073741811;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v31->m_Globals->Public.DriverName,
      (const char *)&Action,
      v31->m_Globals->Public.DriverName,
      (const char *)&Action);
    if ( *(_BYTE *)(v22 + 318) )
      DbgBreakPoint();
    return 0;
  }
  Flags = Options->Flags;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    WPP_IFR_SF_qDd(v8, Flags, 6u, 0xBu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, Flags, 0xFu);
    goto LABEL_43;
  }
  if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
  {
    WPP_IFR_SF_qDd(v8, Flags, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 8u, Flags);
    goto LABEL_43;
  }
LABEL_10:
  if ( !Target )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v10) = 0;
  v11 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Target & 1) != 0 )
  {
    v10 = LOWORD(v11->__vftable);
    v11 = (FxIoTarget *)((char *)v11 - v10);
  }
  if ( v11->m_Type == 4608 )
  {
    PPObject = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, &PPObject, (void *)Target, 0x1200u, v10);
    v11 = (FxIoTarget *)PPObject;
    v6 = (unsigned __int64)v31;
  }
  if ( !Options || (v17 = Options->Flags, (v17 & 0xA) == 0) )
  {
    if ( *(_QWORD *)(v6 + 192) || *(_BYTE *)(v6 + 213) )
    {
      if ( Options )
        v12 = Options->Flags;
      else
        v12 = 0;
      if ( SLOBYTE(v11->m_ObjectFlags) < 0 && (m_TargetFileObject = (FxVerifierLock *)v11[-1].m_TargetFileObject) != 0LL )
      {
        FxVerifierLock::Lock(m_TargetFileObject, (unsigned __int8 *)&Action, Target);
        v13 = (unsigned __int8)Action;
      }
      else
      {
        v13 = KeAcquireSpinLockRaiseToDpc(&v11->m_NPLock.m_Lock);
      }
      v14 = FxIoTarget::SubmitLocked(v11, (FxRequestBase *)v6, Options, v12);
      if ( SLOBYTE(v11->m_ObjectFlags) < 0 && (v29 = (FxVerifierLock *)v11[-1].m_TargetFileObject) != 0LL )
        FxVerifierLock::Unlock(v29, v13, v15);
      else
        KeReleaseSpinLock(&v11->m_NPLock.m_Lock, v13);
      if ( (v14 & 1) != 0 )
      {
        v14 |= 4u;
        (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v31->m_Irp.m_Irp);
      }
      else if ( (v14 & 2) != 0 )
      {
        v14 |= 4u;
      }
      goto LABEL_25;
    }
    if ( *(_WORD *)(v6 + 10) )
      v26 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v26 = 0LL;
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Eu, WPP_FxRequestApi_cpp_Traceguids, v26, -1073741808);
    v14 = 0;
    LODWORD(Action) = 7567731;
    v31->m_Irp.m_Irp->IoStatus.Status = -1073741808;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v31->m_Globals->Public.DriverName,
      (const char *)&Action,
      v31->m_Globals->Public.DriverName,
      (const char *)&Action);
    if ( !*(_BYTE *)(v27 + 318) )
    {
LABEL_25:
      if ( (v14 & 4) != 0 )
        return 1;
      return v5;
    }
LABEL_57:
    DbgBreakPoint();
    goto LABEL_25;
  }
  if ( (v17 & 2) != 0 )
  {
    LODWORD(Action) = 32;
    FxIoTarget::SubmitSync(v11, (FxRequestBase *)v6, Options, (unsigned int *)&Action);
LABEL_31:
    v14 = (char)Action;
    goto LABEL_25;
  }
  if ( (v17 & 8) == 0 )
    goto LABEL_31;
  if ( *(_BYTE *)(v6 + 213) )
  {
    if ( *(_WORD *)(v6 + 10) )
      v23 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v23);
    v14 = 0;
    v31->m_Irp.m_Irp->IoStatus.Status = -1073741436;
    goto LABEL_25;
  }
  v18 = *(FxRequestContext **)(v6 + 168);
  if ( v18 && v18->m_RequestType )
  {
    if ( *(_WORD *)(v6 + 10) )
      v24 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v24 = 0LL;
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Du, WPP_FxRequestApi_cpp_Traceguids, v24, -1073741808);
    v14 = 0;
    LODWORD(Action) = 7567731;
    v31->m_Irp.m_Irp->IoStatus.Status = -1073741808;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v31->m_Globals->Public.DriverName,
      (const char *)&Action,
      v31->m_Globals->Public.DriverName,
      (const char *)&Action);
    if ( !*(_BYTE *)(v25 + 318) )
      goto LABEL_25;
    goto LABEL_57;
  }
  FxRequest::PreProcessSendAndForget((FxRequest *)v6);
  (*(void (__fastcall **)(void *, _IRP *))(*(_QWORD *)PPObject + 104LL))(PPObject, v31->m_Irp.m_Irp);
  v19 = v31;
  v31->m_Irp.m_Irp = 0LL;
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

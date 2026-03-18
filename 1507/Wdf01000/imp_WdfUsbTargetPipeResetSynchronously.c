/*
 * XREFs of imp_WdfUsbTargetPipeResetSynchronously @ 0x1C008A990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C008391C (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00847BC (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0090218 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C0090420 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0090ACC (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeResetSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  WDFUSBPIPE__ *_a1; // r14
  FxUsbPipe *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  int v10; // edi
  unsigned int Flags; // edx
  __int64 v12; // rdx
  unsigned __int8 v13; // r8
  FxRequestBase *_a2; // rcx
  unsigned __int64 v15; // rax
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h]
  FxSyncRequest v19; // [rsp+50h] [rbp-B0h] BYREF
  FxUsbPipeRequestContext context; // [rsp+180h] [rbp+80h] BYREF

  _a1 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v7 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Pipe = LOWORD(v7->__vftable);
    v7 = (FxUsbPipe *)((char *)v7 - Pipe);
  }
  if ( v7->m_Type == 4611 )
  {
    pUsbPipe = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pUsbPipe, _a1, 0x1203u, Pipe);
    v7 = pUsbPipe;
  }
  m_Globals = v7->m_Globals;
  FxUsbPipeRequestContext::FxUsbPipeRequestContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v19, m_Globals, &context, (unsigned __int64)Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v18 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      v10 = -1073741808;
      goto LABEL_35;
    }
  }
  if ( RequestOptions )
  {
    if ( RequestOptions->Size != 16 )
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v10 = -1073741820;
LABEL_23:
      WPP_IFR_SF_(m_Globals, 2u, 0xEu, 0x20u, WPP_FxUsbPipeAPI_cpp_Traceguids);
      goto LABEL_35;
    }
    Flags = RequestOptions->Flags;
    if ( (Flags & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(
        m_Globals,
        Flags,
        6u,
        0xBu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        Flags,
        0xFu);
LABEL_22:
      v10 = -1073741811;
      goto LABEL_23;
    }
    if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
    {
      WPP_IFR_SF_qDd(
        m_Globals,
        Flags,
        6u,
        0xCu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        8u,
        Flags);
      goto LABEL_22;
    }
  }
  v10 = FxUsbPipe::FormatResetRequest(pUsbPipe, v19.m_TrueRequest);
  if ( v10 >= 0 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = v19.m_TrueRequest;
      if ( v19.m_TrueRequest->m_ObjectSize )
        v15 = (unsigned __int64)v19.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v15 = 0LL;
      if ( v15 )
        _a2 = (FxRequestBase *)v15;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x21u, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, _a2);
    }
    FxIoTarget::CancelSentIo(pUsbPipe, v12, v13);
    v10 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(pUsbPipe, v19.m_TrueRequest, RequestOptions);
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x22u, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, v10);
LABEL_35:
  FxSyncRequest::~FxSyncRequest(&v19);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v10;
}

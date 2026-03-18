/*
 * XREFs of imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C008ACC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C00902C4 (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092724 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory *Urb)
{
  WDFUSBPIPE__ *_a1; // r14
  FxUsbPipe *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned int v11; // ebx
  unsigned int Flags; // edx
  int _a3; // esi
  FxRequestBase *_a2; // rcx
  unsigned __int64 v16; // rax
  FxUsbPipe *pUsbPipe; // [rsp+48h] [rbp-B8h] BYREF
  FxRequestBuffer buf; // [rsp+50h] [rbp-B0h] BYREF
  FxSyncRequest v19; // [rsp+70h] [rbp-90h] BYREF
  FxUsbUrbContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+178h]

  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  _a1 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v8 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Pipe = LOWORD(v8->__vftable);
    v8 = (FxUsbPipe *)((char *)v8 - Pipe);
  }
  if ( v8->m_Type == 4611 )
  {
    pUsbPipe = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pUsbPipe, _a1, 0x1203u, Pipe);
    v8 = pUsbPipe;
  }
  m_Globals = v8->m_Globals;
  FxUsbUrbContext::FxUsbUrbContext(&context);
  FxSyncRequest::FxSyncRequest(&v19, m_Globals, &context, (unsigned __int64)Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x26u, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, Urb);
  if ( !Urb )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      v11 = -1073741808;
      goto LABEL_25;
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
      v11 = -1073741820;
LABEL_25:
      FxSyncRequest::~FxSyncRequest(&v19);
      return v11;
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
LABEL_24:
      v11 = -1073741811;
      goto LABEL_25;
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
      goto LABEL_24;
    }
  }
  buf.DataType = FxRequestBufferBuffer;
  buf.u.Memory.Memory = Urb;
  buf.u.Mdl.Length = 0;
  _a3 = FxFormatUrbRequest(m_Globals, pUsbPipe, v19.m_TrueRequest, &buf, pUsbPipe->m_UrbType, pUsbPipe->m_USBDHandle);
  if ( _a3 >= 0 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = v19.m_TrueRequest;
      if ( v19.m_TrueRequest->m_ObjectSize )
        v16 = (unsigned __int64)v19.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v16 = 0LL;
      if ( v16 )
        _a2 = (FxRequestBase *)v16;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x27u, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, _a2);
    }
    _a3 = FxIoTarget::SubmitSync(pUsbPipe, v19.m_TrueRequest, RequestOptions, 0LL);
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x28u, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, (__int64)Urb, _a3);
  FxSyncRequest::~FxSyncRequest(&v19);
  return (unsigned int)_a3;
}

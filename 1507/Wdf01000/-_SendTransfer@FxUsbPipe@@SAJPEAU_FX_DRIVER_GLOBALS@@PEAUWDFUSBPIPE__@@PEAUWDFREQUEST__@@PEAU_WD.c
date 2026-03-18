/*
 * XREFs of ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00921F4
 * Callers:
 *     imp_WdfUsbTargetPipeReadSynchronously @ 0x1C008A8F0 (imp_WdfUsbTargetPipeReadSynchronously.c)
 *     imp_WdfUsbTargetPipeWriteSynchronously @ 0x1C008B190 (imp_WdfUsbTargetPipeWriteSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C009026C (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C0090478 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0093270 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 */

__int64 __fastcall FxUsbPipe::_SendTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred,
        unsigned int Flags)
{
  WDFUSBPIPE__ *v9; // r15
  FxUsbPipe *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  int v13; // ebx
  unsigned int v14; // edx
  FxRequestBase *_a2; // rcx
  unsigned __int64 v16; // rax
  FxUsbPipe *pUsbPipe; // [rsp+48h] [rbp-B8h] BYREF
  FxRequestBuffer buf; // [rsp+50h] [rbp-B0h] BYREF
  FxSyncRequest v20; // [rsp+70h] [rbp-90h] BYREF
  FxUsbPipeTransferContext context; // [rsp+1A0h] [rbp+A0h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  v9 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  v10 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    Pipe = LOWORD(v10->__vftable);
    v10 = (FxUsbPipe *)((char *)v10 - Pipe);
  }
  if ( v10->m_Type == 4611 )
  {
    pUsbPipe = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pUsbPipe, v9, 0x1203u, Pipe);
    v10 = pUsbPipe;
  }
  m_Globals = v10->m_Globals;
  FxUsbPipeTransferContext::FxUsbPipeTransferContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v20, m_Globals, &context, (unsigned __int64)Request);
  if ( BytesTransferred )
    *BytesTransferred = 0;
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
      v13 = -1073741808;
      goto LABEL_37;
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
      v13 = -1073741820;
      goto LABEL_37;
    }
    v14 = RequestOptions->Flags;
    if ( (v14 & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(m_Globals, v14, 6u, 0xBu, WPP_FxRequestValidateFunctions_hpp_Traceguids, RequestOptions, v14, 0xFu);
LABEL_22:
      v13 = -1073741811;
      goto LABEL_37;
    }
    if ( (v14 & 0xFFFFFFF7) != 0 && (v14 & 8) != 0 )
    {
      WPP_IFR_SF_qDd(m_Globals, v14, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, RequestOptions, 8u, v14);
      goto LABEL_22;
    }
  }
  if ( !MemoryDescriptor
    || (v13 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, m_Globals, MemoryDescriptor, 0), v13 >= 0) )
  {
    v13 = FxUsbPipe::FormatTransferRequest(pUsbPipe, v20.m_TrueRequest, &buf, Flags);
    if ( v13 >= 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = v20.m_TrueRequest;
        if ( v20.m_TrueRequest->m_ObjectSize )
          v16 = (unsigned __int64)v20.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v16 = 0LL;
        if ( v16 )
          _a2 = (FxRequestBase *)v16;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxUsbPipe_cpp_Traceguids, v9, _a2);
      }
      v13 = FxIoTarget::SubmitSync(pUsbPipe, v20.m_TrueRequest, RequestOptions, 0LL);
      if ( BytesTransferred )
        *BytesTransferred = context.m_Urb->TransferBufferLength;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x20u, WPP_FxUsbPipe_cpp_Traceguids, v9, v13);
  }
LABEL_37:
  FxSyncRequest::~FxSyncRequest(&v20);
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(&context);
  return (unsigned int)v13;
}

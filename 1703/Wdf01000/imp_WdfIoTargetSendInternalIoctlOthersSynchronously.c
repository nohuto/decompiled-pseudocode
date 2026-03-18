/*
 * XREFs of imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0086DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_Dd @ 0x1C0017370 (WPP_IFR_SF_Dd.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0028D90 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002AD8C (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0039FC0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0066250 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C006634C (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C00787E8 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0086748 (WPP_IFR_SF_qqDqqq.c)
 */

__int64 __fastcall imp_WdfIoTargetSendInternalIoctlOthersSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        _WDF_MEMORY_DESCRIPTOR *OtherArg1,
        _WDF_MEMORY_DESCRIPTOR *OtherArg2,
        _WDF_MEMORY_DESCRIPTOR *OtherArg4,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFREQUEST__ *_a5; // rbx
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  int v16; // ebx
  FxRequestBase *v17; // r8
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int64 v24; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp-A0h] BYREF
  void *_a1; // [rsp+68h] [rbp-98h]
  _WDF_REQUEST_SEND_OPTIONS *Options; // [rsp+70h] [rbp-90h]
  WDFREQUEST__ *v30; // [rsp+78h] [rbp-88h]
  FxInternalIoctlOthersContext context; // [rsp+80h] [rbp-80h] BYREF
  FxSyncRequest v32; // [rsp+F0h] [rbp-10h] BYREF
  FxRequestBuffer args[3]; // [rsp+220h] [rbp+120h] BYREF

  _a1 = IoTarget;
  v30 = Request;
  Options = RequestOptions;
  `vector constructor iterator'(
    (char *)args,
    0x20uLL,
    3uLL,
    (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  context.m_RequestType = 2;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  _a5 = v30;
  context.__vftable = (FxInternalIoctlOthersContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  context.m_MemoryObjects[0] = 0LL;
  context.m_MemoryObjects[1] = 0LL;
  FxSyncRequest::FxSyncRequest(&v32, m_Globals, &context, v30);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(m_Globals, v14, v15, 0x30u, traceGuid, _a1, _a5, Ioctl, OtherArg1, OtherArg2, OtherArg4);
  v16 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v16 >= 0 )
  {
    v18 = FxValidateRequestOptions(m_Globals, Options, v17);
    v16 = v18;
    if ( v18 >= 0 )
    {
      if ( OtherArg1
        && (v19 = FxRequestBuffer::ValidateMemoryDescriptor(args, m_Globals, OtherArg1, 0), v16 = v19, v19 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x32u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg1, v19);
      }
      else if ( OtherArg2
             && (v20 = FxRequestBuffer::ValidateMemoryDescriptor(&args[1], m_Globals, OtherArg2, 0), v16 = v20, v20 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x33u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg2, v20);
      }
      else if ( OtherArg4
             && (v21 = FxRequestBuffer::ValidateMemoryDescriptor(&args[2], m_Globals, OtherArg4, 0), v16 = v21, v21 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x34u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg4, v21);
      }
      else
      {
        v22 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, v32.m_TrueRequest, Ioctl, args);
        v16 = v22;
        if ( v22 < 0 )
        {
          WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v22);
        }
        else
        {
          if ( m_Globals->FxVerboseOn )
          {
            m_TrueRequest = v32.m_TrueRequest;
            if ( v32.m_TrueRequest->m_ObjectSize )
              v24 = (unsigned __int64)v32.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
            else
              v24 = 0LL;
            if ( v24 )
              m_TrueRequest = (FxRequestBase *)v24;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x35u, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, m_TrueRequest);
          }
          v16 = FxIoTarget::SubmitSync(pTarget, (FxRequest *)v32.m_TrueRequest, Options, 0LL);
          if ( BytesReturned )
            *BytesReturned = v32.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
        }
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x31u, WPP_FxIoTargetAPI_cpp_Traceguids, v18);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v32);
  return (unsigned int)v16;
}

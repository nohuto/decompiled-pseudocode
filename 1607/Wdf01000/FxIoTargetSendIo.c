/*
 * XREFs of FxIoTargetSendIo @ 0x1C0081CD4
 * Callers:
 *     imp_WdfIoTargetSendReadSynchronously @ 0x1C0082C60 (imp_WdfIoTargetSendReadSynchronously.c)
 *     imp_WdfIoTargetSendWriteSynchronously @ 0x1C0082CA0 (imp_WdfIoTargetSendWriteSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C00295F4 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_Dd @ 0x1C0038864 (WPP_IFR_SF_Dd.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0062F6C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0063064 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0064058 (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00640E8 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C00749CC (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     WPP_IFR_SF_qqD @ 0x1C0081F14 (WPP_IFR_SF_qqD.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085774 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 */

__int64 __fastcall FxIoTargetSendIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned __int8 MajorCode,
        _WDF_MEMORY_DESCRIPTOR *IoBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  int v14; // ebx
  FxRequestBase *v15; // r8
  int v16; // eax
  _WDF_MEMORY_DESCRIPTOR *v17; // rsi
  int v18; // eax
  FxRequestBase *TraceObjectHandle; // rax
  FxFileObject *_a3; // [rsp+28h] [rbp-D8h]
  FxRequestBuffer ioBuf; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest v23; // [rsp+60h] [rbp-A0h] BYREF
  FxIoContext context; // [rsp+190h] [rbp+90h] BYREF
  FxIoTarget *pTarget; // [rsp+270h] [rbp+170h] BYREF

  ioBuf.DataType = FxRequestBufferUnspecified;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&v23, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(m_Globals, v12, v13, 0x1Cu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, MajorCode);
  v14 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v14 >= 0 )
  {
    v16 = FxValidateRequestOptions(m_Globals, RequestOptions, v15);
    v14 = v16;
    if ( v16 >= 0 )
    {
      v17 = IoBuffer;
      if ( IoBuffer
        && (v18 = FxRequestBuffer::ValidateMemoryDescriptor(&ioBuf, m_Globals, IoBuffer, 0), v14 = v18, v18 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v17, v18);
      }
      else
      {
        v14 = FxIoTarget::FormatIoRequest(pTarget, v23.m_TrueRequest, MajorCode, &ioBuf, DeviceOffset, _a3);
        if ( v14 < 0 )
        {
          WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x20u, WPP_FxIoTargetAPI_cpp_Traceguids, MajorCode, v14);
        }
        else
        {
          if ( m_Globals->FxVerboseOn )
          {
            TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(v23.m_TrueRequest);
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, TraceObjectHandle);
          }
          v14 = FxIoTarget::SubmitSync(pTarget, v23.m_TrueRequest, RequestOptions, 0LL);
          if ( BytesReturned )
            *BytesReturned = v23.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
        }
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTargetAPI_cpp_Traceguids, v16);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v23);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v14;
}

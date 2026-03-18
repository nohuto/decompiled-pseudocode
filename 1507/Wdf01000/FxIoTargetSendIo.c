/*
 * XREFs of FxIoTargetSendIo @ 0x1C0081388
 * Callers:
 *     imp_WdfIoTargetSendReadSynchronously @ 0x1C0082A10 (imp_WdfIoTargetSendReadSynchronously.c)
 *     imp_WdfIoTargetSendWriteSynchronously @ 0x1C0082A50 (imp_WdfIoTargetSendWriteSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00326D4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqD @ 0x1C008180C (WPP_IFR_SF_qqD.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 */

__int64 __fastcall FxIoTargetSendIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        WDFREQUEST__ *Request,
        unsigned __int8 MajorCode,
        _WDF_MEMORY_DESCRIPTOR *IoBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  WDFIOTARGET__ *v10; // r14
  FxIoTarget *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int8 CurrentIrql; // al
  unsigned int v16; // ebx
  _WDF_REQUEST_SEND_OPTIONS *v17; // rsi
  unsigned int Flags; // edx
  _WDF_MEMORY_DESCRIPTOR *v19; // r15
  int v20; // eax
  int v21; // eax
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int64 v23; // rax
  _MDL *m_MdlToFree; // rcx
  FxFileObject *_a3; // [rsp+28h] [rbp-D8h]
  FxRequestBuffer ioBuf; // [rsp+40h] [rbp-C0h] BYREF
  FxIoContext context; // [rsp+60h] [rbp-A0h] BYREF
  FxSyncRequest v29; // [rsp+110h] [rbp+10h] BYREF
  FxIoTarget *pTarget; // [rsp+288h] [rbp+188h] BYREF

  ioBuf.DataType = FxRequestBufferUnspecified;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  v10 = (WDFIOTARGET__ *)IoTarget;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v11 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    IoTarget = LOWORD(v11->__vftable);
    v11 = (FxIoTarget *)((char *)v11 - IoTarget);
  }
  if ( v11->m_Type == 4608 )
  {
    pTarget = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pTarget, v10, 0x1200u, IoTarget);
    v11 = pTarget;
  }
  m_Globals = v11->m_Globals;
  context.m_RequestType = 1;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  context.__vftable = (FxIoContext_vtbl *)&FxIoContext::`vftable';
  memset(&context.m_BufferToFree, 0, 40);
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  memset(&context.m_BufferToFreeLength, 0, 19);
  context.m_OtherMemory = 0LL;
  FxSyncRequest::FxSyncRequest(&v29, m_Globals, &context, (unsigned __int64)Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(m_Globals, v13, v14, 0x1Cu, WPP_FxIoTargetAPI_cpp_Traceguids, v10, Request, MajorCode);
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
      v16 = -1073741808;
      goto LABEL_38;
    }
  }
  v17 = RequestOptions;
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
      v16 = -1073741820;
LABEL_23:
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTargetAPI_cpp_Traceguids, v16);
      goto LABEL_38;
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
      v16 = -1073741811;
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
  v19 = IoBuffer;
  if ( IoBuffer && (v20 = FxRequestBuffer::ValidateMemoryDescriptor(&ioBuf, m_Globals, IoBuffer, 0), v16 = v20, v20 < 0) )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v19, v20);
  }
  else
  {
    v21 = FxIoTarget::FormatIoRequest(pTarget, v29.m_TrueRequest, MajorCode, &ioBuf, DeviceOffset, _a3);
    v16 = v21;
    if ( v21 < 0 )
    {
      WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x20u, WPP_FxIoTargetAPI_cpp_Traceguids, MajorCode, v21);
    }
    else
    {
      if ( m_Globals->FxVerboseOn )
      {
        m_TrueRequest = v29.m_TrueRequest;
        if ( v29.m_TrueRequest->m_ObjectSize )
          v23 = (unsigned __int64)v29.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v23 = 0LL;
        if ( v23 )
          m_TrueRequest = (FxRequestBase *)v23;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxIoTargetAPI_cpp_Traceguids, v10, m_TrueRequest);
      }
      v16 = FxIoTarget::SubmitSync(pTarget, v29.m_TrueRequest, v17, 0LL);
      if ( BytesReturned )
        *BytesReturned = v29.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
    }
  }
LABEL_38:
  FxSyncRequest::~FxSyncRequest(&v29);
  context.__vftable = (FxIoContext_vtbl *)&FxIoContext::`vftable';
  if ( context.m_BufferToFree )
  {
    FxPoolFree((_QWORD *)context.m_BufferToFree);
    context.m_BufferToFree = 0LL;
  }
  m_MdlToFree = context.m_MdlToFree;
  context.m_BufferToFreeLength = 0LL;
  context.m_CopyBackToBuffer = 0;
  if ( context.m_MdlToFree )
  {
    if ( context.m_UnlockPages )
    {
      MmUnlockPages(context.m_MdlToFree);
      m_MdlToFree = context.m_MdlToFree;
      context.m_UnlockPages = 0;
    }
    if ( BYTE4(context.m_OriginalMdl[6].MappedSystemVa) )
      FxMdlFreeDebug(context.m_DriverGlobals, m_MdlToFree);
    else
      IoFreeMdl(m_MdlToFree);
  }
  return v16;
}

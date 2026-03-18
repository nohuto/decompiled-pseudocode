/*
 * XREFs of imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C002DFEC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0081B40 (WPP_IFR_SF_qqDqqq.c)
 */

__int64 __fastcall imp_WdfIoTargetSendInternalIoctlOthersSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        _WDF_MEMORY_DESCRIPTOR *OtherArg1,
        _WDF_MEMORY_DESCRIPTOR *OtherArg2,
        _WDF_MEMORY_DESCRIPTOR *OtherArg4,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  __int64 v11; // rcx
  FxIoTarget *v12; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFREQUEST__ *_a5; // rbx
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int8 CurrentIrql; // al
  unsigned int v18; // ebx
  unsigned int Flags; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int64 v25; // rax
  const _GUID *Offset; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v30; // [rsp+70h] [rbp-90h]
  WDFREQUEST__ *v31; // [rsp+78h] [rbp-88h]
  FxInternalIoctlOthersContext context; // [rsp+80h] [rbp-80h] BYREF
  FxSyncRequest v33; // [rsp+F0h] [rbp-10h] BYREF
  FxRequestBuffer args[3]; // [rsp+220h] [rbp+120h] BYREF

  v31 = Request;
  v30 = BytesReturned;
  `vector constructor iterator'(
    (char *)args,
    0x20uLL,
    3,
    (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1200uLL);
  LOWORD(v11) = 0;
  v12 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v11 = LOWORD(v12->__vftable);
    v12 = (FxIoTarget *)((char *)v12 - v11);
  }
  if ( v12->m_Type == 4608 )
  {
    pTarget = v12;
  }
  else
  {
    FxObjectHandleGetPtrQI(v12, (void **)&pTarget, (void *)IoTarget, 0x1200u, v11);
    v12 = pTarget;
  }
  m_Globals = v12->m_Globals;
  context.m_RequestType = 2;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  _a5 = v31;
  context.__vftable = (FxInternalIoctlOthersContext_vtbl *)&FxInternalIoctlOthersContext::`vftable';
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  context.m_MemoryObjects[0] = 0LL;
  context.m_MemoryObjects[1] = 0LL;
  FxSyncRequest::FxSyncRequest(&v33, m_Globals, &context, (unsigned __int64)v31);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(
      m_Globals,
      v15,
      v16,
      0x30u,
      Offset,
      (const void *)IoTarget,
      _a5,
      Ioctl,
      OtherArg1,
      OtherArg2,
      OtherArg4);
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
      v18 = -1073741808;
      goto LABEL_45;
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
      v18 = -1073741820;
LABEL_23:
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x31u, WPP_FxIoTargetAPI_cpp_Traceguids, v18);
      goto LABEL_45;
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
      v18 = -1073741811;
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
  if ( OtherArg1 && (v20 = FxRequestBuffer::ValidateMemoryDescriptor(args, m_Globals, OtherArg1, 0), v18 = v20, v20 < 0) )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x32u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg1, v20);
  }
  else if ( OtherArg2
         && (v21 = FxRequestBuffer::ValidateMemoryDescriptor(&args[1], m_Globals, OtherArg2, 0), v18 = v21, v21 < 0) )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x33u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg2, v21);
  }
  else if ( OtherArg4
         && (v22 = FxRequestBuffer::ValidateMemoryDescriptor(&args[2], m_Globals, OtherArg4, 0), v18 = v22, v22 < 0) )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x34u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg4, v22);
  }
  else
  {
    v23 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, v33.m_TrueRequest, Ioctl, args);
    v18 = v23;
    if ( v23 < 0 )
    {
      WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v23);
    }
    else
    {
      if ( m_Globals->FxVerboseOn )
      {
        m_TrueRequest = v33.m_TrueRequest;
        if ( v33.m_TrueRequest->m_ObjectSize )
          v25 = (unsigned __int64)v33.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v25 = 0LL;
        if ( v25 )
          m_TrueRequest = (FxRequestBase *)v25;
        WPP_IFR_SF_qq(
          m_Globals,
          5u,
          0xEu,
          0x35u,
          WPP_FxIoTargetAPI_cpp_Traceguids,
          (const void *)IoTarget,
          m_TrueRequest);
      }
      v18 = FxIoTarget::SubmitSync(pTarget, v33.m_TrueRequest, RequestOptions, 0LL);
      if ( v30 )
        *v30 = v33.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
    }
  }
LABEL_45:
  FxSyncRequest::~FxSyncRequest(&v33);
  return v18;
}

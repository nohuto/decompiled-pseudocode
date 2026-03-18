/*
 * XREFs of imp_WdfRequestGetCompletionParams @ 0x1C006E870
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_DD @ 0x1C00704A4 (WPP_IFR_SF_DD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfRequestGetCompletionParams(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_COMPLETION_PARAMS *Params)
{
  FxRequest *v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequestContext *m_RequestContext; // rax
  __int64 v8; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( Params->Size == 72 )
  {
    m_RequestContext = v4->m_RequestContext;
    if ( m_RequestContext )
    {
      *(_OWORD *)&Params->Size = *(_OWORD *)&m_RequestContext->m_CompletionParams.Size;
      *(_OWORD *)&Params->IoStatus.Information = *(_OWORD *)&m_RequestContext->m_CompletionParams.IoStatus.Information;
      *(_OWORD *)(&Params->Parameters.Usb + 1) = *(_OWORD *)(&m_RequestContext->m_CompletionParams.Parameters.Usb + 1);
      *(_OWORD *)(&Params->Parameters.Usb + 3) = *(_OWORD *)(&m_RequestContext->m_CompletionParams.Parameters.Usb + 3);
      Params->Parameters.Ioctl.Output.Length = m_RequestContext->m_CompletionParams.Parameters.Ioctl.Output.Length;
    }
    else
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_hpp_Traceguids);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( *(_BYTE *)(v8 + 318) )
        DbgBreakPoint();
      memset(Params, 0, sizeof(_WDF_REQUEST_COMPLETION_PARAMS));
      Params->Size = 72;
      Params->Type = WdfRequestTypeNoFormat;
    }
  }
  else
  {
    WPP_IFR_SF_DD(m_Globals, Request, 0x10u, 0x3Bu, WPP_FxRequestApi_cpp_Traceguids, Params->Size, 72);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}

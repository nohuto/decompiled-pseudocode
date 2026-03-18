/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x1C0089FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00907B4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForAbort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        __int64 Request)
{
  WDFUSBPIPE__ *_a1; // rbx
  FxUsbPipe *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxRequest *v7; // rcx
  __int64 Offset; // rdx
  int _a3; // eax
  unsigned int v10; // ebp
  FxUsbPipe *pUsbPipe; // [rsp+78h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+88h] [rbp+20h] BYREF

  _a1 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v5 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Pipe = LOWORD(v5->__vftable);
    v5 = (FxUsbPipe *)((char *)v5 - Pipe);
  }
  if ( v5->m_Type == 4611 )
    pUsbPipe = v5;
  else
    FxObjectHandleGetPtrQI(v5, (void **)&pUsbPipe, _a1, 0x1203u, Pipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Cu, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, (const void *)Request);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v7 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxRequest *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4104 )
  {
    pRequest = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v7 = pRequest;
  }
  _a3 = FxUsbPipe::FormatAbortRequest(pUsbPipe, v7);
  v10 = _a3;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, Request, _a3);
  return v10;
}

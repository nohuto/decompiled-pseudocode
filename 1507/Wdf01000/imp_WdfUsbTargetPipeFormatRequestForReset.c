/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForReset @ 0x1C008A1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqD @ 0x1C008180C (WPP_IFR_SF_qqD.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0090ACC (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForReset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        unsigned __int64 Request)
{
  WDFUSBPIPE__ *_a1; // rdi
  FxUsbPipe *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxRequest *v7; // rcx
  __int64 Offset; // rdx
  unsigned int level; // eax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned int v12; // ebp
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
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x23u, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, (const void *)Request);
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
  level = FxUsbPipe::FormatResetRequest(pUsbPipe, v7);
  v12 = level;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(m_Globals, v10, v11, 0x24u, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1, (const void *)Request, level);
  return v12;
}

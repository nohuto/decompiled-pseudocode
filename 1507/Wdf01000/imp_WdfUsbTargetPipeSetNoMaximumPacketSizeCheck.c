/*
 * XREFs of imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x1C008B050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe)
{
  WDFUSBPIPE__ *_a1; // rbx
  FxUsbPipe *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxUsbPipe *pUsbPipe; // [rsp+48h] [rbp+10h] BYREF

  _a1 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v3 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Pipe = LOWORD(v3->__vftable);
    v3 = (FxUsbPipe *)((char *)v3 - Pipe);
  }
  if ( v3->m_Type == 4611 )
  {
    pUsbPipe = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pUsbPipe, _a1, 0x1203u, Pipe);
    v3 = pUsbPipe;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxUsbPipeAPI_cpp_Traceguids, _a1);
    v3 = pUsbPipe;
  }
  v3->m_CheckPacketSize = 0;
}

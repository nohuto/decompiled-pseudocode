/*
 * XREFs of imp_WdfUsbTargetPipeIsInEndpoint @ 0x1C008A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeIsInEndpoint(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Pipe)
{
  __int64 Offset; // r8
  FxUsbPipe *v3; // rcx
  FxUsbPipe *pUsbPipe; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v3 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Pipe & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxUsbPipe *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4611 )
  {
    pUsbPipe = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pUsbPipe, (void *)Pipe, 0x1203u, Offset);
    v3 = pUsbPipe;
  }
  return v3->m_PipeInformation.EndpointAddress >> 7;
}

/*
 * XREFs of imp_WdfUsbTargetPipeGetInformation @ 0x1C008A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00935CC (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

void __fastcall imp_WdfUsbTargetPipeGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  FxUsbPipe *v4; // rcx
  __int64 Offset; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+48h] [rbp+10h] BYREF

  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v4 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Pipe & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxUsbPipe *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4611 )
  {
    pUsbPipe = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pUsbPipe, (void *)Pipe, 0x1203u, Offset);
    v4 = pUsbPipe;
  }
  if ( !PipeInformation )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  FxUsbPipe::GetInformation(v4, PipeInformation);
}

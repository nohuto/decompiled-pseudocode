/*
 * XREFs of imp_WdfUsbTargetPipeGetType @ 0x1C007A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeGetType(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  unsigned __int64 PipeType; // rax
  FxUsbPipe *pUsbPipe; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  PipeType = pUsbPipe->m_PipeInformation.PipeType;
  if ( PipeType >= 4 )
    return 0LL;
  else
    return (unsigned int)`FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
}

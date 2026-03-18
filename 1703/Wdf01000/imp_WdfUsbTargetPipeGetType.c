/*
 * XREFs of imp_WdfUsbTargetPipeGetType @ 0x1C0089D60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeGetType(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  FxUsbPipe *pUsbPipe; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  if ( pUsbPipe->m_PipeInformation.PipeType >= 4u )
    return 0LL;
  else
    return (unsigned int)`FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[pUsbPipe->m_PipeInformation.PipeType];
}

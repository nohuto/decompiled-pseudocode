/*
 * XREFs of ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1C00565A4
 * Callers:
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0034358 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0079D50 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxUsbPipe::IsType(FxUsbPipe *this, _WDF_USB_PIPE_TYPE Type)
{
  unsigned __int64 PipeType; // rcx
  int v3; // ecx

  PipeType = this->m_PipeInformation.PipeType;
  if ( PipeType >= 4 )
    v3 = 0;
  else
    v3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  return v3 == Type;
}

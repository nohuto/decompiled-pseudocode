/*
 * XREFs of ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C008FF84
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0089D20 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetPipeGetType @ 0x1C008A770 (imp_WdfUsbTargetPipeGetType.c)
 *     ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C008F3A8 (-CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_E.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0093270 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00935CC (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipe::_UsbdPipeTypeToWdf(int UsbdPipeType)
{
  if ( (unsigned __int64)UsbdPipeType >= 4 )
    return 0LL;
  else
    return (unsigned int)`FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[UsbdPipeType];
}

/*
 * XREFs of ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C008D118
 * Callers:
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008D5FC (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbInterface::CopyEndpointFieldsFromDescriptor(
        FxUsbInterface *this,
        _WDF_USB_PIPE_INFORMATION *PipeInfo,
        _USB_ENDPOINT_DESCRIPTOR *EndpointDesc,
        unsigned __int8 SettingIndex)
{
  unsigned __int64 v4; // r8
  _WDF_USB_PIPE_TYPE v5; // eax

  PipeInfo->MaximumPacketSize = EndpointDesc->wMaxPacketSize;
  PipeInfo->EndpointAddress = EndpointDesc->bEndpointAddress;
  PipeInfo->Interval = EndpointDesc->bInterval;
  v4 = EndpointDesc->bmAttributes & 3;
  if ( v4 >= 4 )
    v5 = WdfUsbPipeTypeInvalid;
  else
    v5 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v4];
  PipeInfo->PipeType = v5;
  if ( v5 == WdfUsbPipeTypeControl )
    PipeInfo->MaximumTransferSize = 4096;
  else
    PipeInfo->MaximumTransferSize = (this->m_UsbDevice->m_Traits & 4) != 0 ? 0x200000 : 0x40000;
  PipeInfo->SettingIndex = SettingIndex;
}

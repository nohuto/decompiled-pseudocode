/*
 * XREFs of ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C0081360
 * Callers:
 *     imp_WdfUsbTargetPipeGetInformation @ 0x1C007A170 (imp_WdfUsbTargetPipeGetInformation.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C007E93C (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C007E9A8 (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 */

void __fastcall FxUsbPipe::GetInformation(FxUsbPipe *this, _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  unsigned __int64 PipeType; // rax
  _WDF_USB_PIPE_TYPE v3; // eax

  PipeInformation->MaximumPacketSize = this->m_PipeInformation.MaximumPacketSize;
  PipeInformation->EndpointAddress = this->m_PipeInformation.EndpointAddress;
  PipeInformation->Interval = this->m_PipeInformation.Interval;
  PipeType = this->m_PipeInformation.PipeType;
  if ( PipeType >= 4 )
    v3 = WdfUsbPipeTypeInvalid;
  else
    v3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  PipeInformation->PipeType = v3;
  PipeInformation->MaximumTransferSize = this->m_PipeInformation.MaximumTransferSize;
  PipeInformation->SettingIndex = FxUsbInterface::GetConfiguredSettingIndex(this->m_UsbInterface);
}

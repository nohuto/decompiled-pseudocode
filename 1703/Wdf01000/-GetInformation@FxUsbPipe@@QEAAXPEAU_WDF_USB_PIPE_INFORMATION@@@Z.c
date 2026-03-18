/*
 * XREFs of ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008C6BC
 * Callers:
 *     imp_WdfUsbTargetPipeGetInformation @ 0x1C0089D10 (imp_WdfUsbTargetPipeGetInformation.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00914C0 (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C0091530 (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 */

void __fastcall FxUsbPipe::GetInformation(FxUsbPipe *this, _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  __int64 PipeType; // rax
  _WDF_USB_PIPE_TYPE v4; // edx

  PipeInformation->MaximumPacketSize = this->m_PipeInformation.MaximumPacketSize;
  PipeInformation->EndpointAddress = this->m_PipeInformation.EndpointAddress;
  PipeInformation->Interval = this->m_PipeInformation.Interval;
  PipeType = this->m_PipeInformation.PipeType;
  if ( (unsigned int)PipeType >= 4 )
    v4 = WdfUsbPipeTypeInvalid;
  else
    v4 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  PipeInformation->PipeType = v4;
  PipeInformation->MaximumTransferSize = this->m_PipeInformation.MaximumTransferSize;
  PipeInformation->SettingIndex = FxUsbInterface::GetConfiguredSettingIndex(this->m_UsbInterface);
}

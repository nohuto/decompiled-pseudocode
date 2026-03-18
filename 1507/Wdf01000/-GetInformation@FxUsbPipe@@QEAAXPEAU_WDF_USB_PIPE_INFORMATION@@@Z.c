/*
 * XREFs of ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00935CC
 * Callers:
 *     imp_WdfUsbTargetPipeGetInformation @ 0x1C008A6D0 (imp_WdfUsbTargetPipeGetInformation.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008F7B4 (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C008F824 (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C008FF84 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 */

void __fastcall FxUsbPipe::GetInformation(FxUsbPipe *this, _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8

  PipeInformation->MaximumPacketSize = this->m_PipeInformation.MaximumPacketSize;
  PipeInformation->EndpointAddress = this->m_PipeInformation.EndpointAddress;
  PipeInformation->Interval = this->m_PipeInformation.Interval;
  v3 = FxUsbPipe::_UsbdPipeTypeToWdf(this->m_PipeInformation.PipeType);
  *(_DWORD *)(v4 + 12) = v3;
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(v5 + 400);
  PipeInformation->SettingIndex = FxUsbInterface::GetConfiguredSettingIndex(*(FxUsbInterface **)(v5 + 368));
}

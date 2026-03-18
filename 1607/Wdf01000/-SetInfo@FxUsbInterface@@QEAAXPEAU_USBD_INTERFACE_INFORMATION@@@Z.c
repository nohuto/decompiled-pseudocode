/*
 * XREFs of ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C008DC44
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008D6B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

void __fastcall FxUsbInterface::SetInfo(FxUsbInterface *this, _USBD_INTERFACE_INFORMATION *InterfaceInfo)
{
  unsigned __int8 v2; // si
  unsigned __int8 InterfaceNumber; // dl
  FxUsbPipe *v6; // rdi
  FxUsbInterface *m_UsbInterface; // rcx

  v2 = 0;
  for ( this->m_CurAlternateSetting = InterfaceInfo->AlternateSetting; v2 < this->m_NumberOfConfiguredPipes; ++v2 )
  {
    InterfaceNumber = InterfaceInfo->InterfaceNumber;
    v6 = this->m_ConfiguredPipes[v2];
    m_UsbInterface = v6->m_UsbInterface;
    *(_OWORD *)&v6->m_PipeInformation.MaximumPacketSize = *(_OWORD *)&InterfaceInfo->Pipes[v2].MaximumPacketSize;
    *(_QWORD *)&v6->m_PipeInformation.MaximumTransferSize = *(_QWORD *)&InterfaceInfo->Pipes[v2].MaximumTransferSize;
    v6->m_InterfaceNumber = InterfaceNumber;
    if ( m_UsbInterface )
    {
      m_UsbInterface->Release(
        m_UsbInterface,
        v6,
        1083,
        "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
      v6->m_UsbInterface = 0LL;
    }
    v6->m_UsbInterface = this;
    FxObject::AddRef(this, v6, 1088, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  }
}

/*
 * XREFs of ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C007EA08
 * Callers:
 *     imp_WdfUsbInterfaceGetEndpointInformation @ 0x1C0079470 (imp_WdfUsbInterfaceGetEndpointInformation.c)
 * Callees:
 *     ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C007E518 (-CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_E.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C007EA88 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

void __fastcall FxUsbInterface::GetEndpointInformation(
        FxUsbInterface *this,
        unsigned __int8 SettingIndex,
        unsigned __int8 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  unsigned __int8 v8; // dl
  char v9; // r11
  _USB_ENDPOINT_DESCRIPTOR *i; // r8
  unsigned __int8 bDescriptorType; // al

  SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this, SettingIndex);
  if ( SettingDescriptor )
  {
    for ( i = (_USB_ENDPOINT_DESCRIPTOR *)SettingDescriptor->bLength;
          ;
          SettingDescriptor = (_USB_INTERFACE_DESCRIPTOR *)i->bLength )
    {
      i = (_USB_ENDPOINT_DESCRIPTOR *)((char *)i + (_QWORD)SettingDescriptor);
      if ( i >= (_USB_ENDPOINT_DESCRIPTOR *)((char *)this->m_UsbDevice->m_ConfigDescriptor
                                           + this->m_UsbDevice->m_ConfigDescriptor->wTotalLength) )
        break;
      bDescriptorType = i->bDescriptorType;
      if ( bDescriptorType == 4 )
        break;
      if ( bDescriptorType == 5 )
      {
        if ( EndpointIndex == v9 )
        {
          FxUsbInterface::CopyEndpointFieldsFromDescriptor(this, PipeInfo, i, v8);
          return;
        }
        ++v9;
      }
    }
  }
}

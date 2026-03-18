/*
 * XREFs of ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C008E2C8
 * Callers:
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092CBC (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 * Callees:
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C008E29C (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 */

_USB_COMMON_DESCRIPTOR *__fastcall FxUsbParseConfigurationDescriptor(
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDesc,
        unsigned __int8 InterfaceNumber,
        unsigned __int8 AlternateSetting)
{
  unsigned __int64 wTotalLength; // rdx
  _USB_CONFIGURATION_DESCRIPTOR *v6; // r8
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _USB_COMMON_DESCRIPTOR *v8; // r11

  wTotalLength = ConfigDesc->wTotalLength;
  v6 = ConfigDesc;
  do
  {
    DescriptorType = FxUsbFindDescriptorType((char *)ConfigDesc, wTotalLength, &v6->bLength, 4);
    if ( !DescriptorType )
      break;
    v8 = DescriptorType;
    if ( DescriptorType[1].bLength != InterfaceNumber )
      v8 = 0LL;
    if ( DescriptorType[1].bDescriptorType != AlternateSetting )
      v8 = 0LL;
    v6 = (_USB_CONFIGURATION_DESCRIPTOR *)(&DescriptorType->bLength + DescriptorType->bLength);
  }
  while ( !v8 );
  return v8;
}

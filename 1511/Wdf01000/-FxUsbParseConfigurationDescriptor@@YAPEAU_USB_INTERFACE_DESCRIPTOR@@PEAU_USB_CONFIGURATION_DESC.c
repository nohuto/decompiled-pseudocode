/*
 * XREFs of ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C0080C00
 * Callers:
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DC6C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 * Callees:
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C0080BDC (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 */

_USB_COMMON_DESCRIPTOR *__fastcall FxUsbParseConfigurationDescriptor(
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDesc,
        unsigned __int8 InterfaceNumber,
        unsigned __int8 AlternateSetting)
{
  unsigned __int64 wTotalLength; // rdx
  _USB_CONFIGURATION_DESCRIPTOR *v7; // rax
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _USB_COMMON_DESCRIPTOR *v9; // r11

  wTotalLength = ConfigDesc->wTotalLength;
  v7 = ConfigDesc;
  do
  {
    DescriptorType = FxUsbFindDescriptorType((char *)ConfigDesc, wTotalLength, &v7->bLength, 4);
    if ( !DescriptorType )
      break;
    v9 = DescriptorType;
    if ( InterfaceNumber != -1 && DescriptorType[1].bLength != InterfaceNumber )
      v9 = 0LL;
    if ( AlternateSetting != -1 && DescriptorType[1].bDescriptorType != AlternateSetting )
      v9 = 0LL;
    v7 = (_USB_CONFIGURATION_DESCRIPTOR *)(&DescriptorType->bLength + DescriptorType->bLength);
  }
  while ( !v9 );
  return v9;
}

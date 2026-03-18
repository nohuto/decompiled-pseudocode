/*
 * XREFs of ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C0092B98
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008BB00 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_i @ 0x1C007AE78 (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_dii @ 0x1C0092E28 (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x1C0092F18 (WPP_IFR_SF_idii.c)
 */

__int64 __fastcall FxUsbValidateConfigDescriptorHeaders(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDescriptor,
        __int64 ConfigDescriptorLength)
{
  _USB_CONFIGURATION_DESCRIPTOR *v3; // r9
  _USB_CONFIGURATION_DESCRIPTOR *v4; // r10
  __int64 bLength; // r11
  unsigned __int8 *v6; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-38h]
  int globals; // [rsp+28h] [rbp-30h]

  v3 = (_USB_CONFIGURATION_DESCRIPTOR *)((char *)ConfigDescriptor + ConfigDescriptorLength);
  v4 = ConfigDescriptor;
  if ( ConfigDescriptor >= (_USB_CONFIGURATION_DESCRIPTOR *)((char *)ConfigDescriptor + ConfigDescriptorLength) )
    return 0LL;
  while ( &v4->wTotalLength <= (unsigned __int16 *)v3 )
  {
    bLength = v4->bLength;
    v6 = &v4->bLength + bLength;
    if ( (_USB_CONFIGURATION_DESCRIPTOR *)((char *)v4 + bLength) > v3 )
    {
      WPP_IFR_SF_idii(
        FxDriverGlobals,
        (unsigned __int8)ConfigDescriptor,
        ConfigDescriptorLength,
        (_WORD)v3 - (_WORD)v4,
        _a1,
        (char *)v4 - (char *)ConfigDescriptor,
        v4->bLength,
        (char *)v3 - (char *)v4,
        ConfigDescriptorLength);
      return 3221225485LL;
    }
    if ( !(_BYTE)bLength )
    {
      WPP_IFR_SF_i(
        FxDriverGlobals,
        (unsigned __int8)ConfigDescriptor,
        0xEu,
        0xDu,
        WPP_usbutil_cpp_Traceguids,
        (char *)v4 - (char *)ConfigDescriptor);
      return 3221225485LL;
    }
    v4 = (_USB_CONFIGURATION_DESCRIPTOR *)((char *)v4 + bLength);
    if ( v6 >= (unsigned __int8 *)v3 )
      return 0LL;
  }
  WPP_IFR_SF_dii(
    FxDriverGlobals,
    (unsigned __int8)ConfigDescriptor,
    ConfigDescriptorLength,
    (unsigned __int16)v3,
    _a1,
    globals,
    (char *)v4 - (char *)ConfigDescriptor,
    ConfigDescriptorLength);
  return 3221225485LL;
}

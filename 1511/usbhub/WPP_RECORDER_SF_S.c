/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00456B4
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C0004F10 (UsbhRegDriverEntry.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0006AFC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegQueryGlobalKey @ 0x1C0007310 (UsbhRegQueryGlobalKey.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0007D40 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0007FCC (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0008230 (UsbhGetRegUsbHubFlags.c)
 *     UsbhBusConnectPdo @ 0x1C0008C4C (UsbhBusConnectPdo.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0009514 (UsbhSetPdoRegistryParameter.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C000BAB0 (UsbhPdoPnp_QueryDeviceText.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C000BD00 (Usbh_USB_OS_VENDOR_CODE.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C00268C0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C00274A0 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C0028C70 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004BE10 (UsbhQueryGlobalHubValue.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C004C2C0 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C004C370 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C004C420 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C004C4D0 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C004C590 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C004C640 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C004C6F0 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C004C7B0 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C004C860 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C004C910 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C004C9C0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C004CAA0 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C004CB80 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C004CC30 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C004CCE0 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C004CD90 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C004CE40 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C004CEF0 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C004CFA0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005677C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0056820 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C00569D0 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x1C0057130 (UsbhQueryUxdDevice.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0057C14 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rsi
  __int64 v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  int v15; // [rsp+20h] [rbp-48h]

  v6 = L"<NULL>";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      if ( *a6 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( a6[v12] );
        v11 = 2 * v12 + 2;
      }
      else
      {
        v11 = 14LL;
      }
    }
    else
    {
      v11 = 10LL;
    }
    if ( a6 )
    {
      v13 = L"<NULL>";
      if ( *a6 )
        v13 = a6;
    }
    else
    {
      v13 = L"NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v13,
      v11,
      0LL);
  }
  if ( a6 && *a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( a6 )
  {
    if ( *a6 )
      v6 = a6;
  }
  else
  {
    v6 = L"NULL";
  }
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, a2, 1LL, a5, v15, v6);
}

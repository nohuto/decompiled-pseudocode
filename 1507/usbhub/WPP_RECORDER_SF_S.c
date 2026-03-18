/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0045584
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C0004F60 (UsbhRegDriverEntry.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C000508C (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C00059C0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0005CB4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegQueryGlobalKey @ 0x1C00064D0 (UsbhRegQueryGlobalKey.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C00067B0 (UsbhGetRegUsbHubFlags.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C000AB2C (UsbhSetPdoRegistryParameter.c)
 *     UsbhBusConnectPdo @ 0x1C001E444 (UsbhBusConnectPdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0025C50 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027610 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C0028300 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C00284A0 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C0029CB0 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004BEB0 (UsbhQueryGlobalHubValue.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C004C360 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C004C410 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C004C4C0 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C004C570 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C004C630 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C004C6E0 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C004C790 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C004C850 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C004C900 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C004C9B0 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C004CA60 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C004CB40 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C004CC20 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C004CCD0 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C004CD80 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C004CE30 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C004CEE0 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C004CF90 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C004D040 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C0056604 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C00566A8 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0056858 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x1C0056FC0 (UsbhQueryUxdDevice.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0057AA4 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
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

/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C001FAE8
 * Callers:
 *     UsbhInitialize @ 0x1C0019A10 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003CC1C (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001FD70 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0020110 (UsbhSyncSendInternalIoctl.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0020650 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C0020744 (UsbhGetMaxPowerPerPort.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0020C8C (UsbhGetHubConfigurationDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 HubConfigurationDescriptor; // rbp

  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  HubConfigurationDescriptor = (int)UsbhGetHubConfigurationDescriptor(a1);
  if ( (HubConfigurationDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 8, 1667655729, HubConfigurationDescriptor, 0LL);
    return (unsigned int)HubConfigurationDescriptor;
  }
  else
  {
    Log(a1, 8, 1667655730, -1073741670LL, 0LL);
    return 3221225626LL;
  }
}

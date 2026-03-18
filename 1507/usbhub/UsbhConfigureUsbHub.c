/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C001F340
 * Callers:
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003C5CC (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001F5C0 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001F960 (UsbhSyncSendInternalIoctl.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001FEA0 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C001FF94 (UsbhGetMaxPowerPerPort.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C00204E0 (UsbhGetHubConfigurationDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
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
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
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

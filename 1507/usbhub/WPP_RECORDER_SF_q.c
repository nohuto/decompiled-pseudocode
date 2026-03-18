/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C003D1E8
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C00012D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0007768 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C000AB2C (UsbhSetPdoRegistryParameter.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000ABE8 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0025C50 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027610 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003ED14 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhWaitForBootDevice @ 0x1C0044590 (UsbhWaitForBootDevice.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004466C (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x1C0046C70 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00495E4 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B760 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004B8F4 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004BEB0 (UsbhQueryGlobalHubValue.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004D7D0 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 *     UsbhQueryUxdDevice @ 0x1C0056FC0 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}

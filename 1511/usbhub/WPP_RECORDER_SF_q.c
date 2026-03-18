/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C003D418
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C00012D0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0009514 (UsbhSetPdoRegistryParameter.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C000BAB0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000CAA4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0025670 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C00268C0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003EF44 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhWaitForBootDevice @ 0x1C00446C0 (UsbhWaitForBootDevice.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004479C (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x1C0046CF0 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B710 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004B8A4 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004BE10 (UsbhQueryGlobalHubValue.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004D730 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 *     UsbhQueryUxdDevice @ 0x1C0057130 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
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

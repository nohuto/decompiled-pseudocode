/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C003D674
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004660 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000AA48 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000D740 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C000F100 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000FA60 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubProcessChangeWorker @ 0x1C00100F0 (UsbhHubProcessChangeWorker.c)
 *     UsbhBusPause_Action @ 0x1C00105A0 (UsbhBusPause_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0011850 (UsbhHubRunPortChangeQueue.c)
 *     Usbh_PCE_wChange_Action @ 0x1C00120F0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C00125D0 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0012B60 (Usbh_PCE_wDone_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x1C0021174 (UsbhBusConnectPdo.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0021490 (UsbhSS_PdoWakeWorker.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0023330 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhPCE_psSUSPEND @ 0x1C0026F00 (UsbhPCE_psSUSPEND.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003C3B4 (UsbhGetDeviceBusInfo.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040DC8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Check @ 0x1C0041004 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C00410BC (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0041188 (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00412C8 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_SD_Resume @ 0x1C00416F4 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_wChangeERROR @ 0x1C004189C (UsbhPCE_wChangeERROR.c)
 *     Usbh_PCE_Check_Action @ 0x1C0041F50 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0042064 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0042268 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C00427CC (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0042914 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042BC4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhExceptionTrace @ 0x1C004F688 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}

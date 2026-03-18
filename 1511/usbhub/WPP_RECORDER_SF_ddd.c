/*
 * XREFs of WPP_RECORDER_SF_DDD @ 0x1C004FD8C
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 *     UsbhBuildHardwareID @ 0x1C0007ACC (UsbhBuildHardwareID.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0007D40 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0007FCC (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0008230 (UsbhGetRegUsbHubFlags.c)
 *     UsbhWaitConnect @ 0x1C001A510 (UsbhWaitConnect.c)
 *     UsbhHandleSuspend @ 0x1C00257E8 (UsbhHandleSuspend.c)
 *     UsbhExceptionTrace @ 0x1C004EF18 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}

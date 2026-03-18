/*
 * XREFs of WPP_RECORDER_SF_dx @ 0x1C0008F04
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C004E590 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004E670 (Controller_PopulateDeviceFlagsFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dx(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 3LL, &WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v9, (__int64 *)va);
}

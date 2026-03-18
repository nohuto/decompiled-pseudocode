/*
 * XREFs of WPP_RECORDER_SF_qxx @ 0x1C0019790
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000FF60 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qxx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      42LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      8LL,
      0LL);
  LOWORD(v7) = 42;
  return WppAutoLogTrace(a1, 5LL, 6LL, &WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids, v7, (__int64 *)va);
}

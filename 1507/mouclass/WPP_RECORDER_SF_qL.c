/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0005134
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0001670 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qL(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1487f3e8cc782e6b0bdfdf5e78fb0e3e_Traceguids,
      51LL,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 51;
  return WppAutoLogTrace(a1, 5LL, 3LL, &WPP_1487f3e8cc782e6b0bdfdf5e78fb0e3e_Traceguids, v7, (__int64 *)va, 8LL, va1);
}

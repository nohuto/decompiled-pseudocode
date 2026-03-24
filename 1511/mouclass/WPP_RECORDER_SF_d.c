/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0004FF4
 * Callers:
 *     MouConfiguration @ 0x1C000E020 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids,
      64LL,
      va,
      4LL,
      0LL);
  LOWORD(v7) = 64;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids, v7, va, 4LL, 0LL);
}

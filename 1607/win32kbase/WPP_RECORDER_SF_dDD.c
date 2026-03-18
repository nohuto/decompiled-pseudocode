/*
 * XREFs of WPP_RECORDER_SF_ddd @ 0x1C00D9E3C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ddd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
      57LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 57;
  return WppAutoLogTrace(
           a1,
           3LL,
           4LL,
           &WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL);
}

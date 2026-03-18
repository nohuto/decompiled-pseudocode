/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C00DB06C
 * Callers:
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C0081C70 (rimHandlePnpWaitersOnOwnedDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
      46LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      8LL,
      0LL);
  LOWORD(v7) = 46;
  return WppAutoLogTrace(
           a1,
           3LL,
           5LL,
           &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           8LL);
}

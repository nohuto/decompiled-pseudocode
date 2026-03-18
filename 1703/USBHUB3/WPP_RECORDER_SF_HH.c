/*
 * XREFs of WPP_RECORDER_SF_HH @ 0x1C0025A24
 * Callers:
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002AD04 (HUBMISC_GenerateControllerSuffix.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_HH(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int16 v8[12]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = 4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, __int16 *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
      118LL,
      va,
      2LL,
      v8,
      2LL,
      0LL);
  LOWORD(v7) = 118;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids, v7, va);
}

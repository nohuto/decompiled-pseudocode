/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0002294
 * Callers:
 *     PropertySetFeatureValue @ 0x1C0019400 (PropertySetFeatureValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_80c83a5f95bc33ef2fd362e91f73c97e_Traceguids,
      11LL,
      va,
      4LL,
      0LL);
  LOWORD(v7) = 11;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_80c83a5f95bc33ef2fd362e91f73c97e_Traceguids, v7, va);
}

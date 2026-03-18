/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0057F14
 * Callers:
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C00577A8 (CheckUSBFnIncludeDefaultCfg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_L(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_3217d8d9fc8e21c74f8f17a447a3431b_Traceguids, v8, va);
}

/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C00D8960
 * Callers:
 *     RIMHandleTTMDeviceRemoval @ 0x1C0080598 (RIMHandleTTMDeviceRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  LODWORD(v9[0]) = 2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, _QWORD *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
      14LL,
      v9,
      4LL,
      va,
      8LL,
      0LL);
  LOWORD(v8) = 14;
  return WppAutoLogTrace(
           a1,
           3LL,
           4LL,
           &WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
           v8,
           v9,
           4LL,
           va,
           8LL,
           0LL,
           v9[0]);
}

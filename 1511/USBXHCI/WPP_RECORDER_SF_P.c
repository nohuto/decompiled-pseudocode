/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0020250
 * Callers:
 *     Controller_RetrieveUrsData @ 0x1C004F9E4 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_P(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    (*(void (__fastcall **)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 3LL, &WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v8, va);
}

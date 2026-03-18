/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C001C594
 * Callers:
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0017A70 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001C660 (HUBUCX_UCXIoctlComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Ld(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids, v8, (__int64 *)va);
}

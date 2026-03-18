/*
 * XREFs of WPP_RECORDER_SF_qqdddx @ 0x1C0005154
 * Callers:
 *     Interrupter_D0ExitStopped @ 0x1C0003B2C (Interrupter_D0ExitStopped.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0004F30 (Interrupter_InterrupterRegisterIntialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqdddx(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+28h] [rbp-51h]
  __int64 v9; // [rsp+D0h] [rbp+57h] BYREF
  va_list va; // [rsp+D0h] [rbp+57h]
  __int64 v11; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+5Fh]
  __int64 v13; // [rsp+E0h] [rbp+67h] BYREF
  va_list va2; // [rsp+E0h] [rbp+67h]
  __int64 v15; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E8h] [rbp+6Fh]
  __int64 v17; // [rsp+F0h] [rbp+77h] BYREF
  va_list va4; // [rsp+F0h] [rbp+77h]
  va_list va5; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      va5,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 8LL, &WPP_743231bee2de335fe7554effc40d8bb7_Traceguids, v8, (__int64 *)va);
}

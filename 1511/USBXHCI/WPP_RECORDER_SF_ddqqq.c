/*
 * XREFs of WPP_RECORDER_SF_ddqqq @ 0x1C0025D5C
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0021B80 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C0021CD0 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ddqqq(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v11; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v13; // [rsp+C8h] [rbp+40h] BYREF
  va_list va2; // [rsp+C8h] [rbp+40h]
  __int64 v15; // [rsp+D0h] [rbp+48h] BYREF
  va_list va3; // [rsp+D0h] [rbp+48h]
  va_list va4; // [rsp+D8h] [rbp+50h] BYREF

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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    (*(void (__fastcall **)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      8LL,
      va4,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 12LL, &WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, v8, (__int64 *)va);
}

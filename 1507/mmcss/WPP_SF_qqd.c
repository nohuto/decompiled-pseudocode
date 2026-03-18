/*
 * XREFs of WPP_SF_qqd @ 0x1C0004200
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002C20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f98b419712b0369e885ff6594442aed1_Traceguids,
           10LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}

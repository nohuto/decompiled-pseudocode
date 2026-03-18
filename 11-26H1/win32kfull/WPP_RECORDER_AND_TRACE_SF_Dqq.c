/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dqq @ 0x1402F5B20
 * Callers:
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_Dqq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        ...)
{
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-58h]
  _DWORD v13[4]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+50h] BYREF
  va_list va; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v14 = va_arg(va1, _QWORD);
  v13[0] = 0x80000000;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, _DWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
               66LL,
               v13,
               4LL,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v12) = 66;
    return WppAutoLogTrace(
             a4,
             3LL,
             9LL,
             &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
             v12,
             v13,
             4LL,
             (__int64 *)va,
             8LL,
             va1,
             8LL,
             0LL);
  }
  return result;
}

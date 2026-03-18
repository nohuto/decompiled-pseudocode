/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LHHLLLL @ 0x1402A9990
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x140140B4C (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_LHHLLLL(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-79h]
  __int64 v12; // [rsp+108h] [rbp+67h] BYREF
  va_list va; // [rsp+108h] [rbp+67h]
  __int64 v14; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+110h] [rbp+6Fh]
  __int64 v16; // [rsp+118h] [rbp+77h] BYREF
  va_list va2; // [rsp+118h] [rbp+77h]
  __int64 v18; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va3; // [rsp+120h] [rbp+7Fh]
  __int64 v20; // [rsp+128h] [rbp+87h] BYREF
  va_list va4; // [rsp+128h] [rbp+87h]
  __int64 v22; // [rsp+130h] [rbp+8Fh] BYREF
  va_list va5; // [rsp+130h] [rbp+8Fh]
  va_list va6; // [rsp+138h] [rbp+97h] BYREF

  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v22 = va_arg(va6, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids,
               22LL,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               2LL,
               (__int64 *)va2,
               2LL,
               (__int64 *)va3,
               4LL,
               (__int64 *)va4,
               4LL,
               (__int64 *)va5,
               4LL,
               va6,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 22;
    return WppAutoLogTrace(
             a4,
             5LL,
             10LL,
             &WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             (__int64 *)va1,
             2LL,
             (__int64 *)va2,
             2LL,
             (__int64 *)va3);
  }
  return result;
}

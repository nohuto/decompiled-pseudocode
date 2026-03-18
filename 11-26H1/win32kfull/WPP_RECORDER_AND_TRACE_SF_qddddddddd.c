/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddddddddd @ 0x14018F394
 * Callers:
 *     xxxGetScrollBarInfo @ 0x14018ED28 (xxxGetScrollBarInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qddddddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  int v11; // [rsp+28h] [rbp-A9h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+128h] [rbp+57h] BYREF
  va_list va; // [rsp+128h] [rbp+57h]
  __int64 v15; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+5Fh]
  __int64 v17; // [rsp+138h] [rbp+67h] BYREF
  va_list va2; // [rsp+138h] [rbp+67h]
  __int64 v19; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+140h] [rbp+6Fh]
  __int64 v21; // [rsp+148h] [rbp+77h] BYREF
  va_list va4; // [rsp+148h] [rbp+77h]
  __int64 v23; // [rsp+150h] [rbp+7Fh] BYREF
  va_list va5; // [rsp+150h] [rbp+7Fh]
  __int64 v25; // [rsp+158h] [rbp+87h] BYREF
  va_list va6; // [rsp+158h] [rbp+87h]
  __int64 v27; // [rsp+160h] [rbp+8Fh] BYREF
  va_list va7; // [rsp+160h] [rbp+8Fh]
  __int64 v29; // [rsp+168h] [rbp+97h] BYREF
  va_list va8; // [rsp+168h] [rbp+97h]
  va_list va9; // [rsp+170h] [rbp+9Fh] BYREF

  va_start(va9, a8);
  va_start(va8, a8);
  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v23 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v25 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v27 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v29 = va_arg(va9, _QWORD);
  result = &retaddr;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
                            14LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            (__int64 *)va6,
                            4LL,
                            (__int64 *)va7,
                            4LL,
                            (__int64 *)va8,
                            4LL,
                            va9,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = 14;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
                          v11,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2,
                          4LL,
                          (__int64 *)va3,
                          4LL,
                          (__int64 *)va4,
                          4LL,
                          (__int64 *)va5);
  }
  return result;
}

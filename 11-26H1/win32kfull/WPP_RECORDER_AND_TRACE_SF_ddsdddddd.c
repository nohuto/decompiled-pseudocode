/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddsdddddd @ 0x14019CDBC
 * Callers:
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x14019EA2C (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_ddsdddddd(
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
  _UNKNOWN **result; // rax
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+28h] [rbp-99h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v23; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+6Fh]
  const char *v25; // [rsp+138h] [rbp+77h]
  __int64 v26; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  __int64 v28; // [rsp+148h] [rbp+87h] BYREF
  va_list va3; // [rsp+148h] [rbp+87h]
  __int64 v30; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+8Fh]
  __int64 v32; // [rsp+158h] [rbp+97h] BYREF
  va_list va5; // [rsp+158h] [rbp+97h]
  __int64 v34; // [rsp+160h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+9Fh]
  va_list va7; // [rsp+168h] [rbp+A7h] BYREF

  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, const char *);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v32 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v34 = va_arg(va7, _QWORD);
  result = &retaddr;
  v9 = v25;
  v10 = -1LL;
  v14 = 5LL;
  if ( a2 )
  {
    if ( v25 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v25[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = v25;
    if ( !v25 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
                            13LL,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            v18,
                            v17,
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
                            va7,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v15 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v14 = v10 + 1;
      v15 = v9 == 0LL;
    }
    if ( v15 )
      v9 = "NULL";
    LOWORD(v19) = 13;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
                          v19,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          v9,
                          v14,
                          (__int64 *)va2,
                          4LL,
                          (__int64 *)va3,
                          4LL,
                          (__int64 *)va4);
  }
  return result;
}
